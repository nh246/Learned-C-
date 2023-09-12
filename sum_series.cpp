#include<iostream>
#include<cmath> // Include <cmath> for math functions
#include<iomanip>
using namespace std;

int main()
{
    int n;
    double sum = 0.0;

    cout << "Enter the number of terms: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        double term = pow(1.0 / i, i);
        sum += term;
    }

    cout << "Sum of the series up to the " << n << "th term = ";
    cout << fixed << setprecision(6) << sum << endl;

    return 0;
}

