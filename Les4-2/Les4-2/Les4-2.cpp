#include <iostream>

int main()
{
	setlocale(LC_ALL, "rus");

	int number{};
	int sum{ 0 };

	std::cout << "Введите целое число: ";
	std::cin >> number;

	int original_number = number;

	while (number != 0)
	{
		int last_digit = number % 10;
		sum += last_digit;
		number /= 10;
	}

	std::cout << "Сумма цифр: "  << sum << std::endl;

	return 0;
}

