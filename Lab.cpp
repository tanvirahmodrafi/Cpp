#include <bits/stdc++.h>
using namespace std;

struct obj{
    int age;
    double score;
    string name;
};

int partition(vector<obj> &arr, int low, int high) {
    obj pivot = arr[high];
    int i = low - 1;
    for (int j = low; j < high; j++) {
        bool condition = (arr[j].age < pivot.age) ||
                         (arr[j].age == pivot.age && arr[j].score > pivot.score) ||
                         (arr[j].age == pivot.age && arr[j].score == pivot.score && arr[j].name < pivot.name);
        if (condition) {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    return i + 1;
}
void quicksort(vector<obj> &arr, int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);
        quicksort(arr, low, pi - 1);
        quicksort(arr, pi + 1, high);
    }
}

int main()
{

    int n;
    cin >> n;
    vector<obj> id(n);
    for (int i = 0; i < n; i++)
    {
        cin>>id[i].age;
    }
    for (int i = 0; i < n; i++)
    {
        cin>>id[i].score;
    }
    for (int i = 0; i < n; i++)
    {
        cin>>id[i].name;
    }

    quicksort(id, 0, n - 1);


    cout << "Sorted objects:" << endl;
    for (const auto &o : id) {
        cout << "Age: " << o.age << ", Score: " << o.score << ", Name: " << o.name << endl;
    }


    
    
    return 0;
}