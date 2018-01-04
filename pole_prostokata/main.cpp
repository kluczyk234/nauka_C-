#include <iostream>       // std::cout
#include <string>         // std::string
#include <locale>         // std::locale, std::isdigit
#include <sstream>        // std::stringstream

using namespace std;

int main()
{
    string boka, bokb;
    int pole;
    locale loc;

    cout << "Witam w kalkulatorze pola prostokata" << endl;

    cout << " a___ " << endl;
    cout << "b|___|  " << endl;
    cout << "Prosze podaj dlugosc boku a" << endl;
    cout << "Bok a= ";
    cin>> boka;

    if ((isdigit(boka[0],loc))==false) cout << "Podana wartosc musi byc liczba" << endl;

    else
    {
        cout << "Prosze podaj dlugosc boku b" << endl;
        cout << "Bok b= ";
        cin>> bokb;
        if ((isdigit(bokb[0],loc))==false) cout << "Podana wartosc musi byc liczba" << endl;

        else
        {
            int a, b;
            stringstream(boka)>>a;
            stringstream(bokb)>>b;
            pole=a*b;
            cout << "Pole prostokata wynosi " ;
            cout << pole;
            cout << " jednostek kwadratowych" << endl;
        }


    }


    return 0;
}
