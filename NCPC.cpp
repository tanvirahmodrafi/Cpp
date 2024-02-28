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

   vector<int> prices;
   prices.push_back(7);
   prices.push_back(1);
   prices.push_back(5);
   prices.push_back(3);
   prices.push_back(6);
   prices.push_back(4);
   cout<<maxProfit(prices)<<endl;


    return 0;
}
