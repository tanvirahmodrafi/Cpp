#include <bits/stdc++.h>
using namespace std;

vector<int> findGridDimensions(int k, vector<int>& nums) {
    sort(nums.begin(), nums.end());
    vector<int> result;

    // Try all divisors of k to find valid grid dimensions
    for (int n = 1; n * n <= k; ++n) {
        if (k % n == 0) {
            int m = k / n;

            
            bool isValid = true;
            for (int i = 0; i < n; ++i) { // for each row
                for (int j = 1; j < m; ++j) { // for each column in the row
                    if (nums[i * m + j] < nums[i * m + j - 1]) { // check if sorted
                        isValid = false;
                        break;
                    }
                }
                if (!isValid) {
                    break;
                }
            }

            if (isValid) {
                result.push_back(n);
                result.push_back(m);
                return result;
            }
        }
    }

    return result; // No valid grid found
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int k;
        cin >> k;

        vector<int> nums(k);
        for (int i = 0; i < k; ++i) {
            cin >> nums[i];
        }

        vector<int> dimensions = findGridDimensions(k, nums);
        cout << dimensions[0] << " " << dimensions[1] << endl;
    }

    return 0;
}
