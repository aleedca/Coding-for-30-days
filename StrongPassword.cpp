/**
 * Challenge Day 11 :)
 * The website considers a password to be strong if it satisfies the following criteria:
 * Its length is at least, It contains at least one digit, It contains at least one lowercase 
 * English character, It contains at least one uppercase English character, It contains at least 
 * one special character. Given the string she typed, can you find the minimum number of characters 
 * she must add to make her password strong?
**/

#include <bits/stdc++.h>
using namespace std;

bool checkPassword(string type, string password){
    int lenType = type.size();
    
    for(int i = 0; i < lenType; i++){
        cout << bool(password.find(type[i])) << endl;
        cout << "ok" << endl;
        if(password.find(type[i])) return false;
    }
    
    return true;
}

int minimumNumber(int n, string password) {
    // Return the minimum number of characters to make the password strong
    
    string numbers = "0123456789";
    string lower_case = "abcdefghijklmnopqrstuvwxyz";
    string upper_case = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string special_characters = "!@#$%^&*()-+";
    int result = 0;
    
    if(checkPassword(numbers, password)){result++;}
    //if(checkPassword(lower_case, password)) result++;
    //if(checkPassword(upper_case, password)) result++;
    //if(checkPassword(special_characters, password)) result++;
    
    return result;
}

int main(){
    cout << minimumNumber(5, "2bbbb") << endl;
    cout << minimumNumber(5, "2bb#A") << endl;
    return 0;
}