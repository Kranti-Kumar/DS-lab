#include <bits/stdc++.h>
using namespace std;


void selectionSort(int arr[], int n)
{
    int i, j, min_idx;
    for (i = 0; i < n - 1; i++)
    {
        min_idx = i;
        for (j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min_idx])
                min_idx = j;
        }
        if (min_idx != i)
            swap(arr[min_idx], arr[i]);
    }
}

void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
        cout << endl;
    }
}


int main()
{
    int size;
    cout<< "Enter the size of array :"<< endl;
    cin >> size;
    int arr[size];
    cout<< "Enter the elements of array :"<< endl;
    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
    
    selectionSort(arr, size);
    cout << "Sorted array: \n";
    printArray(arr, size);
    return 0;
}

