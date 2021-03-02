#include <iostream>

int main() {
    std::cout << "Введите число,оператор,число. "  << std::endl;

    double x, y;
    char op;
    std::cin >> x >> op >> y;

    double result;
    bool result_exists = true;
    switch (op) {
        case '*':
            result = x * y;
            break;
        case '+':
            result = x + y;
            break;
        case '-':
            result = x - y;
            break;
        case '/':
            if (y == 0) {
                std::cout << "Деление на 0.";
                result_exists = false;
                break;
            }
            result = x / y;
            break;
        default:
            std::cout << "Неизвестный оператор.";
            result_exists = false;
            break;
    }
    if (result_exists) {
        std::cout << result << std::endl;
    }
}