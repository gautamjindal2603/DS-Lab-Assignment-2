#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {
    string s1 = "Hello", s2 = "World";

    // (a) Concatenate
    cout << "Concatenation: " << s1 + s2 << endl;

    // (b) Reverse
    string rev = s1;
    reverse(rev.begin(), rev.end());
    cout << "Reverse: " << rev << endl;

    // (c) Delete vowels
    string noVowels="";
    for(char c : s1)
        if(string("aeiouAEIOU").find(c) == string::npos) noVowels+=c;
    cout << "Without vowels: " << noVowels << endl;

    // (d) Sort characters
    string sorted=s1;
    sort(sorted.begin(), sorted.end());
    cout << "Sorted string: " << sorted << endl;

    // (e) Upper to lower
    string lower="";
    for(char c : s1) lower += tolower(c);
    cout << "Lowercase: " << lower << endl;
}
