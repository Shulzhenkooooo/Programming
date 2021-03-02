#include <iostream>

int main() 
{
    int    x, y;
	double z, k;
	
    std::cout << "Введите два целых числа" << std::endl;
    std::cin >> x >> y;
    std::cout << "Введите два дробных числа, разделенных точкой." << std::endl;
    std::cin >> z >> k;

	std::cout << "Справка: x и y -- целые z и k -- дробные" << std::endl;

    std::cout << "x + y = " << x + y << std::endl;
    std::cout << "x - y = " << x - y << std::endl;
    std::cout << "x * y = " << x * y << std::endl;
    std::cout << "x / y = " << x / y << std::endl;

	std::cout << std::endl;
    std::cout << "z + k = " << z + k << std::endl;
    std::cout << "z - k = " << z - k << std::endl;
    std::cout << "z * k = " << z * k << std::endl;
    std::cout << "z / k = " << z / k << std::endl;

	std::cout << std::endl;
    std::cout << "z + y = " << z + y << std::endl;
    std::cout << "z - y = " << z - y << std::endl;
    std::cout << "z * y = " << z * y << std::endl;
    std::cout << "z / y = " << z / y << std::endl;

	std::cout << std::endl;
    std::cout << "x + k = " << x + k << std::endl;
    std::cout << "x - k = " << x - k << std::endl;
    std::cout << "x * k = " << x * k << std::endl;
    std::cout << "x / k = " << x / k << std::endl;
}