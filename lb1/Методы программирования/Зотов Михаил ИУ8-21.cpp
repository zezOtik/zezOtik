#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	cout << "Введите число элементов массива\n";
	int N;
	cout << "N=";
	cin >> N;
	int *p = new int[N];
	for (int i = 0; i < N; i++)
	{
		cin>>p[i];
	}
	for ( int i = 0; i < N; i++)
	{
		cout << p[i] << " ";
	}
	for (int i = 0; i < N-1; i++)
	{
		for (int j = i + 1; j < N; j++)
		{
			if (p[i] > p[j])
			{
				swap(p[i], p[j]);
			}
		}
	}
	cout << "Получили массив";
	for (int i = 0; i < N; i++)
	{
		cout << p[i] << " ";
	}
	system("pause");
}

