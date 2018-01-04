#include <iostream>
#include <stdio.h>
#include <cstdlib> // potrzebna do cls
#include <conio.h> // potrzebna do korzystania z getchar


using namespace std;


char wybor;                         // korzystamy z char aby program sie nie wysypal gdy sie wcisnie litere
int main()
{

    do                    // nieskoñczona petla, na szczêscie jest funckja konczaca program
    {

        float x;
        cout << "podaj liczbe 1: " ;
        cin >> x;
            if(!(x))
        {
            cerr<<"podana wartosc nie jest liczba"<<endl;
            getchar();                          // czeka na nacisniecie klawisza
            getchar();
            std::cin.clear();                   //cin.clear() czyœci flagi b³êdów.


         }
                    //cin.clear() czyœci flagi b³êdów.
                    //cin.sync() czyœci bufor.
                    //cin.ignore() czysci strumien przez u¿ytkownika.

        float y;
        cout << "podaj liczbe 2: ";
        cin >> y;

        if(!(y))
        {
            cerr<<"podana wartosc nie jest liczba"<<endl;
            getchar();                          // czeka na nacisniecie klawisza
            getchar();
            std::cin.clear();                   //cin.clear() czyœci flagi bleow.

        }


        cout<< endl;
        cout<< "MENU GLOWNE"<< endl;
        cout<<"---------------"<<endl;
        cout<<" 1. Dodawanie" <<endl;
        cout<<" 2. Odejmowanie" <<endl;
        cout<<" 3. Mnozenie" <<endl;
        cout<<" 4. Dzielenie" <<endl;
        cout<<" 5. Wyjœcie z programu" <<endl;

        cout<< endl;
        wybor=getch();

        switch(wybor)                   // switch powoduje mo¿liwoœæ wyboru w zale¿nosci od podanych instrukcji case
    {
    case '1':                         // poniewaz wartosc wybor jest rodzaju char, wybierane opceje musza byc w apostrofach '1'
        cout<< "Suma= "<<x+y<<endl; // instrukcja dla realizacji scenariusza 1
        break;                      // break powoduje opuszczenie switcha
    case '2':
        cout<< "Ronica= "<<x-y<<endl;
        break;
    case '3':
        cout<< "Iloczyn= "<<x*y<<endl;
        break;
    case '4':
    {
        if (y==0)
                cout<<"nie dzielimy przez zero"<<endl;
            else cout<< "Iloraz= "<<x/y<<endl;
        }

        break;
        case '5':
            exit(0);                        // powoduje wyjscie z programu jesli wybierzemy opcje 5
            break;

        default:                            // scenariusz dla wszystkich innych niezdefiniowanych woborów w case (dzieki temu ze wubur jest zmienna typu char jak ktos sie pomyli program korzysta z opcji default
            cout<< " Nie ma takiej opcji w menu";

        }

        getchar();                          // czeka na nacisniecie klawisza
        getchar();
        system("cls");                      // czysci ekran konsoli
        std::cin.clear();
        std::cin.sync();


    }while (true);



    return 0;
}
