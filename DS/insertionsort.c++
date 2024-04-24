#include <bits/stdc++.h>
using namespace std;

void insertionSort(int arr[], int n)
{
    int i, j,k, min_idx,elem,index;
    for (i = 1; i < n; i++)
    {
        elem = arr[i];
        if (elem < arr[i - 1])
        {
            for (j = 0; j <= i; j++)
            {
                if (elem < arr[j])
                {
                    index = j;
                    for (k = i; k > j; k--)
                        arr[k] = arr[k - 1];
                    break;
                }
            }
        }
        else
            continue;
        arr[index] = elem;
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
    cout << "Enter the size of array :" << endl;
    cin >> size;
    int arr[size];
    cout << "Enter the elements of array :" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    insertionSort(arr, size);
    cout << "Sorted array: \n";
    printArray(arr, size);
    return 0;
}

