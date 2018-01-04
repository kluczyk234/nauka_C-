#include <cstdio>
#include <iomanip> // potrzebna do setprecision
#include <iostream>
#include <math.h> // funkcje matematyczne
#include <windows.h> // potrzebna do rozszezonej tablicy ASCI
#include <conio.h> // potrzebna do korzystania z getchar

using namespace std;

int main()
{
    system("chcp 437"); // ustawienie strony kodowania
    int y=227;
    string liczba_pi;
    liczba_pi=(char)y;
    int dokladnosc;
    double promien_kuli, objetosc_kuli, PI;
    cout << endl << "Program policzy objetosc kuli o podanym promieniu" << endl;
    cout << endl << "Wzor na objetosc kuli= (4/3)*" <<liczba_pi <<"*R^3" <<endl;
    do
    {
        cout << endl << "Podaj promien kuli ktorej objetosc liczymy" << endl;
        cin >> promien_kuli;
        if(!(promien_kuli))
        {
            cerr<<"podana wartosc nie jest liczba"<<endl;
                    cin.clear();                   //cin.clear() czysci flagi bledow
        }
        getchar();                          // czeka na nacisniecie klawisza
    }
    while(!(promien_kuli));



   do
    {
        cout<< endl << "Podaj z jaka dokladnoscia chcesz wyswietlic wynik "<< endl;
        cin >> dokladnosc;
        if(!(dokladnosc))
        {
            cerr<<"podana wartosc nie jest liczba"<<endl;
                    cin.clear();                   //cin.clear() czysci flagi bledow
        }
        getchar();                          // czeka na nacisniecie klawisza
    }
    while(!(dokladnosc));

    cout<< endl <<"Aby kontynuowac nacisnij enter "<<endl;

    getchar();
    PI = 2*acos(0.0);
    objetosc_kuli = (4/3)*PI*(pow (promien_kuli,3));

    cout<<setprecision(dokladnosc) << endl <<"Objetosc kuli o promieniu R = "<<promien_kuli<<" wynosi V = "<< objetosc_kuli<<" jednostek szesciennych "<<endl;
    cout<<endl<<"Aby kontynuowac nacisnij enter "<<endl;
    getchar();

    return 0;
}
