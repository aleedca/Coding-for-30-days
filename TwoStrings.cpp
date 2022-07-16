
/**
 * Challenge Day 9 :)
 * Given two strings, determine if they share a common substring. 
 * A substring may be as small as one character.
 * Frequency array help from https://prepinsta.com/cpp-program/to-find-the-frequency-of-elements-in-an-array/
**/

#include <bits/stdc++.h>
using namespace std;

string twoStrings(string s1, string s2) {
    int n1 = s1.size();
    int n2 = s2.size();
    char charArray1[n1 + 1];
    char charArray2[n2 + 1];
    
    //conversion each string to different array
    strcpy(charArray1, s1.c_str());
    strcpy(charArray2, s2.c_str());
    strcpy(charArray1, s1.c_str());
    strcpy(charArray2, s2.c_str());
    
    //hash-map to store frequency of characters
    unordered_map <char, int> map1;
    unordered_map <char, int> map2;
    
    //if at least they have one letterin common , it will be a substring. No need to do combinations
    for(int i = 0; i < n1; i++) map1[charArray1[i]]++;
    for(int i = 0; i < n2; i++) map2[charArray2[i]]++;
    
    for(auto it = map1.begin(); it!=map1.end(); it++){
        for(auto it2 = map2.begin(); it2!=map2.end(); it2++)
            if((*it).first == (*it2).first) return "YES";
    }
    
    return "NO";
}

int main(){
    cout << twoStrings("art", "hi") << endl;
    cout << twoStrings("hello", "world") << endl;
    return 0;
}