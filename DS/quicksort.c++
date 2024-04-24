#include<iostream>
using namespace std;
int main(){
    int size;
    cout<<"Enter the size to list"<<endl;
    cin >> size;
    int arr[size];
    cout<<"Enter the elements of the list"<<endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    // quick sort
    for (int i = 0; i < size-1; i++)
    {
        for (int j = i+1; j < size; j++)
        {
            if (arr[i]>arr[j])
            {
                swap(arr[i],arr[j]);
            }
        }
    }
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}