#include <iostream>
#include <climits>
#include <locale>

int main() {
    std::locale::global(std::locale(""));

    int n;

    // Введення кількості елементів у послідовності
    std::cout << "Введіть кількість елементів у послідовності: ";
    std::cin >> n;

    if (n <= 0) {
        std::cout << "Послідовність порожня або має невірну розмірність." << std::endl;
        return 1;
    }

    int element;
    int minElement = INT_MAX;

    // Введення елементів послідовності
    for (int i = 0; i < n; ++i) {
        std::cout << "Введіть елемент " << i + 1 << " з " << n << ": ";
        std::cin >> element;
        if (element < minElement) {
            minElement = element;
        }
    }

    // Виведення результату
    std::cout << "Мінімальний елемент у послідовності: " << minElement << std::endl;

    return 0;
}