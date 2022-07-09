/**
 * Challenge Day 7 :)
 * Two children, Lily and Ron, want to share a chocolate bar. Each of the squares has an integer on it.
 * Lily decides to share a contiguous segment of the bar selected such that:
 * The length of the segment matches Ron's birth month and the sum of the integers on the squares is equal 
 * to his birth day. Determine how many ways she can divide the chocolate.
**/

#include <iostream>
#include <vector>
using namespace std;

int birthday(vector<int> s, int d, int m, int n) {
    int result = 0;
    
    if(n == 1 && s[0] == d) return 1;
    
    for(int counter = 0; counter < n - 1; ++counter) { // prefix operation (++variable): increments and then assigns the value
        int sum = 0;
        for(int i = 0; i < m ; ++i) sum += s[i]; // prefix operation
        result += (sum == d && s.size() >= m); // sums result only if the condition is meeting
        s.erase(s.begin());
    }
    return result;
}

int main(){
    cout << birthday({2, 2, 1, 3, 2}, 4, 2, 5) << endl;
    cout << birthday({1, 1, 1, 1, 1, 1}, 3, 2, 6) << endl;
    cout << birthday({2, 1, 2}, 3, 2, 3) << endl;
    cout << birthday({7}, 7, 2, 1) << endl;
    return 0;
}
