#include <iostream>
#include <vector>
#include <string>

using namespace std;

// 5)nuolaidaDaiktui: parasyti funkcija "nuolaidaDaiktui" kuri ima 3 parametrus (viena string ir 2 double, <daiktas>, <pradineKaina> ir <nuolaidaProc>), ir
//  atspausdina tokia eilute: "<daiktas> kainuoja <pradineKaina>, su <nuolaidaProc>% nuolaida kainuos: <!!!!!!suskaiciuota!!!!!!GalutineKaina>"
void nuolaidaDaiktui123(string daiktas, double pradinekaina, double nuolaidaProc)
{
    cout << "chachacha";
}

void nuolaidaDaiktui(string daiktas, double pradinekaina, double nuolaidaProc)
{
    cout << daiktas << " kainuoja " << pradinekaina << " su " << nuolaidaProc << " % kainuos: " << (pradinekaina * (100 - nuolaidaProc) / 100) << endl; // 2 ;//4
}

int main()

{
    nuolaidaDaiktui("sokoladas", 15.25, 10);    // 1
    nuolaidaDaiktui("guminukai", 12.25, 10);    // 3
    nuolaidaDaiktui123("sokoladas", 15.25, 10); // 1
    nuolaidaDaiktui("sokoladas", 15.25, 10);    // 1
}