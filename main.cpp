#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    long long s;
    cin >> n >> s;

    vector<long long > a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    long long count= 0,sum = 0;
    long long  l = 0,r=0;
    map<long long ,long long> q;
    while(r<n) {
        sum+=a[r];
        while(sum>s) {
            sum-=a[l];
            l++;
        }
        long long n = r-l+1;
        count+=n*(n+1)/2;
        r++;
    }
    //hello
    cout << count << endl;
    return 0;
}
