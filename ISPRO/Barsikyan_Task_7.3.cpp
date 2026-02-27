#include <iostream>
#include <vector>

int main() {
	system("chcp 1251");
	srand(int(time(0)));
	std::vector<std::vector<int>>vect(7, std::vector<int>(5));
	int choice;

	for (int i = 0; i < 7; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			vect.at(i).at(j) = rand() % 21 - 10;
		}
	}

	std::cout << "\t";
	for (int i = 0; i < 5; i++) {
		std::cout << "[" << i << "]\t";
	}

	std::cout << std::endl;

	for (int i = 0; i < 7; i++)
	{
		std::cout << "[" << i << "]\t";
		for (int j = 0; j < 5; j++)
		{
			std::cout << vect.at(i).at(j) << "\t";
		}
		std::cout << std::endl;
	}

	std::cout << "¬ведите номер строки: ";
	std::cin >> choice;

	for (int i = 0; i < 5; i++)
	{
		std::cout << vect.at(choice).at(i) << " ";
	}

	std::cout << std::endl;
	std::cin >> choice;

	for (int i = 0; i < 7; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (choice == vect.at(i).at(j)) {
				std::cout << "„исло " << choice << " находитс€ на координатах  X " << j << " Y " << i << std::endl;
			}
		}
	}

}

