#include <iostream>
#include <sstream>

const int MINUTES_IN_HOUR = 60;

int main() {
    std::cout << "Ввод двух времён, пример: 12:00" << std::endl;
    int x1, y1, x2, y2;
    char temp;
    std::cin >> x1 >> temp >> y1 >> x2 >> temp >> y2;
    y1 += x1 * MINUTES_IN_HOUR;
    y2 += x2 * MINUTES_IN_HOUR;

    if (std::abs(y1 - y2) <= 15) {
        std::cout << "Пересекутся!" << std::endl;
    }  else {
        std::cout << "Не увидятся!" << std::endl;
    }
}