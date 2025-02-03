#include <bits/stdc++.h>

using namespace std;

int main() {
    string inp;
    cin >> inp;
    int one = 0;
    int len = inp.length();

    for (int i = 1; i < len; i++) {
        while(inp[i] == inp[i - 1]) {
            one++;
            i++;
        }
        if(one >= 6) {
            cout <<"YES"<<endl;
            return 0;
        }
        one = 0;
    }
    cout <<"NO"<<endl;
    return 0;
}