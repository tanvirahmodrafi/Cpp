#include <iostream>
using namespace std;

long long find_kth_largest(long long n, long long m, long long k) {
    long long left = 1, right = n * m;
    while (left < right) {
        long long mid = (left + right) / 2;
        long long count = 0;
        for (long long i = 1; i <= n; ++i) {
            count += min(mid / i, m);
        }
        if (count < k) {
            left = mid + 1;
        } else {
            right = mid;
        }
    }
    return left;
}

int main() {
    long long n, m, k;
    cin >> n >> m >> k;
    cout << find_kth_largest(n, m, k) << endl;
    return 0;
}
