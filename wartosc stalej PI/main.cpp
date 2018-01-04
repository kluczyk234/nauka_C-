#include <cstdio>
#include <iomanip>
#include <iostream>
#include <math.h>
#include <windows.h>
#include <conio.h> // potrzebna do korzystania z getchar

using namespace std;

int main()
{
    do
    {
        system("chcp 437"); // ustawienie strony kodowania
        double PI, Pierwiastek, rzad;
        int dokladnoscPI, dokladnoscWyniku;
        int y=227;
        string wynik="";
        wynik=(char)y;

        cout<< endl;
        cout<< "MENU GLOWNE"<< endl;
        cout<<"---------------"<<endl;
        cout<<" 1. Liczba " <<wynik  << " (pi) z podana dokladnoscia" <<endl;
        cout<<" 2. Pierwiastek podanego rzedu z liczby "<< wynik << " (pi) "  <<endl;
        cout<<" 3. Wyjscie z programu" <<endl;


        char wybor;
        wybor=getch();
        switch(wybor)
        {
        case '1':
            cout<< endl << "Program wyswietli wartosc liczby "<< wynik << " (pi) " << endl;
            cout<< endl<<"Aby kontynuowac nacisnij enter "<<endl;
            getchar();
            cout<< endl << "Podaj z jaka dokladnoscia chcesz wyswietlic liczbe "<< wynik << " (pi) " << endl;
            cin>> dokladnoscPI;
            cout<<"Aby kontynuowac nacisnij enter "<<endl;
            getchar();
            getchar();
            PI = 2*acos(0.0);
            cout<<setprecision(dokladnoscPI)<<wynik <<" = "<< PI<< endl;
            break;

        case '2':

            cout<< endl << "Program wyswietli wartosc pierwiastka podanego rzedu z liczby "<< wynik << " (pi) " << endl;
            cout<< endl<<"Aby kontynuowac nacisnij enter "<<endl;
            getchar();
            cout<< endl << "Podaj jakiego rzedu ma byc pierwiastek "<< endl;
            cin>> rzad;
            cout<<"Aby kontynuowac nacisnij enter "<<endl;
            getchar();
            getchar();

            cout<< endl << "Podaj z jaka dokladnoscia chcesz wyswietlic wynik "<< endl;
            cin>> dokladnoscWyniku;
            cout<<"Aby kontynuowac nacisnij enter "<<endl;
            getchar();
            getchar();

            Pierwiastek= pow (PI,(1/(rzad)));
            cout <<" Pierwiastek "<< rzad << " rzedu z liczby "<< wynik << " (pi) wynosi: "<<setprecision(dokladnoscWyniku)<<Pierwiastek<<  endl;
            break;

        case '3':
            cout<< endl<< " opuszczasz program"<<endl;
            cout<< endl<< "Nacisnij enter aby kontynuawac"<<endl;
            getchar();
            exit(0);                        // powoduje wyjscie z programu jesli wybierzemy opcje 5
            break;

        default:                            // scenariusz dla wszystkich innych niezdefiniowanych woborów w case (dzieki temu ze wubur jest zmienna typu char jak ktos sie pomyli program korzysta z opcji default)
            cout<< " Nie ma takiej opcji w menu"<<endl;
            cout<< endl<< "Nacisnij enter aby kontynuawac"<<endl;
        }
        getchar();                          // czeka na nacisniecie klawisza
        system("cls");              //czysci konsole
    }
    while(true);

    return 0;
}
