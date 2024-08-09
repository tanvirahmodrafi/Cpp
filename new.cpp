#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin >> test;

    while(test--)
    {
        int n, k;
        cin >> n >> k;

        vector<int> inp(k);
        vector<int> ans;
        int ones = 0, maxs = 0, finalAns = 0;

        for (int i = 0; i < k; i++)
        {
            cin >> inp[i];
        }

        for (int i = 0; i < k; i++)
        {
            if(inp[i] == 1){
                ones++;
            } else {
                maxs = max(maxs, inp[i]);
            }
        }
        bool in = false;
        for (int i = 0; i < k; i++)
        {
            if(inp[i] == 1){
                continue;
            } else if(inp[i] == maxs && !in){
                in = true;
                continue;
            }else{
                ans.push_back(inp[i]);
            }
        }
        

        finalAns += ones;

        for (int i = 0; i < ans.size(); i++)
        {
            finalAns += ((ans[i] - 1)+ans[i]);
        }

        cout << finalAns << endl;
    }

    return 0;
}