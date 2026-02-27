#include <iostream>
#include <cstdlib>
#include <ctime>
#include <climits>

int main() {
    int size;
    std::cout << "Enter the size of the array: ";
    std::cin >> size;

    if (size <= 0) {
        std::cout << "Invalid size. Exiting." << std::endl;
        return 1;
    }

    char choice;
    std::cout << "How to fill? [K]eyboard / [R]andom: ";
    std::cin >> choice;

    int* arr = new int[size];

    if (choice == 'K' || choice == 'k') {
        std::cout << "Enter " << size << " integers: ";
        for (int i = 0; i < size; ++i) {
            std::cin >> arr[i];
        }
    }
    else if (choice == 'R' || choice == 'r') {
        std::srand(static_cast<unsigned>(std::time(nullptr)));
        std::cout << "Generated numbers: ";
        for (int i = 0; i < size; ++i) {
            arr[i] = std::rand() % 21 - 10; // range -10..10
            std::cout << arr[i] << " ";
        }
        std::cout << std::endl;
    }
    else {
        std::cout << "Invalid choice. Exiting." << std::endl;
        delete[] arr;
        return 1;
    }

    if (choice == 'K' || choice == 'k') {
        std::cout << "Entered numbers: ";
        for (int i = 0; i < size; ++i) {
            std::cout << arr[i] << " ";
        }
        std::cout << std::endl;
    }


    int sum = 0;
    int min = INT_MAX;
    int max = INT_MIN;
    for (int i = 0; i < size; ++i) {
        sum += arr[i];
        if (arr[i] < min) min = arr[i];
        if (arr[i] > max) max = arr[i];
    }

    double average = static_cast<double>(sum) / size;

    std::cout << "Sum of array elements: " << sum << std::endl;
    std::cout << "Average: " << average << std::endl;
    std::cout << "Minimum and maximum: " << min << " " << max << std::endl;

    delete[] arr;
    return 0;
}