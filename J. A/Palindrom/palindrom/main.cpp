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
    int sum = 0;
    int aux = 0;
    cout << "Introduceti de la ce numar si pina la ce numar o sa prelucreze programmul:";
    // Нахождение минимума и максимума
    cin >> numarMin >> numarMax;
    int Min = numarMax;
    int Max = 0;
    // Все палиндромы заданного интрвала
    cout << "Numerele Polindroame:" << endl;
    for(int i = numarMin; i < numarMax; i++)
    {
        if(i >= 10)
        {
            if(Palindrom(i))
            {
                if(Max < i)
                {
                    Max = i;
                }
                if(Min > i)
                {
                    Min = i;
                }
                sum ++;
                cout << i << " ";
            }
        }
    }
    // Вывод определённого кол-ва чисел r
    cout << "Introduceti cite numere vreti sa afisati:" << endl;
    cin >> barrier;
    for(numarMin; numarMin < numarMax; numarMin++)
    {
        if(numarMin >= 10)
        {
            if(Palindrom(numarMin))
            {
                if(aux < barrier)
                {
                    cout << "\n" << numarMin << " - Numar din intervalul dat"<< endl;
                    aux++;
                }
            }
        }
    }
    cout << "\n" <<"Min = " << Min << endl;
    cout <<"Max = " << Max << endl;
    cout  << "\n" <<"Total: " << sum;

    return 0;
}

int Palindrom(int n)
{
    int invers = 0;
    int aux = n;
    while(aux > 0)
    {
        invers = invers*10 + aux%10;
        aux /= 10;
    }
    return n == invers;
}
