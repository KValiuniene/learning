#include <iostream>
#include <vector>
#include <string>

using namespace std;

int suskaiciuokFaktoriala(int skaicius)
{
    if (skaicius == 1)
    {
        return 1;
    }

    return skaicius * suskaiciuokFaktoriala(skaicius - 1);
}

int padvigubink(int skaicius)
{
    return 2 * skaicius;
}

int main()
{
    int skaicius = 20;
    int atsakymas;
    cout << "iveskite skaiciu: " << endl;
    cin >> skaicius;

    cout << "skaiciu padvigubine 2 kartus gausim: " << padvigubink(padvigubink(skaicius)) << endl;

    atsakymas = suskaiciuokFaktoriala(8);

    cout << "atsakymas yra :" << atsakymas << endl;
}
