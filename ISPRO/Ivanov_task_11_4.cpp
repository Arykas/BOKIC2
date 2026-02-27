#include <iostream>
#include <vector>
#include <numeric>

void newSale(std::vector<int>& sales)
{
    double amount;

    std::cout << "Введите сумму продажи: "; std::cin >> amount;

    if (amount <= 0) { std::cout << "Продажа должна быть положительной и быть больше нуля"; return; }

    sales.push_back(amount);

    std::cout << "Продажа добавлена." << std::endl;
}

void listSales(const std::vector<int>& sales)
{
    if (sales.empty()) std::cout << "Список продаж пуст." << std::endl;

    else
    {
        std::cout << "Список продаж:" << std::endl;

        for (int i = 0; i < sales.size(); i++) std::cout << "Продажа #" << (i + 1) << ": " << sales.at(i) << " рублей." << std::endl;
    }
}

void cancelLastSale(std::vector<int>& sales)
{
    if (sales.empty()) std::cout << "Нет продаж для отмены." << std::endl;

    else { sales.pop_back(); std::cout << "Последняя продажа отменена." << std::endl; }
}

void writeMinUndMaxSale(std::vector<int>& sales)
{
    if (!sales.empty()) std::cout << "min sale: " << *std::min_element(sales.begin(), sales.end()) << "\nmax sale: " << *std::max_element(sales.begin(), sales.end());

    else std::cout << "У тебя нет продаж =)" << std::endl;
}

void report(std::vector<int>& sale)
{
    if (sale.empty()) std::cout << "Пусто, нет продаж.";

    else { listSales(sale); std::cout << "Общая сумма продаж: " << std::accumulate(sale.begin(), sale.end(), 0); }
}

int main()
{
    system("chcp 1251");

    std::vector<int> sales;

    int choice;

    do
    {
        std::cout << "\nМеню:"
            << std::endl << "1. Новая продажа"
            << std::endl << "2. Вывод списка продаж"
            << std::endl << "3. Отменить последнюю продажу"
            << std::endl << "4. Отобразить минимальную и максимальную продажу"
            << std::endl << "5. Вывести отчет"
            << std::endl << "6. Выход"
            << std::endl << "Выберите опцию: ";

        std::cin >> choice;

        switch (choice)
        {
        case 1: newSale(sales); break;

        case 2: listSales(sales); break;

        case 3: cancelLastSale(sales); break;

        case 4: writeMinUndMaxSale(sales); break;

        case 5: report(sales); break;

        case 6: std::cout << "Выход из программы." << std::endl; break;

        default: std::cout << "Неверный выбор. Пожалуйста, попробуйте снова." << std::endl;
        }

    } while (choice != 6);

    return 0;
}