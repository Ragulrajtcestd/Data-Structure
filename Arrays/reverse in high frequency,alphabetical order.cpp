#include <iostream>
#include <string>
#include <unordered_map>
#include <algorithm>
using namespace std;

    string frequencySort(string s) {
    unordered_map<char, int> freq;
    for (char c : s) {
        freq[c]++;
    }
    cout<<endl;

    sort(s.begin(), s.end(), [&](char a, char b) {
        return freq[a] > freq[b] || (freq[a] == freq[b] && a < b);
    });

    return s;
}

int main() {
    string a;
    cout<<"Enter a word to reverse it in alphabetical order:";
    cin>>a;
    string sortedString=frequencySort(a);
    cout<<"Sorted String: "<<sortedString<<endl;

    return 0;
}
