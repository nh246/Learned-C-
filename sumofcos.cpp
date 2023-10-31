#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

double degToRad(double deg) {
    return deg * M_PI / 180.0;
}

int main() {
    double x1, n, sum = 0.0;
    
    cout << "Enter an angle in degrees: ";
    cin >> x1;
    cout << "Enter the number of terms (n): ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        double term = pow(-1, i) * pow(degToRad(x1), 2 * i) / tgamma(2 * i + 1);
        sum += term;
    }

    cout << fixed << setprecision(6);
    cout << "Using Taylor's series, up to " << n << "th term cos(" << x1 << "): " << sum << endl;
    cout << "Using built-in function, cos(" << x1 << "): " << cos(degToRad(x1)) << endl;

    return 0;
}
