#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;

int main()
{
    unordered_set<int> vals;
    int target, inp;
    cin >> inp;
    int nums[inp];

    for (int i = 0; i < inp; i++)
    {
        cin >> nums[i];
    }
    cin >> target;

    for (int i = 0; i < 7; i++)
    {
        vals.insert(nums[i]);
    }

    for (int i = 0; i < 7; i++)
    {
        int n = target - nums[i];
        if (vals.find(n) != vals.end())
        {
            if (n != nums[i])
            {
                cout << i << " " << distance(nums, find(nums, nums + inp, n)) << endl;
            }
            return 0;
        }
    }

    return 0;
}

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> vals;
        vector<int> result;
        int inp = nums.size();

        for (int i = 0; i < inp; i++) {
            vals.insert(make_pair(nums[i],i));
        }

        for (int i = 0; i < inp; ++i) {
            int complement = target - nums[i];
            if (vals.find(complement) != vals.end() && vals[complement] != i) {
                result.push_back(i);
                result.push_back(distance(nums.begin(), find(nums.begin(), nums.end(), complement)));
                return result;
                
            }
        }

        return result;

    }
};