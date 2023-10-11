

#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    int skaicius = 2;
    cout << " iveskite skaiciu: " << endl;
    cin >> skaicius;

    int skaicius2 = 5;
    cout << " iveskite antra skaiciu :" << endl;
    cin >> skaicius2;

    cout << " ar " << skaicius << "daugiau uz " << skaicius2 << " ?" << endl;
    cout << " atsakymas :" << (skaicius > skaicius2) << endl;
    // atsakymas : false

    if (skaicius > skaicius2)
    {
        // cout
        // cin
        // funkcija()
        cout << skaicius << "yra daugiau uz" << skaicius2 << endl;
    }

    if (skaicius < skaicius2)
    {
        cout << " skaicius maziau uz skaiciu2" << endl;
    }

    cout << "cia mes dar kazka parasem" << endl;
    /*  bool arDaugiau;
    int a = 2;
    int b = 3;
    arDaugiau = a > b;

    if (arDaugiau)
    {
        cout << "a yra daugiau uz b" << endl;
    }

    if (!arDaugiau)
    {
        cout << "a yra maziau uz b" << endl;
    }*/

    int a = 5;
    int b = 7;
    int c = 6;

    if (a == 5 && b == 4 && c == 6)
    {
        cout << "a lygus 5 ir b lygus 4" << endl;
    }
    else
    {
        cout << "priesingas atvejis" << endl;
    }
}
