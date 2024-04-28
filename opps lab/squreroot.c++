#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter the value of coff a b c"<<endl;
    cin >> a >> b >> c;
    float D = pow((pow(b, 2) - 4 * a * c),0.5); 
    if (D > 0)
    {
    float result1 = (-b - D)/2*a;
    float result2 = (-b + D)/2*a;
    cout<<result1<<" "<<result2<<endl;
    }
    else{
        cout<< "roots not possible"<<endl;
    }
    
    return 0;
}