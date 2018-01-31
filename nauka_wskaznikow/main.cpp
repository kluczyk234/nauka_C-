#include <iostream>
#include <cstdlib>
#include <stdio.h>

using namespace std;
char znak;
int ile;
float suma;

float wartosc_srednia(int *wskaznik_dla_tablicy, int ile)
{
    int x;
    for (int i=0 ; i<=ile-1 ; i++)
    {
        do
        {
            cout<< endl << "Podaj liczbe nr "<<i+1<<" ktora bedzie zapisana w "<<i+1<<" komorce tablicy pod adresem: "<< (int)wskaznik_dla_tablicy <<endl; // rzutowanie zmiennej na typ int lub (uintptr_t)tablica
            cin>> x;
            if(!(x))
            {

                cout<<endl<<"podana wartosc nie jest liczba"<<endl;
                cout<< endl <<"Aby kontynuowac nacisnij enter "<<endl;
                getchar();
                getchar();
                                getchar();
                cin.clear();
            }
        }
        while(!(x));
        *wskaznik_dla_tablicy=x; // tutaj operujemy na wartosciach w komorkach tablicy bo jest *
        suma+=*wskaznik_dla_tablicy;
        // jesli wskaznik jest bez * to operujemy na adresach kolejnej komorki tablicy, adresy rosna co 4B bo to jest zmienna int
        wskaznik_dla_tablicy++;     // tutaj operujemy na wskazniku adresu, petla przeskakuje na adres kolejnej komorki tablicy
    }
    return suma/ile;
}

int main()
{
    do
    {
        do
        {
            cout << "ile liczb bedzie w tablicy?" << endl;
            cin >> ile;
            if(!(ile))
            {
                cout<<endl<<"podana wartosc nie jest liczba"<<endl;
                cout<< endl <<"Aby kontynuowac nacisnij enter "<<endl;
                getchar();
                getchar();
                getchar();
                cin.clear();
                        system("cls");
            }
        }
        while(!(ile));
        int *tablica_wskaznik;           // wskaznik - zawiera informacje o adresach grgumentow/komorek tablicy. zmieniaja sie co 4 bo to zmienna int
        tablica_wskaznik = new int [ile-1]; // rezerwuje miejsce dla wybranej ilosci argumentow/komorek tablicy
        cout<< endl<<"Srednia z "<<ile<< " podanych liczb wynosi: "<<wartosc_srednia(tablica_wskaznik, ile)<< endl; // tutaj w funkcji wstawiamy bez gwiazdki, to oznacza ze wskaznik jest ustawiony na szufladke 0
        delete [] tablica_wskaznik; // zwalnia miejsce w ramie zarezerwowane dla tej tablicy
        cout<< endl <<"Aby powtozyc wcisnij t a nastepnie nacisnij enter "<<endl;
        cin>>znak;
        system("cls");
        cin.clear();
    }
    while(znak=='t');
    return 0;
}
