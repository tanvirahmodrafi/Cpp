#include <bits/stdc++.h>
using namespace std;

int mySqrt(int x)
{
    if (x == 0 || x == 1)
        return x;
    int left = 1;
    int right = x;
    int result = 0;
    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        long long square = (long long)mid * mid;
        if (square == x)
            return mid;
        else if (square > x)
        {
            right = mid - 1;
        }
        else
        {
            left = mid + 1;
            result = mid;
        }
    }
    return result;
}

int main()
{
    int num;

    int t;
    cin >> t;
    while (t--)
    {
        cin >> num;
        int ans = 0;
        ans = (num%10) + (num/10);
        cout << ans << endl;
    }

    return 0;
}
