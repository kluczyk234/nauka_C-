#include <iostream>

using namespace std;

int main()
{
    cout << "Program wypisze wszystkie liczby podzielne przez podana liczbe" << endl;
    cout << "Podaj liczbe do ktorej program bedzie wyszukiwac" << endl;
    int granica;
    cin >>granica;
    cout << "Podaj przez jaka liczbe maja byc podzelne wyniki" << endl;
    int dzielnik;
    cin >>dzielnik;
    for (int i=1 ; i<=granica ; i++)
    {
        if (i%dzielnik==0)
        {
            cout << i << endl;
        }
    }
    return 0;
}
