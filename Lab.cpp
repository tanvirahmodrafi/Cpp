#include <bits/stdc++.h>
using namespace std;

int N, lastDigit, key;

int binarySearch(int arr[], int n, int k)
{
    int s = 0;
    int e = n - 1;
    while (s <= e)
    {
        int mid = (s + e) / 2;
        if (arr[mid] == k)
        {
            return mid;
        }
        else if (arr[mid] > k)
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
    }
    return -1;
}

void bubbleSort(int arr[], int n, int k)
{
    int temp = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - (i + 1); j++)
        {
            if (arr[j] < arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    cout << "Sorted array is: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << '\n';

    if (binarySearch(arr, n, k) != -1)
    {
        cout << "You have found the key value at Index " << binarySearch(arr, n, k) << '\n';
    }
    else
    {
        cout << "Sorry, Try Again" << '\n';
    }
}
void selectionSort(int arr[], int n, int k)

{
    int temp = INT_MIN;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] <= arr[j])
            {
                temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
    cout << "Sorted array is: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << '\n';

    if (binarySearch(arr, n, k) != -1)
    {
        cout << "You have found the key value at Index " << binarySearch(arr, n, k) << '\n';
    }
    else
    {
        cout << "Sorry, Try Again" << '\n';
    }
}
void insertionSort(int arr[], int n, int k)
{
    for (int i = 1; i < n; i++)
    {
        int current = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] < current)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = current;
    }

    cout << "Sorted array is: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << '\n';

    if (binarySearch(arr, n, k) != -1)
    {
        cout << "You have found the key value at Index " << binarySearch(arr, n, k) << '\n';
    }
    else
    {
        cout << "Sorry, Try Again" << '\n';
    }
}

int main(void)
{

    cout << "Enter your the last digit of your id" << '\n';
    cin >> lastDigit;

    cout << "Enter the size of array" << '\n';
    cin >> N;
    int arr[N];

    cout << "Enter the elements" << '\n';
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter the key number you want to search in your array" << '\n';
    cin >> key;

    if (lastDigit % 2 == 0)
    {
        selectionSort(arr, N, key);
    }
    else if (lastDigit % 2 == 1)
    {
        bubbleSort(arr, N, key);
    }
    else
    {
        insertionSort(arr, N, key);
    }
}