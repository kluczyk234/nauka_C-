#include <cstdio>
#include <iostream>
#include <conio.h> // potrzebna do korzystania z getchar

using namespace std;

int main()
{
    int licznik, mianownik, wynik;

    cout << "Program wyswietli wynik dzielenia bez reszty" << endl;

    do
    {
        cout << endl << "Podaj wartosc pierwszej liczby (licznik)" << endl;
        cin >> licznik;
        if(!(licznik))
        {
            cerr<<"podana wartosc nie jest liczba"<<endl;
                    cin.clear();                   //cin.clear() czysci flagi bledow
        }
        getchar();                          // czeka na nacisniecie klawisza
    }
    while(!(licznik));

        do
    {
        cout << endl << "Podaj wartosc drugiej liczby (mianownik)" << endl;
        cin >> mianownik;
        if(!(mianownik))
        {
            cerr<<"podana wartosc nie jest liczba"<<endl;
                    cin.clear();                   //cin.clear() czysci flagi bledow
        }
        getchar();                          // czeka na nacisniecie klawisza
    }
    while(!(mianownik));

    wynik=licznik/mianownik;

    cout << endl << "Wynik dzielenia bez reszty wynosi "<<wynik<< endl;

    cout<<endl<<"Aby kontynuowac nacisnij enter "<<endl;
    getchar();


    return 0;
}
