#include <iostream>
using namespace std;
void printPattern(int n) {
    int count = 1;

    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= i; ++j) {
            cout << count << " ";
            count++;
        }
        cout << endl;
    }
}

int main() {
    int N;
    cout << "Enter the value of N: ";
    cin >> N;
    printPattern(N);

    return 0;
}
