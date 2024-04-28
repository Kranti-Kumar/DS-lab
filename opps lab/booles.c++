#include <iostream>
#include <cmath>

using namespace std;
double f(double x)
{
    return x * x * x + 2 * x * x + x + 1;
}


double booles_rule(double (*f)(double), double a, double b, int n)
{
    double h = (b - a) / n;
    double sum = 7 * (f(a) + f(b));

    for (int i = 1; i < n; i += 4)
    {
        sum += 32 * f(a + i * h);
    }
    for (int i = 2; i < n; i += 2)
    {
        sum += 12 * f(a + i * h);
    }
    return sum * (2 * h / 45);
}

int main()
{
    
    double a = 0; 
    double b = 2; 
    int n = 10;   

    double integral = booles_rule(f, a, b, n);
    cout << "Approximate value of the definite integral: " << integral << endl;

    return 0;
}
