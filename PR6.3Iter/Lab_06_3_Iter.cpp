//Lab_06_3_Iter.cpp
// Вольвенко Іван
// Лабораторна робота № 6.3
// Опрацювання одновимірних масивів за допомогою звичайних функцій та шаблонів
// Варіант 13

#include<iostream>
#include<iomanip>
#include<time.h>

using namespace std;

void Create(int mas[], const int n, const int Low, const int High)
{
	for (int i = 0; i < n; i++)
	{
		mas[i] = Low + rand() % (High - Low + 1);
	}
}

void Print(int mas[], const int n)
{
	cout << "a[ ";
	for (int i = 0; i < n; i++)
	{
		cout << mas[i] << " ";
	}
	cout << "]" << endl;
}

template <typename T>
T Perev1(T mas[], const T n)                      // шаблонна функція
{
	if (n < 2)
		cerr << "in arrays one element" << endl;
	int i;
	for (i = 1; i < n && !(mas[i - 1] < mas[i]); i++)
		return i >= n;
}

int Perev2(int mas[], const int n)                // звичайна функція
{
	if (n < 2)
		cerr << "in arrays one element" << endl;
	int i;
	for (i = 1; i < n && !(mas[i - 1] < mas[i]); i++)
	return i >= n;
}

int main()
{
	srand((unsigned)time(NULL));

	const int k = 5;
	int a[k];

	int Low = 0;
	int High = 5;

	Create(a, k, Low, High);
	Print(a, k);

	if (Perev1(a, k) == 1)        // виклик шаблонної функції
		cout << "True" << endl;
	else
		cout << "False" << endl;

	if (Perev2(a, k) == 1)        // виклик звичайної функції
		cout << "True" << endl;
	else
		cout << "False" << endl;
	
	return 0;
}