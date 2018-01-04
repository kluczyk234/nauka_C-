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
int Wyszukiwanie_najwiekszej(int zbior[])
{
    int kopia_zbioru1[ilosc-1];
    for ( int i = 0; i <= ilosc-1; i++ )
    {
        kopia_zbioru1[i]=zbior[i];
    }
    int wynik1;
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
int Wyszukiwanie_najmniejszej(int zbior[])
{
    int kopia_zbioru2[ilosc-1];
    for ( int i = 0; i <= ilosc-1; i++ )
    {
        kopia_zbioru2[i]=zbior[i];
    }
    int wynik2;
    wynik2=kopia_zbioru2[0];
    for( int i = 1; i <= ilosc-1; i++ )
    {
        if( kopia_zbioru2[i] < wynik2 )
        {
            wynik2=kopia_zbioru2[i];
        }
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
            cout << "WITAJ W WYSZUKIWARCE LICZB!!" << endl;
            cout<< endl << "Program wyszuka najwieksza i najmniejsza liczbe z podanych" << endl;
        }
        while((wprowadzanie_wartosci(zbior_liczb))==false);
        cout<< endl << "Najwieksza liczba z podanych to: "<<Wyszukiwanie_najwiekszej(zbior_liczb)<< endl;
        cout<< endl << "Najmniejsza liczba z podanych to: "<<Wyszukiwanie_najmniejszej(zbior_liczb)<< endl;
        cout<< endl <<"Aby powtozyc wcisnij t a nastepnie nacisnij enter "<<endl;
        cin>>znak;
        system("cls");
        cin.clear();
    }
    while(znak=='t');
    return 0;
}
