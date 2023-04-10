

#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    //1)figurosplotas: parasyti programa, kuri paklaustu kokios figuros plota reikia apskaiciuoti (status trikampis/kvadratas/staciakampis)
    //ir priklausomai nuo pasirinkto varianto paprasytu ivesti reikalingus duomenis ir apskaiciuotu plota..

    int pasirinkimas = 0;

    cout << "kokios figutos plota reikia apskaiciuoti ?,status trikampis-1, kvadratas-2, staciakampis-3 ;" << endl;
    cin >> pasirinkimas;

    if (pasirinkimas == 1)
    {

        int a = 5;
        int b = 4;
        int c = 8;

        cout << "iveskite a krastines ilgi: " << endl;
        cin >> a;
        cout << "iveskite b krastines ilgi : " << endl;
        cin >> b;
        cout << "iveskite c krastines ilgi : " << endl;
        cin >> c;

        cout << " trikampio plotas yra :" << (a * b) / 2 << endl;
    }

    if (pasirinkimas == 2)
    {
        int d = 8;
        cout << "iveskite kvadrato krastines ilgi : " << endl;
        cin >> d;
        cout << "kvadrato plotas yra :" << (d * d) << endl;
    }

    if (pasirinkimas == 3)
    {
        int e = 9;
        int f = 11;

        cout << " iveskite viena staciakampio krastines ilgi :" << endl;
        cin >> e;
        cout << "iveskite antra staciakampio krastines ilgi : " << endl;
        cin >> f;
        cout << "staciakampio plotas yra :" << (e * f) << endl;
    }
}
