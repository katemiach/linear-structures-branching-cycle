#include <iostream>
#include <cmath>
#include <locale>


int main() {
    std::locale::global(std::locale(""));

    // Задані значення
    double a = 1.0;
    double b = 5.0;
    double c = 0.5;

    // Вивід заголовка таблиці
    std::cout << "Аргумент\tЗначення функції\n";

    // Обчислення та вивід значень функції на інтервалі [a, b] з кроком h
    double x = a;
    while (x <= b) {
        double result = std::sin(x) - std::cos(x);
        std::cout << x << "\t\t" << result << "\n";
        x += c;
    }

    return 0;
}