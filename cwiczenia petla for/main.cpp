#include <iostream>
#include <windows.h>
#include <cstdlib>

using namespace std;

int main()
{
    cout << "Rozpoczynamy odliczanie" << endl;
    for (int i=15; i>=0;i--)
    {
        Sleep(1000);
        system("cls");
        cout<<i<<endl;

    }
    cout << "koniec odliczania" << endl;

    return 0;
}
