/**
 * Challenge Day 6 :)
 * Given a sequence of n integers, where each element is distinct and satisfies 1<=p(x)<=n. 
 * For each x where 1<=x<=n, that is x increments from 1 to n, find any integer y such that
 * p(p(y)) equals x and keep a history of the values of y in a return array.
**/

#include <iostream>
#include <vector>
using namespace std;

vector<int> permutationEquation(int n, vector<int> p) {
    vector<int> values;
    int x = 1;
    
    while(x <= n){
        int index = 0;
        int counter = 0;
        int y = x;
        while(counter <= 2){
            if(p[index] == y){
                y = index + 1;
                index = 0;
                counter++;
                if(counter == 2){
                    values.push_back(y);
                    break;
                }
            }
            else index++;
        }
        x++;
    }
    return values;
}

void printArray(int n, vector<int> p){
    for(int index = 0; index < n; index++){
        cout << p[index] << " " << endl;
    }
}

int main(){
    printArray(5, permutationEquation(5,{5, 2, 1, 3, 4}));
    printArray(3, permutationEquation(3,{2, 3, 1}));
    return 0;
}