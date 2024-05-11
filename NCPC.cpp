#include <iostream>
#include <algorithm>
using namespace std;
int longestPalindromeSubseq(string s)
{
    sort(s.begin(), s.end());
    int j = 1, m = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (i + 1 == s.length() || s[i] != s[i + 1])
        {
            m = max(j, m);
            j = 1;
        }
        else
        {
            j++;
        }
    }

    return m;
}

int main()
{
    string n = "bbbbaabbb";

    cout << n << endl;

    return 0;
}
