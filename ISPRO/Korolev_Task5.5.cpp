#include <iostream>

int main() {
    int number;
    std::cout << "Enter the number: ";
    std::cin >> number;

    if ((number >= 100000 && number <= 999999) || (number <= -100000 && number >= -999999)) {
        std::cout << "Entered the 6-digit number" << std::endl;
    }
    else {
        std::cout << "Entered number was not 6-digit" << std::endl;
    }

    return 0;
}