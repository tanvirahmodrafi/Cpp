#include <bits/stdc++.h>

using namespace std;

int main() {
    string inp;
    cin >> inp;
    int n = inp.size();
    int i = 0;
    string ans;
    while (i < n) {
        if ((n-i > 2) and inp[i] == 'W' and inp[i+1] == 'U' and inp[i+2] == 'B') {
            i+=3;
        }else{
            ans +=inp[i];
            i++;
        }
        
    }
    cout << ans << endl;
    
    return 0;
}
