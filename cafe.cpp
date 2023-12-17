#include <bits/stdc++.h>
using namespace std;
int main(){
    int arr[5]={2,9,1,5,3};
    int count = 5;
    for (int i = 1; i < count; i++)
    {
        int cur = arr[i];
        int j = i-1;
        while(j>=0 && arr[j] > cur){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = cur;
    }
    
    for (int i = 0; i < count; i++)
    {
        cout<<arr[i]<<' ';
    }
    
    
}