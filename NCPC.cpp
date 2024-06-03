#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>

using namespace std;

vector<int> min_additional_problems(int t, vector<pair<pair<int, int>, string>> test_cases) {
    vector<int> results;

    for (int i = 0; i < t; ++i) {
        int n = test_cases[i].first.first;
        int m = test_cases[i].first.second;
        string problems = test_cases[i].second;

        unordered_map<char, int> count;
        for (char ch = 'A'; ch <= 'G'; ++ch) {
            count[ch] = 0;
        }
        for (char ch : problems) {
            count[ch]++;
        }

        // Calculate the number of additional problems needed
        int additional_problems_needed = 0;
        for (char ch = 'A'; ch <= 'G'; ++ch) {
            if (count[ch] < m) {
                additional_problems_needed += (m - count[ch]);
            }
        }

        results.push_back(additional_problems_needed);
    }

    return results;
}

int main() {
    int t;
    cin >> t;
    vector<pair<pair<int, int>, string>> test_cases(t);

    for (int i = 0; i < t; ++i) {
        int n, m;
        cin >> n >> m;
        string problems;
        cin >> problems;
        test_cases[i] = {{n, m}, problems};
    }

    vector<int> results = min_additional_problems(t, test_cases);

    for (int result : results) {
        cout << result << endl;
    }

    return 0;
}
