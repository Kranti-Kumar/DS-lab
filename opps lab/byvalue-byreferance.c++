#include <iostream>

using namespace std;
void ByValue(int a) {
    a = 10;
}

void ByReference(int &a) {
    a = 10;
}

int main() {
    int num1 = 5;
    cout << "Before change - num1: " << num1  << endl;

    ByValue(num1);
    cout << "After change by value - num1: " << num1   << endl;

    num1 = 5;

    ByReference(num1);
    cout << "After change by reference - num1: " << num1 << endl;

    return 0;
}
