#include<bits/stdc++.h>
using namespace std;
int main()
{
    int *arr, n;
    cout << "Enter the length"<<endl;
    cin >> n;
    arr= new int[n];
    cout << "Enter the elements"<<endl;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> *(arr+i);
        sum+= *(arr+i);
    }
    double mean = sum / n;
    cout<< "mean is :"<<endl;
    cout<<mean<<endl;
    double sum1 = 0;
    for (int i = 0; i < n; i++)
    {
        sum1 = sum1 + abs(*(arr+i)-mean);
    }
    cout<<"SD is :"<<sum1/n<<endl;
    
    return 0;
}