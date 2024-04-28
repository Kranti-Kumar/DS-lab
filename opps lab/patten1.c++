#include <iostream>
using namespace std;
void printPattern(int N) {
    for (int i = N; i >= 1; --i) {
        for (int j = 1; j <= i; ++j) {
            cout << j << " ";
        }
        cout << endl;
    }
}

int main() {
    int N;
    cout << "Enter a value for N: ";
    cin >> N;
    printPattern(N);

    return 0;
}
