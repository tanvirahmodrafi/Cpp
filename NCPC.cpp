// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
#include <string>
using namespace std;
int bs(vector<int> nums,int target){
    int start = 0;
    int end = nums.size()-1;
    int mid;
    if(nums[0]>= target){
        return 0;
    }

    while (start <= end){
        mid = (start + end) / 2;

        if (nums[mid] == target){
            return mid;
        }
        else if (nums[mid] > target){
            end = mid - 1;
        }
        else{
            start = mid + 1;
        }
    }
    if(nums[mid]<target){
    return mid+1;}
    return mid;

}

int main()
{
    vector<int> nums;
    nums.push_back(1);
    nums.push_back(3);
    nums.push_back(5);
    nums.push_back(6);
    // nums.push_back();
    // nums.push_back();
    // nums.push_back();
    // nums.push_back();
    // nums.push_back();
    cout<<bs(nums,2);

    return 0;
}
