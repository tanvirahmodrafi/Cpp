#include <bits/stdc++.h>
using namespace std;

vector<int> findIntersectionValues(vector<int>& nums1, vector<int>& nums2) {
    unordered_set<int> it(nums1.begin(), nums1.end());
    vector<int> ans;
    for (int i = 0; i < nums2.size(); i++)
    {
        if(it.find(nums2[i]) != it.end()){
            ans.push_back(i);
        }
    }
    return ans;
}

int main()
{
    
    
    
    cout<< isalnum('$');

    return 0;
}