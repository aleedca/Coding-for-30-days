/**
 * Challenge Day 8 :)
 * Every time you give a loaf of bread to some person i, you must also give a loaf of bread to the person 
 * immediately in front of or behind them in the line (i.e., persons i+1 or i-1). After all the bread is 
 * distributed, each person must have an even number of loaves. Given the number of loaves already held by 
 * each citizen, find and print the minimum number of loaves you must distribute to satisfy the two rules above. 
 * If this is not possible, print NO.
**/

#include <iostream>
#include <vector>
using namespace std;

string fairRations(int length, vector<int> B) {
    int result = 0;
    
    if(length <= 2) return "NO";
    
    for(int i = 0; i < length; i++){
        if(B[i] % 2 != 0 && i == 0){
            B[i] += 1;
            B[i+1] += 1; 
            result += 1;
        }
        if(i == (length - 1) && B[i] % 2 != 0){
            B[i] += 1;
            B[i-1] += 1; 
            result += 1;
        }
        if(i > 0 && i < length -1){
            cout << "hi" << endl;
            if(i-1 % 2 != 0){
                B[i] += 1;
                B[i-1] += 1;  
            }
            else if(i+1 % 2 != 0){
                B[i] += 1;
                B[i+1] += 1;  
            }
            result += 2;
        }
    }
    return to_string(result);
}

int main(){
    cout << fairRations(5, {2, 3, 4, 5, 6}) << endl;
    cout << fairRations(2, {1, 2}) << endl;
    return 0;
}
