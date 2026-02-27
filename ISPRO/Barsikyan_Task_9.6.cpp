#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

int main() {
    srand(int(time(0)));
    system("chcp 1251");

    std::vector<int> vect(rand() % 10);
    std::vector<std::vector<int>> vect2(rand() % 10, std::vector<int>(rand() % 10));

    //Одномерный вектор
    for (int i = 0; i < vect.size(); i++) vect.at(i) = rand() % 29 + 2;

    for (int i = 0; i < vect.size(); i++)
        std::cout << vect.at(i) << " ";

    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << std::endl;

    //Двумерный вектор
    for (int i = 0; i < vect2.size(); i++)
    {
        for (int j = 0; j < vect2.at(i).size(); j++)
        {
            vect2.at(i).at(j) = rand() % 10;
        }
    }

    for (int i = 0; i < vect2.size(); i++)
    {
        for (int j = 0; j < vect2.at(i).size(); j++)
        {
            std::cout << vect2.at(i).at(j) << " ";
        }
        std::cout << std::endl;
    }

    //Трехмерный вектор
    int pages, rows, cols;

    std::cout << "Введите количество страниц: ";
    std::cin >> pages;
    std::cout << "Введите количество строк: ";
    std::cin >> rows;
    std::cout << "Введите количество столбцов: ";
    std::cin >> cols;

    std::vector<std::vector<std::vector<int>>> vect3(pages, std::vector<std::vector<int>>(rows, std::vector<int>(cols)));

    for (int i = 0; i < pages; i++) {
        for (int j = 0; j < rows; j++) {
            for (int k = 0; k < cols; k++) {
                vect3.at(i).at(j).at(k) = std::rand() % 100;
            }
        }
    }

    for (int i = 0; i < pages; i++) {
        for (int j = 0; j < rows; j++) {
            for (int k = 0; k < cols; k++) {
                std::cout << vect3.at(i).at(j).at(k) << " ";
            }
        }
    }

    return 0;
}