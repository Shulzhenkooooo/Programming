#include <iostream>
#include <cmath>

int main() {
    std::cout << "Введите 3 вещественных числа,с новой строки" << std::endl;
    double x, y, z;
	std::cin >> x >> y >> z;

	if (x == 0) {
		if (y == 0) {
			std::cout << "Нет корней" << std::endl;
		} else {
			std::cout << "Корень = " << -z / x << std::endl;
		}
	} else {
		double d = y * y - 4 * x * z;
		if (d < 0)
			std::cout << "Не найдено действительных корней." << std::endl;
		else if (d == 0) {
			std::cout << "Корень = " << -y / (2 * x) << std::endl;
		} else {
			double d_sqrt{std::sqrt(d)};
			double x_one = (-y + d_sqrt) / (2 * x);
			double x_two = (-y - d_sqrt) / (2 * x);

			std::cout << "x1 = " << x_one << std::endl;
			std::cout << "x2 = " << x_two << std::endl;
		}
	}
}