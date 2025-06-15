#include <iostream>

int main() 
{
	setlocale(LC_ALL, "RUS");

    int a, b, c;

    std::cout << "Введите первое число: ";
    std::cin >> a;
    std::cout << "Введите второе число: ";
    std::cin >> b;
    std::cout << "Введите третье число: ";
    std::cin >> c;

    std::cout << "Результат: ";

    int max = (a >= b && a >= c) ? a : ((b >= a && b >= c) ? b : c);

    int min = (a <= b && a <= c) ? a : ((b <= a && b <= c) ? b : c);

    int mid = a + b + c - max - min;

    std::cout << (max >= mid ? max : mid) << " "; 
    std::cout << (min <= mid ? mid : min) << " ";
    std::cout << (min <= mid ? min : mid) << std::endl;

    return 0;
}