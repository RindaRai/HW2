#include<stdio.h>
#include<locale.h>
#include<iostream>

void task1()
{
	setlocale(LC_ALL, "");
	int h, m, s, s1;

	printf("Введите количество пройденных секунд: ");
	scanf_s("%d", &s);

	h = s / 3600;
	m = (s - h * 3600) / 60;
	s1 = s - (h * 3600 + m * 60);

	if (s >= 0 && s <= 86400)
	{
		printf("Сейчас %d:%d:%d\n", h, m, s1);
	}
	else
	{
		printf("Вы ввели недопустимое значение\n");
	}
	system("pause");
}

void task2()
{

	setlocale(LC_ALL, "");
	int x, f;

	printf("Введите двузначное, трехзначное, или четырехзначное число: ");
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
		printf("Вы ввели недопустимое значение\n");
	}

	system("pause");
}

void task3()
{

	setlocale(LC_ALL, "");
	int x, x1, x2, x4, x5;

	printf("Введите пятизначное число: ");
	scanf_s("%d", &x);

	x1 = x / 10000;
	x2 = (x % 10000) / 1000;
	x4 = (((x % 10000) % 1000) % 100) / 10;
	x5 = (((x % 10000) % 1000) % 100) % 10;

	if (x >= 10000 && x < 100000)
	{
		if (x1 == x5 && x2 == x4)
		{
			printf("Число %d - палиндром\n", x);
		}

		else { printf("Число %d -  не палиндром\n", x); }
	}

	else
	{
		printf("Вы ввели недопустимое значение\n");
	}

	system("pause");
}


void task5()
{
	setlocale(LC_ALL, "");
	int x = 2 + rand() % 5;

	switch (x)
	{
	case 2: printf("Оценка - неудовлетворительно\n"); break;
	case 3: printf("Оценка - удовлетворительно\n"); break;
	case 4: printf("Оценка - хорошо\n"); break;
	case 5: printf("Оценка - отлично\n"); break;
	}
	system("pause");
}

void task6()
{
	setlocale(LC_ALL, "");
	int n, n1, n10, n60;

	printf("Введите количество поездок: ");
	scanf_s("%d", &n);

	n60 = (n / 60);
	n10 = (n % 60) / 10;
	n1 = (n % 60) % 10;

	printf("%d - на 60 поездок, %d - на 10 поездок и %d - на 1 поездку\n", n60, n10, n1);

	system("pause");
}

void task7()
{
	setlocale(LC_ALL, "");
	int n, n1, n5, n10, n60;

	printf("Введите количество поездок: ");
	scanf_s("%d", &n);

	n60 = (n / 60);
	n10 = (n % 60) / 10;
	n5 = ((n % 60) % 10) / 5;
	n1 = ((n % 60) % 10) % 5;

	printf("%d - на 60 поездок, %d - на 10 поездок, %d - на 5 поездок и %d - на 1 поездку\n", n60, n10, n5, n1);

	system("pause");
}


int main()

{
	setlocale(LC_ALL, "");

	int task, flag;

start:

	printf("Введите номер задания: ");
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

	printf("Хотите продолжить 1 или 0?\n");
	scanf_s("%d", &flag);
	if (flag == 1)
	{
		goto start;
	}
	system("pause");
}