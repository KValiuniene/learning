#include <iostream>
#include <vector>
#include <string>

using namespace std;

//7)pliusPenkiolika: parasyti funkcija "pliusPenkiolika" kuri ima viena parametra <skaicius> ir atspausdina skaicius+15

void pliusPenkiolika(int skaicius)
{

    cout << skaicius << " + 15 = " << skaicius + 15 << endl; //2 ;//4 ;//6 ;//8
}

int main()

{
    pliusPenkiolika(78);  //1
    pliusPenkiolika(91);  //3
    pliusPenkiolika(100); //5
    pliusPenkiolika(45);  //7
}