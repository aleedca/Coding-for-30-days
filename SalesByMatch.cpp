/**
 * Challenge Day 3 :)
 * There is a large pile of socks that must be paired by color. 
 * Given an array of integers representing the color of each sock, 
 * determine how many pairs of socks with matching colors there are.
**/

#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

int sockMerchant(int n, vector<int> ar) {
    int pairCounter = 0;
    sort(begin(ar), end(ar));
    
    int i = 0;
    int j = 1;
    
    while(j < n){
        if(ar[i] == ar[j]){
            pairCounter++;
            i = j+1;
            j = i+1;
        }
        i = j;
        j = i+1;
        cout << i << endl;
    }
    
    return pairCounter;
}

int main(){

    int n = 9;
    vector <int> ar;

    ar.push_back(10);
    ar.push_back(20);
    ar.push_back(20);
    ar.push_back(10);
    ar.push_back(10);
    ar.push_back(30);
    ar.push_back(50);
    ar.push_back(10);
    ar.push_back(20);

    cout << sockMerchant(n, ar) << endl;

    return 0;
}