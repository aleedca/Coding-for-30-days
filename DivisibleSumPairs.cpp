/**
 * Challenge Day 1 :)
 * Given an array of integers, a positive integer k and a positive integer n 
 * which is the length of the array, determine the number of (i,j) pairs where 
 * i < j and ar[i] + ar[j] is divisible by k.
**/

#include <iostream>
#include <vector>
using namespace std;

int divisibleSumPairs(int n, int k, vector<int> ar) {
    int pairCounter = 0;
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            (ar[i] + ar[j]) % k == 0 and i<j ? pairCounter++ : pairCounter;   
        }
    }
    return pairCounter;
}

int main(){
    cout << divisibleSumPairs(6, 3, {1,3,2,6,1,2}) << endl;
    return 0;
}
