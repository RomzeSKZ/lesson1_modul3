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
	cout << "����� �������: ";
	short unsigned int a = 0;
	cin >> a;
	if (a == 1)
	{
	Task1:
		i++;
		system("cls");
		cout << "������� 1:" << endl;
		cout << "�������� ������� int f(int h, int m, int s), ������� ��������� ��� ����� ��������� (���� h, ������ m � ������� s) � ���������� ���������� ������, ��������� � ������ ���." << endl;
		cout << "�������:" << endl;
		int h;
		int m;
		int s;
		cout << "������� �����: " << endl;
		cout << "����: ";
		cin >> h;
		cout << endl << "������: ";
		cin >> m;
		cout << endl << "�������: ";
		cin >> s;
		int time = h * 3600 + m * 60 + s;
		if (h >= 0 && h <= 24 && m >= 0 && m <= 60 && s >= 0 && s <= 60)
		{
			cout << endl << "� ������ ��� ������ " << time << " ������." << endl;
		}
		else
		{
			cout << endl << "������� ���������� �����." << endl;
		}
	reTry1:
		cout << "��������� �������? (y/n) ";
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
			cout << "������� y ��� n" << endl;
			goto reTry1;
		}
	}
	else if (a == 2)
	{
	Task2:
		i++;
		system("cls");
		cout << "������� 2:" << endl;
		cout << "�������� ������� int f(int m, int d), ������� ��������� ��� ����� ��������� (����� m � ���� d) � ���������� ���������� ����, ��������� � ������ ����. �������, ��� � ������ ������ 30 ����." << endl;
		cout << "�������:" << endl;
		int m;
		int d;
		cout << "������� ����� � ����: " << endl;
		cout << endl << "�����: ";
		cin >> m;
		cout << endl << "����: ";
		cin >> d;
		int time = m * 30 - 30 + d;
		if (m >= 1 && m <= 12 && d >= 1 && d <= 30)
		{
			cout << endl << "� ������ ���� ������ " << time << " ����." << endl;
		}
		else
		{
			cout << endl << "������� ���������� �����." << endl;
		}
	reTry2:
		cout << "��������� �������? (y/n) ";
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
			cout << "������� y ��� n" << endl;
			goto reTry2;
		}
	}
	else if (a == 3)
	{
	Task3:
		i++;
		system("cls");
		cout << "������� 3:" << endl;
		cout << "�������� ������� int f(int m, int d), ������� ��������� ��� ����� ��������� (����� m � ���� d) � ���������� ���������� ����, ��������� � ������ ����. �������, ��� � ������ ������ 30 ��� 31����, � ��� �� ����������." << endl;
		cout << "�������:" << endl;
		int m;
		int d;
		cout << "������� ����� � ����: " << endl;
		cout << endl << "�����: ";
		cin >> m;
		cout << endl << "����: ";
		cin >> d;
		if (m >= 1 && m <= 12 && d >= 1 && d <= 31)
		{
			if (m == 1 && d >= 1 && d <= 31)
			{
				int time = d;
				cout << endl << "� ������ ���� ������ " << time << " ����." << endl;
			}
			else if (m == 2 && d >= 1 && d <= 28)
			{
				int time = 31 + d;
				cout << endl << "� ������ ���� ������ " << time << " ����." << endl;
			}
			else if (m == 3 && d >= 1 && d <= 31)
			{
				int time = 31 + 28 + d;
				cout << endl << "� ������ ���� ������ " << time << " ����." << endl;
			}
			else if (m == 4 && d >= 1 && d <= 30)
			{
				int time = 31 + 28 + 31 + d;
				cout << endl << "� ������ ���� ������ " << time << " ����." << endl;
			}
			else if (m == 5 && d >= 1 && d <= 31)
			{
				int time = 31 + 28 + 31 + 30 + d;
				cout << endl << "� ������ ���� ������ " << time << " ����." << endl;
			}
			else if (m == 6 && d >= 1 && d <= 30)
			{
				int time = 31 + 28 + 31 + 30 + 31 + d;
				cout << endl << "� ������ ���� ������ " << time << " ����." << endl;
			}
			else if (m == 7 && d >= 1 && d <= 31)
			{
				int time = 31 + 28 + 31 + 30 + 31 + 30 + d;
				cout << endl << "� ������ ���� ������ " << time << " ����." << endl;
			}
			else if (m == 8 && d >= 1 && d <= 31)
			{
				int time = 31 + 28 + 31 + 30 + 31 + 30 + 31 + d;
				cout << endl << "� ������ ���� ������ " << time << " ����." << endl;
			}
			else if (m == 9 && d >= 1 && d <= 30)
			{
				int time = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + d;
				cout << endl << "� ������ ���� ������ " << time << " ����." << endl;
			}
			else if (m == 10 && d >= 1 && d <= 31)
			{
				int time = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + d;
				cout << endl << "� ������ ���� ������ " << time << " ����." << endl;
			}
			else if (m == 11 && d >= 1 && d <= 30)
			{
				int time = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + d;
				cout << endl << "� ������ ���� ������ " << time << " ����." << endl;
			}
			else if (m == 12 && d >= 1 && d <= 31)
			{
				int time = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30 + d;
				cout << endl << "� ������ ���� ������ " << time << " ����." << endl;
			}
			else
			{
				cout << endl << "������� ���������� ����." << endl;
			}
		}
		else
		{
			cout << endl << "������� ���������� ����." << endl;
		}
	reTry3:
		cout << "��������� �������? (y/n) ";
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
			cout << "������� y ��� n" << endl;
			goto reTry3;
		}
	}
	else if (a == 4)
	{
	Task4:
		i++;
		system("cls");
		cout << "������� 4:" << endl;
		cout << "�������� ������� f(int m1, int m0, int N), ������� ���������� ������ � ��������� ����� ����������� ������������ ����� N." << endl;
		cout << "�������:" << endl;
		int N;
		cout << "������� ���������� �����: " << endl;
		cin >> N;
		int m1 = N / 10;
		int m0 = N % 10;
		if (N >= 10 && N <= 100)
		{
			cout << "��������� ����� ������� �� ���� " << m1 << " � " << m0 << endl;
		}
		else
		{
			cout << "������� ���������� �����." << endl;
		}
	reTry4:
		cout << "��������� �������? (y/n) ";
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
			cout << "������� y ��� n" << endl;
			goto reTry4;
		}
	}
	else if (a == 5)
	{
	Task5:
		i++;
		system("cls");
		cout << "������� 5:" << endl;
		cout << "�������� ������� int f(int m1, int m2, int m3), ������� ������� ���������� ����� �� ��������� ������ ���� ����� �����. ����������� �������� �������� if" << endl;
		cout << "�������:" << endl;
		int m1;
		int m2;
		int m3;
		cout << "������� 3 ����� �����: ";
		cin >> m1;
		cin >> m2;
		cin >> m3;
		if (m1 < m2 && m1 < m3)
		{
			cout << "���������� ����� �� ���� ��������� ��� " << m1 << endl;
		}
		else if (m2 < m1 && m2 < m3)
		{
			cout << "���������� ����� �� ���� ��������� ��� " << m2 << endl;
		}
		else if (m3 < m1 && m3 < m2)
		{
			cout << "���������� ����� �� ���� ��������� ��� " << m3 << endl;
		}
		else
		{
			cout << "������� ������ �����." << endl;
		}
	reTry5:
		cout << "��������� �������? (y/n) ";
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
			cout << "������� y ��� n" << endl;
			goto reTry5;
		}
	}
	else if (a == 6)
	{
	Task6:
		i++;
		system("cls");
		cout << "������� 6:" << endl;
		cout << "�������� ������� f(int m, int n), ������� ���������� ��� ���� ����� ����� m � n, ������ �� ������ ����� �������" << endl;
		cout << "�������:" << endl;
		int m;
		int n;
		cout << "������� ��� �����: " << endl;
		cin >> m;
		cin >> n;
		if (n % m == 0)
		{
			cout << "������ ����� ������ �������." << endl;
		}
		else if (n == m)
		{
			cout << "����� �����." << endl;
		}
		else
		{
			cout << "������ ����� �� ������ �������" << endl;
		}
	reTry6:
		cout << "��������� �������? (y/n) ";
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
			cout << "������� y ��� n" << endl;
			goto reTry6;
		}
	}
tryExit:
	cout << "�� ������ ����������? (y/n) ";
	cin >> s;
	if (s == 'y')
	{
		goto Start;
	}
	else if (s == 'n')
	{
		cout << "�� ��������� ������� " << i << " ���(-�)." << endl;
	}
	else
	{
		cout << "������� y ��� n" << endl;
		goto tryExit;
	}
}
