#include <iostream>

int main() {
  long long s, l1, r1, l2, r2;

  std::cout << "Введите сумму, границы первого промежутка и границы второго промежутка" << std::endl;
  std::cin >> s >> l1 >> r1 >> l2 >> r2;

  bool success = true;
  int x1 = l1;
  int x2;

if (x1 + r2 < s) {
x2 = r2;
    if (s > r1 + x2) {
      std::cout << "Совпадений не найдено" << std::endl;
      success = false;
    } else {
      x1 = s - r2;
    }
  } else {
    if (s < l1 + l2) {
      std::cout << "Совпадений не найдено" << std::endl;
      success = false;
    } else {
      x2 = s - x1;
    }
  }

  if (success) {
    std::cout << "x1 = " << x1 << std::endl;
    std::cout << "x2 = " << x2 << std::endl;
  }
}