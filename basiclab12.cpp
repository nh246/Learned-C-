#include <iostream>
#include <cmath>

int main() {
    double angle_degrees;
    std::cout << "Enter an angle in degrees: ";
    std::cin >> angle_degrees;

    // Convert degrees to radians
    double angle_radians = angle_degrees * M_PI / 180.0;

    // Calculate the cosine
    double cosine_value = cos(angle_radians);

    std::cout << "Cosine of " << angle_degrees << " degrees is: " << cosine_value << std::endl;

    return 0;
}
