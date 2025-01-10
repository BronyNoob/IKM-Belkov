#include <iostream>
#include "power.h"

int main() {
    long long a;
    int n;

    std::cout << "Введите значение a: ";
    while (!(std::cin >> a)) {
        std::cout << "Некорректный ввод! Попробуйте еще раз: ";
        std::cin.clear();
        std::cin.ignore(10000, '\n'); // Игнорируем до 10000 символов или до новой строки
    }

    std::cout << "Введите значение n: ";
    while (!(std::cin >> n) || n < 0) {
        std::cout << "Некорректный ввод! Степень не может быть отрицательной. Попробуйте еще раз: ";
        std::cin.clear();
        std::cin.ignore(10000, '\n'); // Игнорируем до 10000 символов или до новой строки
    }

    if (n > 10) {
        long long result = power(a, n);
        std::cout << "Результат: " << result << std::endl;
    } else {
        std::cout << "Условия задачи не выполнены." << std::endl;
    }

    return 0;
}
