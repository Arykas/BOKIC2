#include <iostream>
#include <vector>

int main() {
	system("chcp 1251");

	int size;
	std::cout << "Введите размер массива: ";
	std::cin >> size;

	std::vector<int> vector(size);

	for (int i = 0; i < vector.size(); i++) {
		std::cout << "Введите число: ";
		std::cin >> vector.at(i);
	}

	int sum = 0;
	int max = vector.at(0);
	int min = max;

	for (int i = 0; i < vector.size(); i++) {
		if (vector.at(i) >= max) {
			max = vector.at(i);
		}
		if (vector.at(i) <= min) {
			min = vector.at(i);
		}

		sum += vector.at(i);
	}
	std::cout << "Сумма: " << sum << std::endl;
	std::cout << "Сред. ариф.: " << (sum / size) << std::endl;
	std::cout << "Макс: " << max << " Мин: " << min << std::endl;
}