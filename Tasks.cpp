#include <iostream>

// Рекурсия - это приём программирования, при котором функция, которая вызывает саму себя непосредственно, либо ксвенно.

unsigned long long factorial(int num) {
	// if (num <= 0)
	// return - 1;
	if (num <= 0)
		return 1;
	return factorial(num - 1) * num;
}

int fibonacci(int num) {
	if (num == 0)
		return 0;
	if (num == 1)
		return 1;
	return fibonacci(num - 1) + fibonacci(num - 2);
}

int main() {
	setlocale(LC_ALL, "Russian");
	int n;

	// Факториал с помощью рекурсии
	std::cout << "Введите число: ";
	std::cin >> n;
	std::cout << n << "! = " << factorial(n) << std::endl;

	// Задание "Числа Фибоначчи"
	std::cout << "Введите номер числа Фибоначчи: ";
	std::cin >> n;
	std::cout << "Число Фибоначчи №" << n << " = " << fibonacci(n) << std::endl;


	return 0;
}