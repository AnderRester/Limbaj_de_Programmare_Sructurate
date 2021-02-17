# Limbaj_de_Programmare_Sructurate


Запаска
-----------------------

/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int n = 0;
    int tarif = 0;
    int min = 10;
    int max = 0;
    int dif;
    float average = 0;
    
    cout << "Introduceti numarul tariferilor." << endl;
    cin >> n;
    cout << "\n" << "Completati pretul 1 m^3 in valuta de lei." << endl;
    for(int i = 0; i < n; i++) {
        cin >> tarif;
        if(min > tarif) {
            min = tarif;
        }
        if(max < tarif) {
            max = tarif;
        }
        average += tarif;
    }
    average = average / (float)n;
    dif = max - min;
    cout << min << " - minim" << " | " << max << " - maxim " << " | " << setprecision(4) << average << " lei - medie" << " | " << dif << " lei - diferenta" << endl;
    cout << "Alegeti ";

    return 0;
}

запаска №2
------------------------------

/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int tarif1 = 4;
    int tarif2 = 5;
    int min = 10;
    int max = 0;
    float average = 0;
    int dif = 0;
    int desire = 0;
    
    min = tarif1;
    max = tarif2;
    
    if( min > max) {
        max = tarif1;
        min = tarif2;
    }         
    
    dif = max - min;
    average = (tarif1 + tarif2) / (float)2;
    
    cout << max << " - max" << " " << min << " - min" << endl;
    cout << dif << " - diferenta" << endl;
    cout << average << " - medie" << endl;
    
    cin 
    
    //cout<<"Hello World";

    return 0;
}

