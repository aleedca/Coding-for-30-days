/**
 * Challenge Day 2 :)
 * Given a year y, find the date of the 256th day of that year according to the official Russian calendar during that year. 
 * Then print it in the format dd.mm.yyyy, where dd is the two-digit day, mm is the two-digit month, and yyyy is y.
**/

#include <iostream>
#include <string>
using namespace std;

string dayOfProgrammer(int year) {
    string date;
    if(year >= 1700 or year <= 2700){
        // subtracting the 256 days and the number of days in each month from January to August, we get the programmer's day in September
        if(year < 1918){
            // year only from julian calendar
            // 243 and 244 are the sum of days of each month but the result depends on whether the year is a leap one or not
            date = year % 4 == 0 ? to_string(256-244)+ ".09." + to_string(year):to_string(256-243)+ ".09." + to_string(year);
        }
        else if(year == 1918){
            // year of the transition calendar (julian to gregorian)
            // since Feb 14th is the 32nd day of 1918 it means the last day of Feb will be the 46th day of that year (32+14 = 46)
            // because of this year is not a leap year, so the sum of the other months (March to August) is 184 and if we add 46 the result is 230
            date = to_string(256-230)+ ".09." + to_string(year);
        }
        else{
            // year only from the greorian calendar
            date = year%400 == 0 or (year%4 == 0 and year%100 != 0) ? to_string(256-244)+ ".09." + to_string(year):to_string(256-243)+ ".09." + to_string(year);
        }
    }
    return date;
}

int main(){
    cout << dayOfProgrammer(1700) << endl;
    cout << dayOfProgrammer(2700) << endl;
    cout << dayOfProgrammer(1918) << endl;
    cout << dayOfProgrammer(2015) << endl;
    return 0;
}
