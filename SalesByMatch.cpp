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
    int i = 0;
    
    sort(begin(ar), end(ar)); //sort the vector
    
    while (i < n-1){
        if(ar[i] == ar[i+1]){
            pairCounter++;
            i += 2;
        }
        else{
            i++;
        }
    }
    
    return pairCounter;
}

int main(){
    cout << sockMerchant(9, {10,20,20,10,10,30,50,10,20}) << endl;
    return 0;
}