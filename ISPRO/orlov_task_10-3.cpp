#include <iostream>

void euclid(int a, int b) {
	if (b == 0) {
		std::cout << "Greatest common divisor of these 2 numbers is: " << a;
		return;
	}
	euclid(b, a % b);
}

int main() {
	int a, b;
	std::cout << "Enter 2 numbers: \n>_: ";
	std::cin >> a;
	std::cout << ">_: ";
	std::cin >> b;
	euclid(a, b);
	return 0;
}