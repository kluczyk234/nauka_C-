#include <iostream>
#include <stdio.h>
#include <cstdlib> // potrzebna do cls
#include <conio.h> // potrzebna do korzystania z getchar
#include <iomanip> // potrzebna do setprecision
#include <math.h> // funkcje matematyczne
#include <windows.h>

using namespace std;

float wprowadzanie_x(float a)
{
    cout<<endl << "podaj liczbe 1: " ;
    cin >> a;
    if(!(a))
    {
        getchar();
        cout<<endl<<"podana wartosc nie jest liczba"<<endl;
        cout<< endl <<"Aby kontynuowac nacisnij enter "<<endl;
        getchar();
        getchar();
        return false;
            }
    else
    return a;
}
float wprowadzanie_y(float b)
{
    cout<<endl << "podaj liczbe 2: " ;
    cin >> b;
    if(!(b))
    {
        getchar();
        cout<<endl<<"podana wartosc nie jest liczba"<<endl;
        cout<< endl <<"Aby kontynuowac nacisnij enter "<<endl;
        getchar();
        getchar();
        return false;
    }
    else
    return b;
}
float dodawanie(float x, float y)
{
    return x+y;
}
float odejmowanie(float x,float y)
{
    return x-y;
}
float mnozenie(float x,float y)
{
    return x*y;
}
float dzielenie(float x,float y)
{
    if (y==0) cout<<"nie dzielimy przez zero"<<endl;
    else
        return x/y;
}
float reszta_z_dzielenia(int x,int y)
{
    int wynik;
    if (y==0) cout<<"nie dzielimy przez zero"<<endl;
    else
        wynik=x%y;
    return wynik;
}
float potegowanie(float x,float y)
{
    return pow(x,y);
}
float logaarytm(float x,float y)
{
    if ((x<=0)||(y<=0))
    {
        cout<<"Bledne dane";
        cout<< endl <<"Aby kontynuowac nacisnij enter "<<endl;
        getchar();
        getchar();
        return false;
    }
    else
        return log(x) / log(y);
}
int main()
{
    do
    {
        cout << "WITAJ W KALKULATORZE!!" << endl;
        cout<< endl;
        cout<< "MENU GLOWNE"<< endl;
        cout<<"---------------"<<endl;
        cout<<" 1. Dodawanie" <<endl;
        cout<<" 2. Odejmowanie" <<endl;
        cout<<" 3. Mnozenie" <<endl;
        cout<<" 4. Dzielenie" <<endl;
        cout<<" 5. Reszta z dzielenia" <<endl;
        cout<<" 6. Potegowanie" <<endl;
        cout<<" 7. Logarytm" <<endl;
        cout<<" 8. Wyjscie z programu" <<endl;
        float x, y;
        x=wprowadzanie_x(x);
        y=wprowadzanie_y(y);
        if((x==false)||(y==false))
        {
            system("cls");
            cin.clear();
        }
        else
        {
            cout<< endl << "Wybierz nr dzialania z menu " <<endl;
            char wybor;
            wybor=getch();
            cout<< endl << "Wybrales opcje nr "<<wybor <<endl;
            cout<< endl <<"Aby kontynuowac nacisnij enter "<<endl;
            getchar();
            getchar();
            switch(wybor)
            {
            case '1':
                cout<< "Suma= "<<dodawanie(x, y)<<endl;
                break;
            case '2':
                cout<< "Ronica= "<<odejmowanie(x, y)<<endl;
                break;
            case '3':
                cout<< "Iloczyn= "<<mnozenie(x, y)<<endl;
                break;
            case '4':
                cout<< "Iloraz= "<<dzielenie(x, y)<<endl;
                break;
            case '5':
                cout<< "Reszta z dzielenia liczby "<<x <<" przez liczbe "<<y<<" = "<<reszta_z_dzielenia(x, y)<<endl;
                break;
            case '6':
                cout<< "Liczba "<<x <<" podniesiona do potegi liczby "<<y<<" = "<<potegowanie(x, y)<<endl;
                break;
            case '7':
                if(logaarytm(x, y)==false)
                {
                    system("cls");
                    cin.clear();
                }
                else
                {
                    cout<<"Logarytm o podstawie "<<y<<" z liczby "<<x<<" wynosi " <<logaarytm(x, y)<<endl;
                }
                break;
            case '8':
                exit(0);
                break;
            default:                            // scenariusz dla wszystkich innych niezdefiniowanych woborów w case (dzieki temu ze wubur jest zmienna typu char jak ktos sie pomyli program korzysta z opcji default
                cout<< "Nie ma takiej opcji w menu"<<endl;
            }
            cout<< endl <<"Aby kontynuowac nacisnij enter "<<endl;
            getchar();
            system("cls");
            cin.clear();
            cin.sync();
        }
    }
    while (true);
    return 0;
}
