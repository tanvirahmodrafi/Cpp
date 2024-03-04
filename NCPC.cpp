// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
#include <string>
using namespace std;

bool isIsomorphic(string s, string t) {
    if(s.length() != t.length()) return false;
    unordered_map<char,char> seen;
    for (int i = 0; i < s.length(); i++)
    {
        char ch = s[i];
        char ta = t[i];
        if(seen.find(ch) != seen.end()){
            if(seen[ch] != ta) return false;
        }
        for (const auto& pair : seen) {
            if (pair.second == ta && pair.first != ch) {
                return false;
            }
        }
         
    }
    return true;
}

int main()
{
    cout<< isIsomorphic("egg","add")<< endl;

    return 0;
}
