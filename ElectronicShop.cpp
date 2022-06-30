/**
 * Challenge Day 4 :)
 * A person wants to determine the most expensive computer keyboard and USB drive that can 
 * be purchased with a give budget. Given price lists for keyboards and USB drives and a 
 * budget, find the cost to buy them. If it's not possible to buy both items, return -1.
**/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int getMoneySpent(vector<int> keyboards, vector<int> drives, int b) {
    vector <int> totalPrices;
    
    for(int i = 0; i < keyboards.size(); i++){
        for(int j = 0; j < drives.size(); j++){
            int sum = keyboards[i] + drives[j];
            if(sum <= b) totalPrices.push_back(sum); 
        }
    }
    
    if(totalPrices.empty()) return -1;
    else{
        return *max_element(totalPrices.begin(),totalPrices.end());
    }
}

int main(){
    cout << getMoneySpent({3, 1}, {5, 2, 8}, 10) << endl;
    cout << getMoneySpent({4}, {5}, 5) << endl;
    return 0;
}