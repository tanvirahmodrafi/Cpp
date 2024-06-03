#include <bits/stdc++.h>
using namespace std;

int part(int arr[], int l, int r){
    int pivot = arr[r];
    int i = l-1;
    for (int j = l; j < r; j++)
    {
        if(arr[j] < pivot){
            i++;
            swap(arr[j], arr[i]);
        }
    }
    i++;
    swap(arr[i], arr[r]);
    return i;
}

void qs(int arr[],int l,int r){
    if(l<r){
        int pivot = part(arr,l,r);
        qs(arr,l,pivot-1);
        qs(arr,pivot+1,r);
    }
}
int main(){
    int arr[6] = {3,8,5,1,21,11};
    qs(arr,0,5);
    for (int i = 0; i < 6; i++)
    {
        cout<<arr[i]<<' ';
    }
}