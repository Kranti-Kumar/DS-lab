#include<bits/stdc++.h>
using namespace std;
int main()
{
    int  n;
    cin >> n;
    int (*arr1)[n], (*arr2)[n];
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin>>(*(*(arr1+i)+j));
        }
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin>>(*(*(arr2+i)+j));
        }
    }
    int(*arr3)[n];
    for (int i = 1; i <= n; i++)
    {   int sum = 0;
        for (int j = 1; j <= n; j++)
        {
            (*(*(arr3 + i) + j)) = 0;
            for (int k = 1; k <= n; k++)
            {
                (*(*(arr3 + i) + j)) += (*(*arr1 + i) + k) * (*(*arr2 + k) + i);
        }
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << (*(*(arr3 + i) + j))<<" ";
        }
        cout << endl;
    }
    return 0;
}