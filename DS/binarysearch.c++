#include <iostream>
using namespace std;
int main()
{
    int size, mid, start = 0, end = 0, item, set = 0;
    cout << "Enter the size to list" << endl;
    cin >> size;
    end = size;
    int arr[size];
    cout << "Enter the elements of the list in sorted way" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout<< "Enter the element to search "<< endl;
    cin >> item;
    while (start <= end)
    {
        mid = (start + end) / 2;
        if (arr[mid]==item)
        {
            cout << arr[mid] << " Found at index " << mid << endl;
            set = 1;
            break;
        }
        else if (arr[mid]>item){
            start = mid;
        }
        else{
            end = mid;
        }
    }
    if (set == 0)
    {
        cout<< "element not found"<< endl;
    }
    return 0;
}