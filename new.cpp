#include <bits/stdc++.h>
using namespace std;

int main(){
    for (int  i = 1,j = 10; i < 10; i++)
    {
        while(j>0){
            int k =1;
            while(k<i*j){
                k/=2;
            }
            j--;
        }
    }
    
}