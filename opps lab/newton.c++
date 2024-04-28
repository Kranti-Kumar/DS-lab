#include <iostream>
#include <cmath>
using namespace std;

double func(double x) {
    return cos(x)-x*exp(x);
}
double derivative(double x) {
    return -sin(x)-(x+1)*exp(x);
}
double newton(double x0, double tol, int max_iter) {
    double x = x0;
    int iter = 0;
    while (iter < max_iter) {
        double fx = func(x);
        double dfx = derivative(x);
        if (fabs(dfx) < 0.0001) {
            cout << "Derivative too close to zero. Newton's method cannot continue." << endl;
            return 0;
        }
        double dx = -fx / dfx;
        x = x + dx;
        if (fabs(dx) < tol) {
            return x;
        }
        iter++;
    }
    return x;
}

int main() {
    double initial_guess = 0.5;
    double tolerance = 0.0001;
    int max_iter;
    cout<<"Enter max number of iterations: "<<endl;
    cin>>max_iter;
    double root = newton(initial_guess, tolerance, max_iter);
    cout << "Root of the function: " << root << endl;
    return 0;
}