// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
#include <string>
using namespace std;
int maxProfit(vector<int>& prices) {
    int max= INT_MIN;
    for (int i = 0; i < prices.size()-1; i++)
    {
        for (int j = i+1; j < prices.size(); j++)
        {
            if(max < (prices[j]-prices[i])){
                max = prices[j]-prices[i];
            }
        }
    }
    return max;
}

int main()
{

   for(int i =1;i<=31;i++){
        cout<<i<<": "<<endl;
    }



    return 0;
}
