#include <iostream>
#include <sstream>  

int main() {
    std::string inputFraction;
    char slash;
    int numerator, denominator;

    std::cout << "Enter a decimal number (e.g. 3/4...): ";
    std::getline(std::cin, inputFraction);

    std::stringstream ss(inputFraction);
    ss >> numerator >> slash >> denominator;

    if (ss.fail() || slash != '/' || ss.rdbuf()->in_avail() != 0) {
        std::cerr << "Invalid input. Please enter a valid fraction (e.g. 3/4...)." << std::endl;
        return 1;
    }

    double result = static_cast<double>(numerator) / denominator;

    std::cout << "The result as a decimal number: " << result << std::endl;

    return 0;
}
