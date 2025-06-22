#include <iostream>

int main()
{
	setlocale(LC_ALL, "RUS");

	int number{};
	int sum{0};
	do
	{
		std::cout << "Введите целое число или число '0', чтобы закончить: " << "\n";
		std::cin >> number;

		if (number != 0)
		{
			sum += number;
		}
	} while (number != 0);

	std::cout << "Сумма: " << sum;

	return 0;
}