#include <iostream>
#include <conio.h>
using namespace std;

int factorial(int n);
double power(double a, int b);
int fibonacci_limit(int limit);
int fibonacci_number(int limit);

void main()
{
	setlocale(LC_ALL, "");

	int i;
	cout << "Выберите задание: " << endl << "1 - int factorial(int n)" << endl << "2 - double power(double a, int n)"
		<< endl << "3 - void Fibonacci(???), которая выводит на экран ряд Фибоначчи, до указанного предела;" << endl << "4 - void Fibonacci(???), которая выводит на экран заданное количество чисел из рядa Фибоначчи" << endl; cin >> i;

	switch (i) 
	{
	case 1:
		int n;
		cout << "Введите число" << endl; cin >> n;
		cout << "Факториал числа " << n << ": " << factorial(n) << endl;
		break;
	case 2:
		double a; int b;
		cout << "Введите число, которое нужно возвести в степень" << endl; cin >> a; 
		cout << "Введите степень числа" << endl; cin >> b;
		cout << "Число " << a << " в степени " << b << ": " << power(a, b) << endl;
		break;
	case 3:
		int limit;
		cout << "Введите предел ряда Фибоначчи" << endl; cin >> limit;
		cout << fibonacci_limit(limit) << endl;
		break;
	case 4:
		int number;
		cout << "Введите количество чисел из ряда Фибоначчи" << endl; cin >> number;
		cout << fibonacci_number(number) << endl;
		break;
	default: 
		cout << "Такого задания нет" << endl;
	}
}

		int factorial(int n)
	{
		if (n == 0) return 1;
		else return n * factorial(n - 1);
	}

		double power(double a, int b)
		{
			double c = 1;
			if (b == 0) return 1;
			else {
				while (b > 0, b--)
				{
					c = c * a;
				}
			return c;
			}
		}

		int fibonacci_limit(int limit)
		{
			int f = 0, g = 0, h = 1;
			if (limit == 0) return 0;
			if (limit == 1) return 1;
			else 
				while (f < (limit-f))
				{
					cout << f << ", ";
					f = g + h;
					g = h;
					h = f;
				}
			return f;
		}

		int fibonacci_number(int number)
		{
			int f = 0, g = 0, h = 1, j = 0;
			if (number == 0) return 0;
			if (number == 1) return 0;
			else
				while (j < (number - 1))
				{
					cout << f << ", ";
					f = g + h;
					g = h;
					h = f;
					j++;
				}
			return f;
		}