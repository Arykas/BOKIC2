#include <iostream>
#include <vector>
#include <algorithm>

int main() {

	system("chcp 1251");

	int size_array;

	std::cout << "Введи размер массива:"; std::cin >> size_array;

	if (size_array <= 0) { std::cout << "Размер массива не может быть отрицательным и должен быть больше 0" << std::endl; return 0; }

	std::vector<int> array(size_array);

	std::cout << "Заполни элементы вектора: " << std::endl;

	for (int i = 0; i < array.size(); i++) { std::cout << "Элемент: " << i << "\n~> "; std::cin >> array.at(i); }

	std::cout << "Данные на ваш вектор:\n\nРазмер: " << array.size()
		<< "\nМинимальное значение: " << *std::min_element(array.begin(), array.end()) << std::endl
		<< "\nМаксимальное значение: " << *std::max_element(array.begin(), array.end()) << std::endl;

	std::cout << "Применение сортировки:" << std::endl;

	std::sort(array.begin(), array.end());

	std::cout << "Сортированный вектор:\n";

	for (int i : array) std::cout << i << " ";

	std::vector<int> unique_vector;

	for (int i : array) {
		bool found = false;

		for (int uniq_val : unique_vector) {
			if (i == uniq_val) { found = true; break; }
		}

		if (!found) unique_vector.push_back(i);
	}

	std::cout << "Уникальный вектор с размером: " << unique_vector.size() << std::endl << " и содержимым: " << std::endl;

	for (int i : unique_vector) std::cout << i << " ";

	return 0;
}