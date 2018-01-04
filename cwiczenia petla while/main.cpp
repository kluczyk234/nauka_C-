#include <iostream>

using namespace std;

int godziny=0, ilosc=1;

int main()
{
    cout << "Program policzy jak w czasie zmienia sie ilosc elementow jezeli co godzine ilosc elementow podwaja sie " << endl;

    while(ilosc<=1000000000)
    {
        godziny++;
        ilosc=ilosc*2;
        cout<<"Dotej pory minelo: "<<godziny<<" godzin, "<<"ilosc elementow wynosi "<<ilosc<<endl;

    }

    return 0;
}
