#include <iostream>

using namespace std;

string imie;

int ile_razy;

int main()
{
    cout << "Podaj wyraz ktory chcesz powtazac" << endl;
    cin >> imie ;
    cout << "Podaj ile razy chcesz wypisac wyraz" << endl;
    cin>> ile_razy;
    for (int i=1; i<=ile_razy; i++)
    {
        cout <<i<< ". "<<imie<<endl;
    }
    return 0;
}
