#include <iostream>

template <typename T>
void menu2(T num1, T num2) {
	int choice = 0;

	do {
		std::cout << "\nВыберите операцию:\n1 - Найти максимальное\n2 - Найти среднее арифметическое\n3 - Модуль суммы\n4 - Вывести целые части суммы чисел\n0 - выход\nВаш выбор: ";

		std::cin >> choice;

		switch (choice) {
		case 1: std::cout << "max: " << (num1 > num2 ? num1 : num2);  break;

		case 2: std::cout << "среднее арифметическое: " << (num1 + num2) / 2; break;

		case 3: std::cout << "модуль суммы: " << (num1 + num2 > 0 ? num1 + num2 : -(num1 + num2)); break;

		case 4: std::cout << "целая часть суммы: " << static_cast<int>(num1 + num2); break;

		default: std::cout << "Неверный выбор!";
		}

	} while (choice != 0);
}

void menu1() {
	system("chcp 1251");

	int choice = 0;

	std::cout << "С каким типом данных вы хотите работать?\n1 - float\n2 - double\n3 - int\nВаш выбор: ";

	std::cin >> choice;

	switch (choice) {
	case 1: {
		float num1 = 0, num2 = 0;

		std::cout << "Введите две переменные типа float: ";

		std::cin >> num1 >> num2;

		menu2(num1, num2);

		break;
	}
	case 2: {
		double num1 = 0, num2 = 0;

		std::cout << "Введите две переменные типа double: ";

		std::cin >> num1 >> num2;

		menu2(num1, num2);

		break;
	}
	case 3: {
		int num1 = 0, num2 = 0;

		std::cout << "Введите две переменные типа int: ";

		std::cin >> num1 >> num2;

		menu2(num1, num2);

		break;
	}

	default: std::cout << "Неверный выбор типа данных!";
	}
}

int main() { menu1(); return 0; }