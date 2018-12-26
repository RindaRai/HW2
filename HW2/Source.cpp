#include<stdio.h>
#include<locale.h>
#include<iostream>

void task1()
{
	setlocale(LC_ALL, "");
	int h, m, s, s1;

	printf("������� ���������� ���������� ������: ");
	scanf_s("%d", &s);

	h = s / 3600;
	m = (s - h * 3600) / 60;
	s1 = s - (h * 3600 + m * 60);

	if (s >= 0 && s <= 86400)
	{
		printf("������ %d:%d:%d\n", h, m, s1);
	}
	else
	{
		printf("�� ����� ������������ ��������\n");
	}
	system("pause");
}

void task2()
{

	setlocale(LC_ALL, "");
	int x, f;

	printf("������� ����������, �����������, ��� �������������� �����: ");
	scanf_s("%d", &x);


	if (x >= 10 && x < 100)
	{
		f = (x / 10) + (x % 10) * 10;
		printf("%d\n", f);
	}

	else if (x >= 100 && x < 1000)
	{
		f = (x / 100) + ((x % 100) / 10) * 10 + ((x % 100) % 10) * 100;
		printf("%d\n", f);
	}

	else if (x >= 1000 && x < 10000)
	{
		f = (x / 1000) + ((x % 1000) / 100) * 10 + (((x % 1000) % 100) / 10) * 100 + (((x % 1000) % 100) % 10) * 1000;
		printf("%d\n", f);
	}

	else
	{
		printf("�� ����� ������������ ��������\n");
	}

	system("pause");
}

void task3()
{

	setlocale(LC_ALL, "");
	int x, x1, x2, x4, x5;

	printf("������� ����������� �����: ");
	scanf_s("%d", &x);

	x1 = x / 10000;
	x2 = (x % 10000) / 1000;
	x4 = (((x % 10000) % 1000) % 100) / 10;
	x5 = (((x % 10000) % 1000) % 100) % 10;

	if (x >= 10000 && x < 100000)
	{
		if (x1 == x5 && x2 == x4)
		{
			printf("����� %d - ���������\n", x);
		}

		else { printf("����� %d -  �� ���������\n", x); }
	}

	else
	{
		printf("�� ����� ������������ ��������\n");
	}

	system("pause");
}


void task5()
{
	setlocale(LC_ALL, "");
	int x = 2 + rand() % 5;

	switch (x)
	{
	case 2: printf("������ - �������������������\n"); break;
	case 3: printf("������ - �����������������\n"); break;
	case 4: printf("������ - ������\n"); break;
	case 5: printf("������ - �������\n"); break;
	}
	system("pause");
}

void task6()
{
	setlocale(LC_ALL, "");
	int n, n1, n10, n60;

	printf("������� ���������� �������: ");
	scanf_s("%d", &n);

	n60 = (n / 60);
	n10 = (n % 60) / 10;
	n1 = (n % 60) % 10;

	printf("%d - �� 60 �������, %d - �� 10 ������� � %d - �� 1 �������\n", n60, n10, n1);

	system("pause");
}

void task7()
{
	setlocale(LC_ALL, "");
	int n, n1, n5, n10, n60;

	printf("������� ���������� �������: ");
	scanf_s("%d", &n);

	n60 = (n / 60);
	n10 = (n % 60) / 10;
	n5 = ((n % 60) % 10) / 5;
	n1 = ((n % 60) % 10) % 5;

	printf("%d - �� 60 �������, %d - �� 10 �������, %d - �� 5 ������� � %d - �� 1 �������\n", n60, n10, n5, n1);

	system("pause");
}


int main()

{
	setlocale(LC_ALL, "");

	int task, flag;

start:

	printf("������� ����� �������: ");
	scanf_s("%d", &task);

	switch (task)
	{
	case 1:
	{
		task1();

		break;
	}
	case 2:
	{
		task2();

		break;
	}
	case 3:
	{
		task3();

		break;
	}
	case 4:
	case 5:
	{
		task5();

		break;
	}
	case 6:
	{
		task6();

		break;
	}
	case 7:
	{
		task7();

		break;
	}
	}

	printf("������ ���������� 1 ��� 0?\n");
	scanf_s("%d", &flag);
	if (flag == 1)
	{
		goto start;
	}
	system("pause");
}