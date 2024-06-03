#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, f, k;
        cin >> n >> f >> k;

        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        int favorite_value = a[f - 1];
        sort(a.begin(), a.end(), greater<int>());

        int favorite_count = count(a.begin(), a.end(), favorite_value);
        int first_occurrence = -1;
        for (int i = 0; i < n; ++i) {
            if (a[i] == favorite_value) {
                first_occurrence = i;
                break;
            }
        }
        int last_occurrence = first_occurrence + favorite_count - 1;

        if (last_occurrence < k) {
            cout << "YES" << endl;
        } else if (first_occurrence >= k) {
            cout << "NO" << endl;
        } else {
            cout << "MAYBE" << endl;
        }
    }

    return 0;
}
