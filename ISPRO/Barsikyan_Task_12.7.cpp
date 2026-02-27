#include <iostream>
#include <vector>

int main() {
	system("chcp 1251");
	std::string login, confirm_login;
	int password, confirm_password;

	std::cout << "Пожалуйста зарегестрируйте\nВведите логин:";
	std::cin >> login;
	std::cout << "Введите пароль: ";
	std::cin >> password;

	while(true){
		std::cout << "\nПожалуйста подтвердите пароль: ";
		std::cin >> confirm_password;
		if (confirm_password == password) {
			break;
		}
		else std::cout << "\nПароли не совпадают";
	}

	std::cout << std::endl;
	for (int i = 0; i < 100; i++) std::cout << "=";
	std::cout << "\nВы успешно зарегестрировались!!!\n\nПожалуйста войдите в аккаунт\n";
	for (int i = 0; i < 100; i++) std::cout << "=";
	
	while (true) {
		std::cout << "\nВведите логин и Пароль: ";
		std::cin >> confirm_login >> confirm_password;
		if (login == confirm_login && password == confirm_password) {
			std::cout << "\nВы успешно вошли в аккаунт!!";
			break;
		}
		else std::cout << "\nНеверный логин или пароль";
	}
	

	return 0;
}