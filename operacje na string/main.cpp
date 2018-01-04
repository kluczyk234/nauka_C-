#include <iostream>
#include <cstdio>
#include <stdio.h>
#include <string> // potrzebna do operacji na stringach
#include <algorithm> // potrzebna do zmiany wielkosci liter
#include <cstdlib> // potrzebna do cls
#include <conio.h> // potrzebna do korzystania z getchar

using namespace std;

int main()
{
    do
    {
        string imie, wyraz, ciagznakow, ciagznakowDoModyfikacji, fragmentCiagu, NowyfragmentCiagu, krotkiCiag, CiagZDodatkiem;
        int dlugoscImienia, dlugoscWyrazu, dlugoscCiagu, dlugoscFragmentudoUsuniecia;
        size_t pozycja, pozycja2;

        cout<< endl;
        cout<< "MENU GLOWNE"<< endl;
        cout<<"---------------"<<endl;
        cout<<" 1. Przewidywanie plci na podstawie imienia" <<endl;
        cout<<" 2. Zamiana kolejnosci liter wyrazu" <<endl;
        cout<<" 3. Zamiana wielkosci liter wyrazu" <<endl;
        cout<<" 4. Zmiana wybranego elementu w stringu" <<endl;
        cout<<" 5. Wyjscie z programu" <<endl;

        char wybor;
        wybor=getch();
        switch(wybor)
        {
        case '1':
            cout << "Podaj Polskie imie: " << endl;
            //cin.ignore();
            getline(cin, imie);

            //sprawdzamy dlugosc podanego wyrazu
            dlugoscImienia = imie.length();

            //petla sprawdzajaca jaka jest ostatnia litera imienia/wyrazu
            if(imie[dlugoscImienia-1]=='a')//ostatnia litere zapisujemy w apostrofach bo chcemy sprawdzic znak (w cudzyslowach bylby wyraz ze znakiem NULL
                cout<<"To imie wyglada na kobiece"<<endl;
            else cout<<"To imie wyglada na meskie"<<endl;

            cout<< endl<< "Nacisnij enter aby kontynuawac"<<endl;
            break;

        case '2':
            cout<< endl << "Podaj wyraz lub ciag znakow: " << endl;
            //cin.ignore();
            getline(cin, wyraz);
            dlugoscWyrazu = wyraz.length();
            cout<<endl << "Wyraz ze znakami w odwroconej kolejnosci: " ;

            for(int i=dlugoscWyrazu-1; i>=0; i--)
            {
                cout<< wyraz[i];
            }
            cout<< endl<< endl<< "Nacisnij enter aby kontynuawac"<<endl;
            break;

        case '3':
            cout<< endl << "Podaj ciag znakow w ktorym zostanie zmieniona wielkosc liter: " << endl;
            //cin.ignore();
            //cin>>ciagznakow;
            getline(cin, ciagznakow);

            cout<< endl << "Ponizej ciag o zmienionej wielkosci liter: " << endl;

            char znak;
            dlugoscCiagu = ciagznakow.length(); //podaje dlugosc stringa
            //cout<< dlugoscCiagu<< endl;
            for(int i=0; i<=dlugoscCiagu; i++) //sprawdza kazdy znak
            {
                znak=ciagznakow[i];
                if(islower(znak))       //znajduje male litery
                {
                    znak=toupper(znak); // zamienia male litery na duze
                    cout<<znak;
                }
                else if (isupper(znak)) //znajduje duze litery
                {
                    znak=tolower(znak); //zamienia duze litery na male
                    cout<<znak;
                }
                else if  (!(isalpha(znak))) //znajduje inne znaki nie bedace literami
                {
                    cout<<znak;
                }
            }
            cout<<endl;
            cout<< endl<< "Nacisnij enter  aby kontynuawac"<<endl;
            getchar();
            break;

        case '4':
            cout<<endl << "Podaj ciag znakow ktory chcesz modyfikowac: " << endl;
            getline(cin, ciagznakowDoModyfikacji);

            cout<<endl << "Podaj element ktory chcesz wyrzucic: " << endl;
            getline(cin, fragmentCiagu);
            dlugoscFragmentudoUsuniecia = fragmentCiagu.length();
            pozycja = ciagznakowDoModyfikacji.find(fragmentCiagu);      //podaje pozycje wybranego ciagu znakow w innym stringu

            if (pozycja!=string::npos)
            {
                //cout<<endl<<"Fragment ktory chcesz wyrzucic znaleziono w podanycm ciagu znakow"<<endl;
                cout<<endl << "Podaj element ktory chcesz wstawic: " << endl;
                getline(cin, NowyfragmentCiagu);
                pozycja2=NowyfragmentCiagu.find(fragmentCiagu);         //podaje pozycje wybranego ciagu znakow w innym stringu

                if (pozycja2!=string::npos)
                {
                    cout<<endl<<"UWAGA!!"<<endl<<"Fragment ktory chcesz wyrzucic zawiera sie we fragmencie ktory chcesz wstawic" <<endl;
                }
                else
                {
                    while(pozycja!=string::npos)
                    {
                        //krotkiCiag=ciagznakowDoModyfikacji.erase(pozycja,dlugoscFragmentudoUsuniecia);
                        //CiagZDodatkiem=krotkiCiag.insert(pozycja,NowyfragmentCiagu);
                        CiagZDodatkiem=ciagznakowDoModyfikacji.replace(pozycja,dlugoscFragmentudoUsuniecia,NowyfragmentCiagu); //zamienia jeden string na inny w wybranej pozycji
                        pozycja = CiagZDodatkiem.find(fragmentCiagu);
                    }
                    cout<<endl<<"Zastapiono fragment ktory chciales wyrzucic elementem ktory chciales wstawic"<<endl;
                    cout<<endl<<"Twoj nowy ciag znakow wyglada nastepujaco: "<<endl<<CiagZDodatkiem<< endl;
                }
            }
            else cout<<"Wpisany element nie znajduje sie w podanym ciagu znakow"<<endl;

            getchar();
            cout<< endl<< "Nacisnij enter aby kontynuawac"<<endl;
            break;

        case '5':
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
