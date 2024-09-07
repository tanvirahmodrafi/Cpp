#include <iostream>
using namespace std;

int main() {
    int t;  
    cin >> t;
    
    while (t--) {
        long long x, y, k;
        cin >> x >> y >> k;
        
        
        long long moves_x = (x + k - 1) / k;
        long long moves_y = (y + k - 1) / k;
        
        
        long long result = max(moves_x, moves_y) * 2;
        
        if (moves_x == moves_y) {
            result--;
        }
        if(x % k == 0 && y % k == 0) {
            result--;
        }
        
        cout << result << endl;
    }
    
    return 0;
}
