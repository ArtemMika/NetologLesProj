#include <iostream>

int main()
{
    setlocale(LC_ALL, "RUS");
    int Number;
    std::cout << "Введите число ";
    std::cin >> Number;
    std::cout << "Вы ввели " << Number << "\n";

    std::string Wor;
    std::cout << "Введите слово ";
    std::cin >> Wor;
    std::cout << "Вы ввели " << Wor;

    return 0;
}
