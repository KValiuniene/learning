#include <iostream>
#include <vector>
#include <string>

using namespace std;
//2)sandauga: parasyti funkcija "sudaugink" kuri ima 2 double parametrus ir atspausdina sandauga.

void atspausdinkSandauga(double skaicius, double skaicius2)
{
    cout << "Sandauga :" << skaicius * skaicius2 << endl; //2; //4
}
int main()
{
    atspausdinkSandauga(12.22, 15.89); //1
    atspausdinkSandauga(15.89, 25.25); //3
}