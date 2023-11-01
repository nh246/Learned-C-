#include <iostream>

#include <cmath>

#include <iomanip>



float dg_rd(float x) {

    return x * M_PI / 180;

}



int factorial(int f) {

    return (f == 0) ? 1 : f * factorial(f - 1);

}



int main() {

    float x1, x, sum = 0.0, term = 1.0;

    int n;



    std::cout << "Enter an angle in degrees: ";

    std::cin >> x1;

    x = dg_rd(x1);

    std::cout << "Enter the number of terms: ";

    std::cin >> n;



    for (int i = 1, sign = 1; i <= n; i += 2, sign = -sign) {

        sum += sign * term;

        term *= x * x / (i * (i + 1));

    }



    std::cout << std::setprecision(10) << "Using Taylor's series, up to " << n << " terms, sin(" << x1 << "): " << sum << std::endl;

    std::cout << "Using built-in function, sin(" << x1 << "): " << std::sin(x) << std::endl;



    return 0;

}

