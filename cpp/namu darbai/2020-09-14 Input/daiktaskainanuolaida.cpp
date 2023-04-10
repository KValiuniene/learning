#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{

    string daiktas = "kepsnys";
    cout << "Iveskite daikta:" << endl;
    cin >> daiktas;
    cout << "daiktas yra :" << daiktas << endl;

    double pradinekaina = 15;
    cout << "iveskite kaina:" << endl;
    cin >> pradinekaina;
    cout << "kaina yra :" << pradinekaina << endl;

    int nuolaidaProc = 15;
    cout << "iveskite nuolaida:" << endl;
    cin >> nuolaidaProc;
    cout << "nuolaida :" << nuolaidaProc << endl;

    cout << "su nuolaida kainuoja: " << (pradinekaina * (100 - nuolaidaProc)) / 100 << endl;

    cout << daiktas << " kainavo: " << pradinekaina << ". " << daiktas << " su " << nuolaidaProc << "% nuolaida kainuoja : " << (pradinekaina * (100 - nuolaidaProc)) / 100 << endl;
}