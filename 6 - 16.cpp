/* 16. Дана матрица A вида из n строк и m столбцов.Построить одномерный массив, каждый элемент которого содержит
наименьший по абсолютной величине элемент строки.*/
// #include "stdafx.h" (если более ранняя версия программы)
#include <iostream>
#include <conio.h>
#include <fstream>
#include <cstdlib>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	while (1)
	{
		cout << "Введите число: 1 - начало работы, 0 - конец работы" << endl;
		int z = _getch();
		switch (z)
		{
		case 49:
		{
			int n;
			cout << "Введите кол-во строк: ";
			cin >> n;
			cout << endl;
			int m;
			cout << "Введите кол-во столбцов: ";
			cin >> m;
			cout << endl;
			srand(time(0));
			int* arraym = new int[m];
			int* arrayn = new int[n];
			int l = 1;
			for (int k = 1; k <= n; k++)
			{
				cout << k << " Строка: " << endl;
				int p = m;
				if (k % 2 == 0)
				{
					p = m - l;
					l += 1;
				}
				arraym[0] = rand() % 20000 - 10000;
				cout << 1 << " Элемент: " << arraym[0] << endl;
				double min = arraym[0];
				for (int i = 1; i < p; i++)
				{
					arraym[i] = rand() % 20000 - 10000;
					cout << i + 1 << " Элемент: " << arraym[i] << endl;
					if (abs(min) > abs(arraym[i]))
						min = arraym[i];
				}
				arrayn[k - 1] = min;
				cout << endl;
			}
			cout << "Искомый массив: " << endl;
			for (int g = 0; g < n; g++)
				cout << g + 1 << " Элемент: " << arrayn[g] << " " << endl;
			delete[] arrayn;
			delete[] arraym;
			continue;
		}
		case 48:
		{
			cout << "Конец работы." << endl;
			return 1;
		}

		default:
			cout << "Ошибка. Введите 1 или 0" << endl;
		}
	}
}