/**
 * Challenge Day 5 :)
 * The Utopian Tree goes through 2 cycles of growth every year. Each spring, it 
 * doubles in height. Each summer, its height increases by 1 meter.A Utopian 
 * Tree sapling with a height of 1 meter is planted at the onset of spring.
**/

#include <iostream>
using namespace std;

int utopianTree(int n) {
    if(n < 3) return n + 1;
    
    int height = 2;
    int cycle = 2;
    
    while(cycle <= n){
        if (cycle % 2 == 0) height++;
        else height *= 2;
        cycle++;
    }

    return height;
}

int main(){
    cout << utopianTree(5) << endl;
    cout << utopianTree(0) << endl;
    cout << utopianTree(2) << endl;
    cout << utopianTree(8) << endl;
    return 0;
}