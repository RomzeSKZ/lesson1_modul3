#include <stdio.h>
#include <locale.h>
#include <iostream>
#include <math.h>
using namespace std;

char s;
void main()
{
	setlocale(LC_ALL, "Rus");
	int i = 0;
Start:
	cout << "Номер задания: ";
	short unsigned int a = 0;
	cin >> a;
	if (a == 1)
	{
	Task1:
		i++;
		system("cls");
		cout << "Задание 1:" << endl;
		cout << "Напишите функцию int f(int h, int m, int s), которая принимает три целых аргумента (часы h, минуты m и секунды s) и возвращает количество секунд, прошедших с начала дня." << endl;
		cout << "Решение:" << endl;
		int h;
		int m;
		int s;
		cout << "Введите время: " << endl;
		cout << "Часы: ";
		cin >> h;
		cout << endl << "Минуты: ";
		cin >> m;
		cout << endl << "Секунды: ";
		cin >> s;
		int time = h * 3600 + m * 60 + s;
		if (h >= 0 && h <= 24 && m >= 0 && m <= 60 && s >= 0 && s <= 60)
		{
			cout << endl << "С начала дня прошло " << time << " секунд." << endl;
		}
		else
		{
			cout << endl << "Введите корректное время." << endl;
		}
	reTry1:
		cout << "Повторить задание? (y/n) ";
		cin >> s;
		if (s == 'y')
		{
			goto Task1;
		}
		else if (s == 'n')
		{
			goto tryExit;
		}
		else
		{
			cout << "Введите y или n" << endl;
			goto reTry1;
		}
	}
	else if (a == 2)
	{
	Task2:
		i++;
		system("cls");
		cout << "Задание 2:" << endl;
		cout << "Напишите функцию int f(int m, int d), которая принимает два целых аргумента (месяц m и день d) и возвращает количество дней, прошедших с начала года. Считаем, что в каждом месяце 30 дней." << endl;
		cout << "Решение:" << endl;
		int m;
		int d;
		cout << "Введите месяц и день: " << endl;
		cout << endl << "Месяц: ";
		cin >> m;
		cout << endl << "День: ";
		cin >> d;
		int time = m * 30 - 30 + d;
		if (m >= 1 && m <= 12 && d >= 1 && d <= 30)
		{
			cout << endl << "С начала года прошло " << time << " дней." << endl;
		}
		else
		{
			cout << endl << "Введите корректное время." << endl;
		}
	reTry2:
		cout << "Повторить задание? (y/n) ";
		cin >> s;
		if (s == 'y')
		{
			goto Task2;
		}
		else if (s == 'n')
		{
			goto tryExit;
		}
		else
		{
			cout << "Введите y или n" << endl;
			goto reTry2;
		}
	}
	else if (a == 3)
	{
	Task3:
		i++;
		system("cls");
		cout << "Задание 3:" << endl;
		cout << "Напишите функцию int f(int m, int d), которая принимает два целых аргумента (месяц m и день d) и возвращает количество дней, прошедших с начала года. Считаем, что в каждом месяце 30 или 31дней, а год не високосный." << endl;
		cout << "Решение:" << endl;
		int m;
		int d;
		cout << "Введите месяц и день: " << endl;
		cout << endl << "Месяц: ";
		cin >> m;
		cout << endl << "День: ";
		cin >> d;
		if (m >= 1 && m <= 12 && d >= 1 && d <= 31)
		{
			if (m == 1 && d >= 1 && d <= 31)
			{
				int time = d;
				cout << endl << "С начала года прошло " << time << " дней." << endl;
			}
			else if (m == 2 && d >= 1 && d <= 28)
			{
				int time = 31 + d;
				cout << endl << "С начала года прошло " << time << " дней." << endl;
			}
			else if (m == 3 && d >= 1 && d <= 31)
			{
				int time = 31 + 28 + d;
				cout << endl << "С начала года прошло " << time << " дней." << endl;
			}
			else if (m == 4 && d >= 1 && d <= 30)
			{
				int time = 31 + 28 + 31 + d;
				cout << endl << "С начала года прошло " << time << " дней." << endl;
			}
			else if (m == 5 && d >= 1 && d <= 31)
			{
				int time = 31 + 28 + 31 + 30 + d;
				cout << endl << "С начала года прошло " << time << " дней." << endl;
			}
			else if (m == 6 && d >= 1 && d <= 30)
			{
				int time = 31 + 28 + 31 + 30 + 31 + d;
				cout << endl << "С начала года прошло " << time << " дней." << endl;
			}
			else if (m == 7 && d >= 1 && d <= 31)
			{
				int time = 31 + 28 + 31 + 30 + 31 + 30 + d;
				cout << endl << "С начала года прошло " << time << " дней." << endl;
			}
			else if (m == 8 && d >= 1 && d <= 31)
			{
				int time = 31 + 28 + 31 + 30 + 31 + 30 + 31 + d;
				cout << endl << "С начала года прошло " << time << " дней." << endl;
			}
			else if (m == 9 && d >= 1 && d <= 30)
			{
				int time = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + d;
				cout << endl << "С начала года прошло " << time << " дней." << endl;
			}
			else if (m == 10 && d >= 1 && d <= 31)
			{
				int time = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + d;
				cout << endl << "С начала года прошло " << time << " дней." << endl;
			}
			else if (m == 11 && d >= 1 && d <= 30)
			{
				int time = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + d;
				cout << endl << "С начала года прошло " << time << " дней." << endl;
			}
			else if (m == 12 && d >= 1 && d <= 31)
			{
				int time = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30 + d;
				cout << endl << "С начала года прошло " << time << " дней." << endl;
			}
			else
			{
				cout << endl << "Введите корректную дату." << endl;
			}
		}
		else
		{
			cout << endl << "Введите корректную дату." << endl;
		}
	reTry3:
		cout << "Повторить задание? (y/n) ";
		cin >> s;
		if (s == 'y')
		{
			goto Task3;
		}
		else if (s == 'n')
		{
			goto tryExit;
		}
		else
		{
			cout << "Введите y или n" << endl;
			goto reTry3;
		}
	}
	else if (a == 4)
	{
	Task4:
		i++;
		system("cls");
		cout << "Задание 4:" << endl;
		cout << "Напишите функцию f(int m1, int m0, int N), которая возвращает первую и последнюю цифры двузначного натурального числа N." << endl;
		cout << "Решение:" << endl;
		int N;
		cout << "Введите двузначное число: " << endl;
		cin >> N;
		int m1 = N / 10;
		int m0 = N % 10;
		if (N >= 10 && N <= 100)
		{
			cout << "Введенное число состоит из цифр " << m1 << " и " << m0 << endl;
		}
		else
		{
			cout << "Введите двузначное число." << endl;
		}
	reTry4:
		cout << "Повторить задание? (y/n) ";
		cin >> s;
		if (s == 'y')
		{
			goto Task4;
		}
		else if (s == 'n')
		{
			goto tryExit;
		}
		else
		{
			cout << "Введите y или n" << endl;
			goto reTry4;
		}
	}
	else if (a == 5)
	{
	Task5:
		i++;
		system("cls");
		cout << "Задание 5:" << endl;
		cout << "Напишите функцию int f(int m1, int m2, int m3), которая находит наименьшее число из заданного набора трех целых чисел. Используйте условный оператор if" << endl;
		cout << "Решение:" << endl;
		int m1;
		int m2;
		int m3;
		cout << "Введите 3 любых числа: ";
		cin >> m1;
		cin >> m2;
		cin >> m3;
		if (m1 < m2 && m1 < m3)
		{
			cout << "Наименьшее число из трех введенных это " << m1 << endl;
		}
		else if (m2 < m1 && m2 < m3)
		{
			cout << "Наименьшее число из трех введенных это " << m2 << endl;
		}
		else if (m3 < m1 && m3 < m2)
		{
			cout << "Наименьшее число из трех введенных это " << m3 << endl;
		}
		else
		{
			cout << "Введите другие числа." << endl;
		}
	reTry5:
		cout << "Повторить задание? (y/n) ";
		cin >> s;
		if (s == 'y')
		{
			goto Task5;
		}
		else if (s == 'n')
		{
			goto tryExit;
		}
		else
		{
			cout << "Введите y или n" << endl;
			goto reTry5;
		}
	}
	else if (a == 6)
	{
	Task6:
		i++;
		system("cls");
		cout << "Задание 6:" << endl;
		cout << "Напишите функцию f(int m, int n), которая определяет для пары целых чисел m и n, кратно ли второе число первому" << endl;
		cout << "Решение:" << endl;
		int m;
		int n;
		cout << "Введите два числа: " << endl;
		cin >> m;
		cin >> n;
		if (n % m == 0)
		{
			cout << "Второе число кратно первому." << endl;
		}
		else if (n == m)
		{
			cout << "Числа равны." << endl;
		}
		else
		{
			cout << "Второе число не кратно первому" << endl;
		}
	reTry6:
		cout << "Повторить задание? (y/n) ";
		cin >> s;
		if (s == 'y')
		{
			goto Task6;
		}
		else if (s == 'n')
		{
			goto tryExit;
		}
		else
		{
			cout << "Введите y или n" << endl;
			goto reTry6;
		}
	}
tryExit:
	cout << "Вы хотите продолжить? (y/n) ";
	cin >> s;
	if (s == 'y')
	{
		goto Start;
	}
	else if (s == 'n')
	{
		cout << "Вы выполнили задание " << i << " раз(-а)." << endl;
	}
	else
	{
		cout << "Введите y или n" << endl;
		goto tryExit;
	}
}
