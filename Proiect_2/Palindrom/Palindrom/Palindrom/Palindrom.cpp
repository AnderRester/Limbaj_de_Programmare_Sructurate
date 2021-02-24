#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int Palindrom(int);

int main()
{
	cout << "Proiect ne. 1, elaborat de Andrei Jiganov" << endl;
	cout << "Tema: Palindrom" << endl;
	// 1. Проверить если число является Палиндромом.
	int numarMin, numarMax, barrier;
	// 2. Определить все палиндромы заданного интервала.
	int sum = 0;
	int aux = 0;
	cout << "Introduceti de la ce numar si pina la ce numar o sa prelucreze programmul:";
	cin >> numarMin >> numarMax;
	// 3. Определить минимальный и максимальный палиндром заданного интервала.
	cout << "Introduceti cite numere vreti sa afisati:" << endl;
	int Min = numarMax;
	int Max = 0;
	cout << "Numerele Polindroame:" << endl;
	for (int i = numarMin; i < numarMax; i++)
	{
		if (i >= 11)
		{
			if (Palindrom(i))
			{
				if (Max < i)
				{
					Max = i;
				}
				if (Min > i)
				{
					Min = i;
				}
				// 4. Определение количества полиндромов в заданном интервале.
				sum++;
				cout << i << endl;
			}
		}
	}
	cin >> barrier;
	// 5. Вывести первые n палиндромов
	for (numarMin; numarMin < numarMax; numarMin++)
	{
		if (numarMin >= 10)
		{
			if (Palindrom(numarMin))
			{
				if (aux < barrier)
				{
					cout << "\n" << numarMin << " - Numar din intervalul dat" << endl;
					aux++;
				}
			}
		}
	}
	cout << "\n" << "Min = " << Min << endl; // Минимум 
	cout << "Max = " << Max << endl; // Максимум
	cout << "\n" << "Total: " << sum; // Общее кол-во палиндромов в заданном интервале

	return 0;
}

int Palindrom(int n)
{
	int invers = 0;
	int aux = n;
	while (aux > 0)
	{
		invers = invers * 10 + aux % 10;
		aux /= 10;
	}
	return n == invers;
}
