#include <iostream>
#include <cstdlib>
#include <time.h>
#include <windows.h>


using namespace std;

int liczba;

int main()
{
    cout << "za chwile zostanie wylosowane 6 liczb z zakresu od 1 do 49" << endl;
    Sleep(1000);
    cout<<endl;

     srand(time(NULL));
     for (int i=1; i<=6; i++)
     {
         liczba= rand()%49+1;
         Sleep(1000);
         cout<<liczba<<"\a"<<endl;

     }



    return 0;
}
