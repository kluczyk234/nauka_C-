#include <iostream>
#include <cstdlib>
#include <stdio.h>

using namespace std;
int ilosc;
char znak;
int wprowadzanie_wartosci(int zbior_liczb[])
{
    cout<< endl << "Podaj ile liczb chcesz anlizowac" <<endl;
    cin>> ilosc;
    if((!(ilosc))||(ilosc)<=0)
    {
        getchar();
        cout<<endl<<"Podana wartosc jest bledna lub nie jest liczba"<<endl;
        cout<< endl <<"Aby kontynuowac nacisnij enter "<<endl;
        getchar();
        getchar();
        cin.clear();
        system("cls");
        return false;
    }
    else
    {
        cout<< endl << "Podaj ciag liczb calkowitych" <<endl;
        for (int i=0; i<=ilosc-1; i++ )
        {
            cout<< endl << "Podaj liczbe nr "<<i+1<< endl;
            int x;
            cin>> x;
            if(!(x))
            {
                getchar();
                cout<<endl<<"podana wartosc nie jest liczba"<<endl;
                cout<< endl <<"Aby kontynuowac nacisnij enter "<<endl;
                getchar();
                getchar();
                cin.clear();
                system("cls");
                return false;
            }
            else
                zbior_liczb[i]=x;
        }
        return * zbior_liczb;
    }
}
int Suma_liczb(int zbior[])
{
    int wynik1=0;
    for( int i = 0; i <= ilosc-1; i++ )
    {
        wynik1+=zbior[i];
    }

    return wynik1;
}

int Iloczyn_liczb(int zbior[])
{
    int wynik2=1;
    for( int i = 0; i <= ilosc-1; i++ )
    {
        wynik2=wynik2*zbior[i];
    }
    return wynik2;
}

int main()
{
    int zbior_liczb[ilosc];
    do
    {
        do
        {
            cout << "WITAJ !!" << endl;
            cout<< endl << "Program wyswietli sume oraz iloczyn liczb ktore wpiszesz" << endl;
        }
        while((wprowadzanie_wartosci(zbior_liczb))==false);
        cout<< endl << "Suma podanych liczb wynosi: "<<Suma_liczb(zbior_liczb)<< endl;
        cout<< endl << "iloczyn podanych liczb wynosi: "<<Iloczyn_liczb(zbior_liczb)<< endl;
        cout<< endl <<"Aby powtozyc wcisnij t a nastepnie nacisnij enter "<<endl;
        cin>>znak;
        system("cls");
        cin.clear();
    }
    while(znak=='t');

    return 0;
}
