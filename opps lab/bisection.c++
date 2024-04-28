#include <iostream>
#include <cmath>

using namespace std;

// Define the function f(x)
double f(double x) {
    return cos(x)-x*exp(x);
}

// Bisection method to find the root of the equation within the interval [a, b]
double bisectionMethod(double a, double b, int max_iter) {
    int iteration = 0;
        double d = (a + b) / 2;
    while (iteration < max_iter) {
        double c = (a + b) / 2;
        double f_c = f(c);
        if (fabs(b - a) / 2 < .0001 || f_c == 0) {
            return c;
        }
        if (f(a) * f_c < 0) {
            b = c;
        } else if (f(b) * f_c < 0) {
            a = c;
        } else {
            break;
        }
        d=c;
        iteration++;
    }
    return d;
}

int main() {
    double a, b;
    int max_iter;
    cout<<"enter the range in which root exist"<<endl;
    cin >> a >> b;
    cout<<"Enter max number of iterations"<<endl;
    cin>>max_iter;
    double root = bisectionMethod(a, b,max_iter);
    cout << "Root: " << root << endl;
    return 0;
}
