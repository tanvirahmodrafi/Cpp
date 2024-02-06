#include <bits/stdc++.h>

using namespace std;

struct Dragon {
    int s;
    int b;
    bool operator < (const Dragon& other) const {
        return s < other.s;
    }
};
void main() {
    int s, n;
    cin >> s >> n;

    vector<Dragon> dragons(n);
    
    for (int i = 0; i < n; ++i) {
        cin >> dragons[i].s >> dragons[i].b;
    }
    
    sort(dragons.begin(), dragons.end());
    
    for (int i = 0; i < n; i++) {
        if (s > dragons[i].s) {
            s += dragons[i].b;
        } else {
            cout << "NO" << endl;
            return ;
        }
    }

    cout << "YES" << endl;

    return ;
}