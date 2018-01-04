#include <iostream>
#include <cstdlib>
#include <time.h>
#include <stdio.h>

using namespace std;

int liczba, strzal, ilosc_prob=0;

int main()
{
    cout << "Zostala wylosowana liczba z zakresu 1-100" << endl;

    srand(time(NULL));
    liczba= rand()%100+1;

    while(strzal!=liczba)
    {
        ilosc_prob++;

        cout<<"Postaraj sie zgadnac wylosowana liczbe (to twoja "<<ilosc_prob<<" proba):"<<endl;
        cin>>strzal;

        if(strzal==liczba)
        {
            cout<<"zgadles wylosowana liczbe w "<<ilosc_prob<<" probie"<<endl;

        }
        else if (strzal>liczba)
        {
            cout<<"podales za duza liczbe"<<endl;

        }
        else if (strzal<liczba)
        {
            cout<<"podales za mala liczbe"<<endl;
        }

    }
    getchar();getchar();
    return 0;
}
