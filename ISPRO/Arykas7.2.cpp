#include <iostream>
#include <vector>

int main() {
    system("chcp 1251");
    srand(int(time(0)));

    std::vector<std::vector<int>>vector(5, std::vector<int>(8));
    int sum = 0;

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            vector.at(i).at(j) = rand() % 21 - 10;
            sum += vector.at(i).at(j);
        }
    }

    int max = vector.at(0).at(0);
    int min = max;

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            if (vector.at(i).at(j) >= max) {
                max = vector.at(i).at(j);
            }
            if (vector.at(i).at(j) <= min) {
                min = vector.at(i).at(j);
            }
            std::cout << vector.at(i).at(j) << "\t";
        }
        std::cout << std::endl;
    }

    std::cout << "Сумма: " << sum << std::endl;
    std::cout << "Макс: " << max << " Мин: " << min << std::endl;


}