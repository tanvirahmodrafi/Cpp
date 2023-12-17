#include <bits/stdc++.h>
using namespace std;

int main(){
    string input;
    cin >> input;
    if (input.size() <= 10){
        cout << input;
    }
    else{
        cout << input[0]<<input.size()-2<<input[input.size()-1];
    }
    
}