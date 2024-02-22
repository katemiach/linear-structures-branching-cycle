#include <iostream>
#include <locale>

int main() {
    std::locale::global(std::locale(""));

    int mark;

    std::cout << "Введіть оцінку (1-5): ";
    std::cin >> mark;

    switch (mark) {
    case 1:
        std::cout << "Погано" << std::endl;
        break;
    case 2:
        std::cout << "Незадовільно" << std::endl;
        break;
    case 3:
        std::cout << "Задовільно" << std::endl;
        break;
    case 4:
        std::cout << "Добре" << std::endl;
        break;
    case 5:
        std::cout << "Відмінно" << std::endl;
        break;
    default:
        std::cout << "Невірна оцінка" << std::endl;
        break;
    }

    return 0;
}