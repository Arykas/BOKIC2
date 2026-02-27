#include <iostream>
#include <vector>
void bubble_sort_asc(std::vector<int> vec) {
	for (int i = 0; i < vec.size(); i++) {
		for (int j = 0; j < vec.size() - 1; j++) {
			if (vec.at(j) > vec.at(j + 1)) {
				int temp = vec.at(j);
				vec.at(j) = vec.at(j + 1);
				vec.at(j + 1) = temp;
			}
		}
	}
	std::cout << "Sorted ascening:\n";
	for (int i = 0; i < vec.size(); i++) {
		std::cout << vec.at(i) << " ";
	}
}
void bubble_sort_desc(std::vector<int> vec) {
	for (int i = 0; i < vec.size(); i++) {
		for (int j = 0; j < vec.size() - 1; j++) {
			if (vec.at(j) < vec.at(j + 1)) {
				int temp = vec.at(j);
				vec.at(j) = vec.at(j + 1);
				vec.at(j + 1) = temp;
			}
		}
	}
	std::cout << "Sorted descending:\n";
	for (int i = 0; i < vec.size(); i++) {
		std::cout << vec.at(i) << " ";
	}
}

int main() {
	std::vector<int> vec;
	int size;
	bool broke = true;
	while (broke) {
		std::cout << "Enter size: ";
		std::cin >> size;
		if (size > 0) broke = false;
	}
	for (int i = 0; i < size; i++) {
		std::cout << "Enter a value for vector (" << size - i << " left):";
		int temp;
		std::cin >> temp;
		vec.push_back(temp);
	}

	std::cout << "1. Sort Ascending\n2. Sort Descending\n";
	int choice;
	std::cin >> choice;
	if (choice == 2) bubble_sort_desc(vec);
	else bubble_sort_asc(vec);

	return 0;
}