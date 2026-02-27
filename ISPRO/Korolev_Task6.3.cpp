#include <iostream>

int main() {
    const int size = 5;
    int numbers[size];

    std::cout << "Enter 5 integers: ";
    for (int i = 0; i < size; ++i) {
        std::cin >> numbers[i];
    }

    std::cout << "Entered numbers: ";
    for (int i = 0; i < size; ++i) {
        std::cout << numbers[i];
        if (i < size - 1) std::cout << " ";
    }
    std::cout << std::endl;

    int sum = 0;
    int min = numbers[0];
    int max = numbers[0];

    for (int i = 0; i < size; ++i) {
        sum += numbers[i];
        if (numbers[i] < min) min = numbers[i];
        if (numbers[i] > max) max = numbers[i];
    }

    double average = static_cast<double>(sum) / size;

    std::cout << "Sum: " << sum << std::endl;
    std::cout << "Average: " << average << std::endl;
    std::cout << "Maximum: " << max << ", Minimum: " << min << std::endl;

    return 0;
}