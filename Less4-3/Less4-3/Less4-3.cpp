#include <iostream>

int main()
{
	setlocale(LC_ALL, "rus");

	int num{};

	std::cout << "Введите целове число : ";
	std::cin >> num;

	for (int i = 1; i <= 10; i++)
	{
		int result = num * i;
		std::cout << num << " x " << i << " = " << result << std::endl;
	}
	return 0;
}

