#include <iostream>
#include <vector>
#include <string>

using namespace std;

//4)nuolaida: parasyti funkcija "atspausdinkNuolaida" kuri ima 2 double parametrus(<pradineKaina> ir <nuolaidaProc>), ir atspausdina tokia eilute: "Pradine kaina: <pradineKaina>.
//Suteikta nuolaida: <nuolaidaProc>%. Kaina po nuolaidos: <!!!!!!suskaiciuota!!!!!!GalutineKaina>."

void atspausdinkNuolaida(double pradineKaina, double nuolaidaProc)
{
    cout << "Pradine kaina : " << pradineKaina << ". Suteikta nuolaida : " << nuolaidaProc << "%. Kaina po nuolaidos:" << (pradineKaina * (100 - nuolaidaProc)) / 100 << endl;
    //2; //4 ; //6
}

int main()
{
    atspausdinkNuolaida(20.50, 10); //1
    atspausdinkNuolaida(50.50, 12);//3
    atspausdinkNuolaida(80.10, 15); //5
}