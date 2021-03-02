#include <iostream>

double x(double x0, double y0, double a, double z) {
    return x0 + y0*z - (a*z*z)/2;
}

int main() {
    double x0, y0, z;
    double g = 9.8;

    std::cout << "Введите x₀, y₀ и z " << std::endl;
    std::cin >> x0 >> y0 >> z;

    double distance = abs(x0 - x(x0, y0, g, z));
    std::cout << distance << std::endl;
}