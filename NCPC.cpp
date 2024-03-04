// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
#include <string>
using namespace std;

int strStr(string haystack, string needle) {
    //haystack boro
    //needle choto

    for (int i = 0; i < haystack.length()+1-needle.length(); i++)
    {
        string j = haystack.substr(i,needle.length());
        if(j == needle){
            return i;
        }
    }
    return -1;
        
}

int main()
{
    cout<<strStr("sad","sad")<<endl;
    string str = "sadbutsad", n = "sad";
    cout<<str.substr(0,n.length());


    return 0;
}
