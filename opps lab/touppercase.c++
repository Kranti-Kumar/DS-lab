#include<iostream>
using namespace std;
int main(){
    string inputString;
    cout << "Enter a string: ";
    getline(cin, inputString);

    for (int i = 0; i < inputString.length(); i++)
    {
        inputString[i] = inputString[i] - 32;
    }
    cout<<inputString<<endl;
    return 0;
}