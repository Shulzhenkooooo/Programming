#include <iostream>

int main() {
    int x, y;

    std::cout << "Введите два целых числа" << std::endl;
    std::cin >> x >> y;

    // Обмен, без доп. переменной
    x = x - y;
    y = y + x;
    x = y - x;

    std::cout << " x = " << x << std::endl;
    std::cout << " y = " << y << std::endl;

    // Обмен,с доп. переменной
	int temp;
	temp = x;
	x = y;
	y = temp;

    std::cout << " x = " << x << std::endl;
    std::cout << " y = " << y << std::endl;
}
