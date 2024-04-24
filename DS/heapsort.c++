#include <bits/stdc++.h>
using namespace std;
void heapify(int arr[], int size, int i)
{
    // Your Code Here
    int current = i;
    int left = i * 2 + 1;
    int right = i * 2 + 2;
    if (arr[left] > arr[current] && left < size)
    {
        current = left;
    }
    if (arr[right] > arr[current] && right < size)
    {
        current = right;
    }
    if (current != i)
    {
        swap(arr[current], arr[i]);
        heapify(arr, size, current);
    }
}

void buildHeap(int arr[], int size)
{
    for (int i = (size - 2) / 2; i >= 0; i--)
    {
        heapify(arr, size, i);
    }
}

void heapSort(int arr[], int n)
{
    buildHeap(arr, n);
    for (int i = n - 1; i > 0; i--)
    {
        swap(arr[0], arr[i]);
        heapify(arr, i, 0);
    }
}
int main(){
    int arr[] = {1, 8, 4, 3, 5, 9, 7, 5, 7 ,1};
    buildHeap(arr, 10);
    heapSort(arr, 10);
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    }
    
    return 0;
}