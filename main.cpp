   #include <iostream>
   #include <string>
   #include "power.h"

   int main() {
       std::string a, n_str;

       std::cout << "Введите значение a: ";
       while (true) {
           std::getline(std::cin, a);
           if (!a.empty() && is_digits(a)) break;
           std::cout << "Некорректный ввод! Попробуйте еще раз: ";
       }

       std::cout << "Введите значение n: ";
       while (true) {
           std::getline(std::cin, n_str);
           if (is_digits(n_str)) {
               break;
           } else {
               std::cout << "Некорректный ввод! Попробуйте еще раз: ";
           }
       }

       std::string result = "1";
       for (int i = 0; i < std::stoi(n_str); ++i) {
           result = multiply_strings(result, a);
       }

       std::cout << "Результат: " << result << std::endl;

       return 0;
   }
