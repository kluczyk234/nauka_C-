#include <iostream>

using namespace std;

float wyniki[5];
float suma, srednia;


int main()
{
    cout << "prosze podac 5 liczb:" << endl;

    for (int i=0; i<5; i++)
    {
        cout << "Podaj " << i+1 <<" liczbe ";

        cin >> wyniki[i];
        suma += wyniki[i];

    }
    srednia= suma/5;
    cout<< "srednia z podanych liczb wynosi "<<srednia<<endl;

    return 0;
}
