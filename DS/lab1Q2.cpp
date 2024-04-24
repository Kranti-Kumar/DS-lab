#include<bits/stdc++.h>
using namespace std;
int main()
{
    string *str;
    int len;
    cin >> len;
    str = new string[len];
    for (int i = 0; i < len; i++)
    {
        cin >> *(str+i);
    }
    for (int i = 0; i < len; i++)
    { 
        for (int j = 0; j < len-i-1; j++)
        {
            int compare = (str + j)->compare(*(str + j + 1));
            if (compare > 0)
            {
                swap(*(str+j), *(str+j+1));
            }
        }
    }
    for (int i = 0; i < len; i++)
    {
        cout << *(str + i) << endl;
    }
    
    
    
    return 0;
}