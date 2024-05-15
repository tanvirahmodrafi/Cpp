#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;
unordered_map<int, int> num;

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int numb;
        cin >> numb;
        num[numb]++;
    }
    int ans = 0;

    for (const auto& pair : num) {

        int f = pair.first;
        int s = pair.second;

        if(f == s) {
            continue;
        }else if(f < s) {
            ans += (s-f);
        }else{
            ans += s;
        }
    }
    cout << ans << endl;
       
    return 0;
}
