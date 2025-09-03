#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {
    string s1 = "Hello", s2 = "World";


    cout << "Concatenation: " << s1 + s2 << endl;

  
    string rev = s1;
    reverse(rev.begin(), rev.end());
    cout << "Reverse: " << rev << endl;

  
    string noVowels="";
    for(char c : s1)
        if(string("aeiouAEIOU").find(c) == string::npos) noVowels+=c;
    cout << "Without vowels: " << noVowels << endl;

 
    string sorted=s1;
    sort(sorted.begin(), sorted.end());
    cout << "Sorted string: " << sorted << endl;


    string lower="";
    for(char c : s1) lower += tolower(c);
    cout << "Lowercase: " << lower << endl;
}
