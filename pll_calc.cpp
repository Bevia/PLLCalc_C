#include <iostream>
#include <complex>
#include <vector>
#include <cmath>

// Function to calculate zeros using coefficients
std::vector<std::complex<double>> calculateZeros(double b0, double b1, double b2) {
    std::vector<std::complex<double>> zeros(2);
    zeros[0] = std::complex<double>(-b1 / (2 * b0), 0);
    zeros[1] = std::conj(zeros[0]);
    return zeros;
}

// Function to calculate poles using coefficients
std::vector<std::complex<double>> calculatePoles(double a0, double a1, double a2) {
    std::vector<std::complex<double>> poles(2);
    double real_part = -a1 / (2 * a0);
    double imaginary_part = std::sqrt(4 * a0 * a2 - a1 * a1) / (2 * a0);
    poles[0] = std::complex<double>(real_part, imaginary_part);
    poles[1] = std::conj(poles[0]);
    return poles;
}

int main() {
    // Coefficients of the transfer function: H(s) = (b0*s^2 + b1*s + b2) / (a0*s^2 + a1*s + a2)
    double b0 = 1.0;
    double b1 = 2.0;
    double b2 = 3.0;
    double a0 = 1.0;
    double a1 = 0.5;
    double a2 = 0.25;

    // Calculate poles and zeros using the coefficients
    std::vector<std::complex<double>> zeros = calculateZeros(b0, b1, b2);
    std::vector<std::complex<double>> poles = calculatePoles(a0, a1, a2);

    // Print the results
    std::cout << "Zeros:" << std::endl;
    for (const auto& zero : zeros) {
        std::cout << zero << std::endl;
    }

    std::cout << "Poles:" << std::endl;
    for (const auto& pole : poles) {
        std::cout << pole << std::endl;
    }

    return 0;
}