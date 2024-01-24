#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[5] = {1,8,3,0,6};
    int n = 5;
    // for (int i = 1; i < n; i++)
    // {
    //     int j = i - 1;
    //     int current = arr[i];
    //     while (j >= 0 && arr[j] > current)
    //     {
    //        arr[j+1]=arr[j];
    //        j--;
    //     }
    //     arr[j+1] = current;
    // }
    for (int i = 1; i < n; i++)
    {
        int j = i -1;
        int current = arr[i];
        while(j >= 0 && arr[j] > current){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1] = current;
    }
    

    for (int i = 0; i < n; i++)
    {
        cout << arr[i]<<' ';
    }
    
    return 0;
}