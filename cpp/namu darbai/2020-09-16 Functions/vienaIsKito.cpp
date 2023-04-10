#include <iostream>
#include <vector>
#include <string>
using namespace std;
void pasisveikinkSu(string vardas)
{
    cout << "labas, " << vardas << "!" << endl;//3; //8 ;13
}
void tavoskaicius(double skaicius5)
{
    cout << "Tavo skaicius yra: " << skaicius5 << endl;//5; //10 ;15
}

void vienasIsKito(string vardas, double skaicius5)
{
    pasisveikinkSu(vardas);//2; //7; 12
    tavoskaicius(skaicius5);//4 ;//9 ;14
}

int main()
{
    vienasIsKito(" Rudolfas", 4);  //1
    vienasIsKito(" Jonas", 30);    //6
    vienasIsKito(" Kristina", 29);  //11
}

/*
 10)vienaIsKito: jau turime apsirase funkcijas "pasisveikinkSu" bei "tavoSkaicius". parasyti nauja funkcija "vienaIsKito", !!!taciau!!! sioje funkcijoje galima !!!
TIK!!! kviesti pries tai minetas funkcijas. padaryti taip, kad "vienaIsKito" ivykdytu 3) (vardasSkaicius) uzduoti.
*/
