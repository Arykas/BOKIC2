#include <iostream>
#include <ctime>

void printArr(int arr[7][7]) {
	std::cout << "   ";
	for (int z = 0; z < 7; z++) {
		std::cout << "[" << z << "]\t";
	}
	std::cout << '\n';
	for (int i = 0; i < 7; i++) {
		std::cout << '[' << i << "]";
		for (int j = 0; j < 7; j++) {
			std::cout << arr[i][j] << "\t";
		}
		std::cout << '\n';
	}
}

int main() {
	std::srand(std::time(0));
	int arr[7][7];
	for (int i = 0; i < 7; i++) {
		for (int j = 0; j < 7; j++) {
			arr[i][j] = rand() % 21 - 10;
		}
	}

	int max = -25;
	int min = 25;

	for (int i = 0; i < 7; i++) {
		for (int j = 0; j < 7; j++) {
			if (arr[i][j] > max) max = arr[i][j];
			if (arr[i][j] < min) min = arr[i][j];
		}
	}
	std::cout << "Min:" << min << '\n';
	std::cout << "Max:" << max << '\n';
	printArr(arr);

	bool broke = true;
	int x, y;
	while (broke) {
		
		std::cout << "Enter the coordinates of the value you want to multiply by 2:\n";
		std::cout << "Enter the first coordinate: ";
		std::cin >> x;
		std::cout << "Enter the second coordinate: ";
		std::cin >> y;
		if (x > -1 && x < 10 && y > -1 && y < 10) {
			broke = false;
		}
		else
		{
			std::cout << "wront input, try again\n";
		}
	}
	arr[x][y] *= 2;
	printArr(arr);
	return 0;
}