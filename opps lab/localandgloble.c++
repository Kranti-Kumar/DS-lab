#include <iostream>
using namespace std;

int globalVar = 10;

int main() {
    int Local = 7;
    cout << "Local variable inside the main function: " << Local << endl;
    cout << "Global variable inside the main function: " << globalVar << endl;
    return 0;
}
