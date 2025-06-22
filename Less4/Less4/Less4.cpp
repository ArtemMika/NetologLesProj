#include <iostream>

int main()
{
	setlocale(LC_ALL, "RUS");

	int number{};
	do
	{
		std::cout << "Введите целое число или число '0', чтобы закончить: ";
		std::cin >> number;
	} while (number != 0);
}