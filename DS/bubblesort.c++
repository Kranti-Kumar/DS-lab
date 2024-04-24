#include <bits/stdc++.h>
using namespace std;

void bubbleSort(int arr[], int n)
{
    int temp;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
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

    bubbleSort(arr, size);
    cout << "Sorted array: \n";
    printArray(arr, size);
    return 0;
}
