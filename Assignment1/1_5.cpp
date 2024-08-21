#include <iostream>
#include <cmath>

int main() {

    double number;
    int k;

    std::cout << "Enter the real number: ";
    std::cin >> number;
    std::cout << "Enter the positive integer k: ";
    std::cin >> k;

    
    double multiplier = pow(10, k);

    double roundedNumber = std::round(number * multiplier) / multiplier;

    std::cout << "The rounded off number is: " << roundedNumber << std::endl;

    return 0;
}

	

