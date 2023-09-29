#include <iostream>
#include <cmath>

int main() {
    double angle_degrees;
    
    std::cout << "Enter an angle in degrees: ";
    std::cin >> angle_degrees;
    
    // Convert degrees to radians
    double angle_radians = angle_degrees * M_PI / 180.0;
    
    // Calculate the sine of the angle
    double sine_value = sin(angle_radians);
    
    std::cout << "sin(" << angle_degrees << " degrees) = " << sine_value << std::endl;
    
    return 0;
}
