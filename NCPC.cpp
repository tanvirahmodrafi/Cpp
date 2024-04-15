#include <bits/stdc++.h>
using namespace std;
vector<int> twoSum(vector<int>& numbers, int target) {
    vector<int>ans;
    int i = 0;
    int j = numbers.size();

    while (i < j)
    {
        if (numbers[i]+ numbers[j] == target){
            ans.push_back(i);
            ans.push_back(j);
            return ans;
        }else if (numbers[i] + numbers[j] < target){
            j--;
        }else{
            i++;
        }
    }      
}

int main()
{
    // vector<int> nums;
    // nums.push_back(0);
    // nums.push_back(0);
    // nums.push_back(0);
    // nums.push_back(1);
    // nums.push_back(1);
    // nums.push_back(1);
    // nums.push_back(1);
    // nums.push_back(2);
    // nums.push_back(3);
    // nums.push_back(3);
   
    
    
}
