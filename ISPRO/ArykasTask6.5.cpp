#include <iostream>
#include <vector>

int main() {
    system("chcp 1251");

    std::vector<float> vector(7);

    for (int i = 0; i < vector.size(); i++) {
        std::cout << "Введите число: ";
        std::cin >> vector.at(i);
    }

    for (int i = 0; i < vector.size(); i++) {

        if (vector.at(i) < 0) {
            std::cout << "Отрицательные: " << vector.at(i) << " ";
            std::cout << std::endl;
        }
    }

    for (int i = 0; i < vector.size(); i++) {
        if (vector.at(i) != (int)vector.at(i)) {
            std::cout << "Не целые: " << vector.at(i) << " ";
            std::cout << std::endl;
        }
    }

    for (int i = 0; i < vector.size(); i++) {
        if (vector.at(i) == (int)vector.at(i) and vector.at(i) > 0) {
            std::cout << "Положительные целые: " << vector.at(i) << " ";
            std::cout << std::endl;
        }

    }

}