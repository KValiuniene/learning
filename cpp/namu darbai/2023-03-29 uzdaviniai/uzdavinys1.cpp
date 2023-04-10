#include <iostream>
#include <vector>
#include <string>

using namespace std;

int suskaiciuokFaktoriala(int skaicius)
{

    return skaicius * suskaiciuokFaktoriala(skaicius - 1);
}

int main()
{
    int skaicius = 20;
    int atsakymas;
    cout << "iveskite skaiciu: " << endl;
    cin >> skaicius;
    atsakymas = suskaiciuokFaktoriala(5);

    cout << "atsakymas yra :" << atsakymas << endl;
}
