#include <iostream>
#include <cmath>
using namespace std;

double f(double x)
{
    return (1/(1+x*x));
}

double simpsons_3_8_rule(double (*f)(double), double a, double b, int n)
{
    double h = (b - a) / n;
    double sum_odd = 0;
    double sum_even = 0;

    for (int i = 1; i < n; i ++)
    {
        if(i%3!=0)
        sum_odd += f(a + i * h);
        else
        sum_even += f(a + i * h);
    }

    double integral = (3 * h / 8) * (f(a) + f(b) + 3 * sum_odd + 2 * sum_even);
    return integral;
}

int main()
{
    double a = 1; 
    double b = 10; 
    int n = 10;    

    double integral = simpsons_3_8_rule(f, a, b, n);
    cout << "Approximate value of the definite integral: " << integral << endl;

    return 0;
}
