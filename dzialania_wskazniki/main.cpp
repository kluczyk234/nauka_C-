#include <iostream>
#include <cstdlib>
#include <stdio.h>

using namespace std;

double wprowadzanie_wartosci(double * zbior_liczb, int ilosc);
double Suma_liczb(double * zbior, int ilosc);
double Wartosc_srednia(double * zbior, int ilosc);
double Iloczyn_liczb(double * zbior, int ilosc);

int main()
{
    char znak;
    do
    {
        int ilosc=0;
        double * wskaznik_tablicy = new double [ilosc];
        do
        {
            do
            {
                cout << "WITAJ !!" << endl;
                cout<< endl << "Program wyswietli sume oraz iloczyn liczb ktore wpiszesz" << endl;
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
                }
            }
            while((!(ilosc))||(ilosc)<=0);
        }
        while((wprowadzanie_wartosci(wskaznik_tablicy, ilosc))==false);
        cout<< endl << "Suma podanych liczb wynosi: "<<Suma_liczb(wskaznik_tablicy, ilosc)<< endl;
        cout<< endl << "Wartosc srednia z podanych liczb wynosi: "<<Wartosc_srednia(wskaznik_tablicy, ilosc)<< endl;
        cout<< endl << "Iloczyn podanych liczb wynosi: "<<Iloczyn_liczb(wskaznik_tablicy, ilosc)<< endl;
        cout<< endl <<"Aby powtozyc wcisnij t a nastepnie nacisnij enter "<<endl;
        cin>>znak;
        delete [] wskaznik_tablicy;
        system("cls");
        cin.clear();
    }
    while(znak=='t');
    return 0;
}
double wprowadzanie_wartosci(double* zbior_liczb, int ilosc)
{
    cout<< endl << "Podaj ciag liczb calkowitych" <<endl;
    for (int i=0; i<=ilosc-1; i++ )
    {
        cout<< endl << "Podaj liczbe nr "<<i+1<< endl;
        double x;
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
        {
            *zbior_liczb=x;
            zbior_liczb++;
        }
    }
    return * zbior_liczb;
}
double Suma_liczb(double * zbior, int ilosc)
{
    double wynik_suma=0;
    for( int i = 0; i <= ilosc-1; i++ )
    {
        wynik_suma+=*zbior;
        zbior++;
    }
    return wynik_suma;
}
double Wartosc_srednia(double * zbior, int ilosc)
{
    double Suma=0;
    for( int i = 0; i <= ilosc-1; i++ )
    {
        Suma+=*zbior;
        zbior++;
    }
    return Suma/ilosc;
}
double Iloczyn_liczb(double * zbior, int ilosc)
{
    double wynik_iloczyn=1;
    for( int i = 0; i <= ilosc-1; i++ )
    {
        wynik_iloczyn=wynik_iloczyn*(*zbior);
        zbior++;
    }
    return wynik_iloczyn;
}
