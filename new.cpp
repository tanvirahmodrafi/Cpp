// #include <bits/stdc++.h>
// using namespace std;

// bool isSquare(int n)
// {
//     int root = sqrt(n);
//     return root * root == n;
// }

// int main()
// {
//     int test;
//     cin >> test;

//     while (test--)
//     {
//         string s;
//         cin >> s;
//         int n;
//         cin >> n;
//         bool valid = true;

//         if(n<4){
//             cout << "No"<< endl;
//             continue;
//         }

//         if(n == 4 ){
//             for (int i = 0; i < 4; i++)
//             {
//                 if (s[i] != '1'){
//                     valid = false;
//                 }
//             }
            
//         }
//         if(valid == false){
//             continue;
//         }

//         if (!isSquare(n))
//         {
//             cout << "NO" << endl;
//             continue;
//         }

//         int m = sqrt(n);
        
//         for (int i = 0; i < m ; i++)
//         {
//             if (s[i] != '1')
//             {
//                 valid = false;
//                 break;
//             }
//         }

        
//         if (valid)
//         {
//             for (int i = m; i < n - m; i++)
//             {
//                 if ((i % m == 0 || (i + 1) % m == 0) && s[i] != '1')
//                 {
//                     valid = false;
//                     break;
//                 }
//                 if( (i % m != 0 ) && ((i + 1) % m != 0) && s[i] != '0'){
//                     valid = false;
//                     break;
//                 }
//             }
//         }

        
//         if (valid)
//         {
//             for (int i = n - m + 1; i < n; i++)
//             {
//                 if (s[i] != '1')
//                 {
//                     valid = false;
//                     break;
//                 }
//             }
//         }

//         if (valid)
//         {
//             cout << "YES" << endl;
//         }
//         else
//         {
//             cout << "NO" << endl;
//         }
//     }

//     return 0;
// }


#include <iostream>
#include <cmath>
using namespace std;

bool isPerfectSquare(int n) {
    int root = sqrt(n);
    return root * root == n;
}

bool isBeautifulSquareMatrix(const string& s, int r) {
    // First row and last row
    for (int i = 0; i < r; i++) {
        if (s[i] != '1' || s[(r - 1) * r + i] != '1') {
            return false;
        }
    }
    
    // First and last columns
    for (int i = 1; i < r - 1; i++) {
        if (s[i * r] != '1' || s[i * r + r - 1] != '1') {
            return false;
        }
    }
    
    // Check inner cells
    for (int i = 1; i < r - 1; i++) {
        for (int j = 1; j < r - 1; j++) {
            if (s[i * r + j] != '0') {
                return false;
            }
        }
    }
    
    return true;
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        string s;
        cin >> n >> s;
        
        if (!isPerfectSquare(n)) {
            cout << "No" << endl;
            continue;
        }
        
        int r = sqrt(n);
        
        if (isBeautifulSquareMatrix(s, r)) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
    
    return 0;
}
