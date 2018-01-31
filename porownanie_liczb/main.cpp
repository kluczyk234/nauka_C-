#include <iostream>
#include <cstdlib>
#include <stdio.h>
#include <cmath>

using namespace std;
double wprowadzanie_wartosci(double * tablica_liczb, int ilosc);
double Wyszukiwanie_najwiekszej(double * tablica_liczb, int ilosc);
double Wyszukiwanie_najmniejszej(double * tablica_liczb, int ilosc);
double Liczba_srednia(double * tablica_liczb, int ilosc);
int main()
{
    char znak;
    int ilosc=0;
    double * wskaznik_zbior_liczb = new double [ilosc];
    do
    {
        do
        {
            cout << "WITAJ W WYSZUKIWARCE LICZB!!" << endl;
            cout<< endl << "Program wyszuka najwieksza i najmniejsza liczbe z podanych" << endl;
            do
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
                }
            }
            while((!(ilosc))||(ilosc)<=0);
        }
        while((wprowadzanie_wartosci(wskaznik_zbior_liczb, ilosc))==false);
        cout<< endl << "Najwieksza liczba z podanych to: "<<Wyszukiwanie_najwiekszej(wskaznik_zbior_liczb,ilosc)<< endl;
        cout<< endl << "Najmniejsza liczba z podanych to: "<<Wyszukiwanie_najmniejszej(wskaznik_zbior_liczb,ilosc)<< endl;
        cout<< endl << "Wartosc najbardziej zblizona do sredniej: "<<Liczba_srednia(wskaznik_zbior_liczb,ilosc)<< endl;
        cout<< endl <<"Aby powtozyc wcisnij t a nastepnie nacisnij enter "<<endl;
        cin>>znak;
        system("cls");
        cin.clear();
    }
    while(znak=='t');
    return 0;
}
double wprowadzanie_wartosci(double* tablica_liczb, int ilosc)
{
    cout<< endl << "Podaj liczby ktore chcesz porownac" <<endl;
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
            *tablica_liczb=x;
            tablica_liczb++;
        }
    }
    return * tablica_liczb;
}
double Wyszukiwanie_najwiekszej(double * tablica_liczb, int ilosc)
{
    double kopia_zbioru1[ilosc-1];
    for ( int i = 0; i <= ilosc-1; i++ )
    {
        kopia_zbioru1[i]=*tablica_liczb;
        tablica_liczb++;
    }
    double wynik1=0;
    wynik1=kopia_zbioru1[0];
    for( int i = 1; i <= ilosc-1; i++ )
    {
        if( kopia_zbioru1[i] > wynik1 )
        {
            wynik1=kopia_zbioru1[i];
        }
    }
    return wynik1;
}
double Wyszukiwanie_najmniejszej(double * tablica_liczb, int ilosc)
{
    double kopia_zbioru2[ilosc-1];
    for ( int i = 0; i <= ilosc-1; i++ )
    {
        kopia_zbioru2[i]=*tablica_liczb;
        tablica_liczb++;
    }
    double wynik2=kopia_zbioru2[0];
    for( int i = 0; i <= ilosc-1; i++ )
    {
        if( kopia_zbioru2[i] < wynik2 )
        {
            wynik2=kopia_zbioru2[i];
        }
    }
    return wynik2;
}
double Liczba_srednia(double * tablica_liczb, int ilosc)
{
    double roznica1, roznica2, kopia_zbioru3[ilosc-1];
    for ( int i = 0; i <= ilosc-1; i++ )
    {
        kopia_zbioru3[i]=*tablica_liczb;
        tablica_liczb++;
    }
    double suma=0, srednia;
    for( int i = 0; i <= ilosc-1; i++ )
    {
        suma+=kopia_zbioru3[i];
    }
    srednia = suma/ilosc;
    cout<< endl << "Wartosc srednia z podanych liczb wynosi: " << srednia <<endl;
    double wynik3=kopia_zbioru3[0];
    for ( int i = 1; i <= ilosc-1; i++ )
    {
        roznica1= fabs(srednia-kopia_zbioru3[i]);
        roznica2= fabs(srednia-wynik3);
        if(roznica1 < roznica2) wynik3=kopia_zbioru3[i];
    }
    return wynik3;
}

