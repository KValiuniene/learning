

#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    /*2)parasyti programa kuri paprasytu ivesti staciakampio krastiniu ilgius ir paklaustu ar apskaiciuoti plota, ar perimetra. tuomet apskaiciuotu tai ko paprasom.
pvz:

iveskite pirmos staciakampio krastines ilgi:
4
iveskite antros staciakampio krastines ilgi:
7
apskaiciuoti plota ar perimetra?(1-plotas, 2-perimetras):
2
staciakampio perimetras: 22
*/

    int a = 5; //kintamojo aprasymas
    int b = 10;

    cout << "iveskite a krastines ilgi: " << endl;
    cin >> a;
    cout << "iveskite b krastines ilgi: " << endl;
    cin >> b;

    int pasirinkimas = 0;

    cout << "apskaiciuoti staciakampio perimetra ar plota ?,plotas-1, perimetras-2 ;" << endl;
    cin >> pasirinkimas;

    if (pasirinkimas == 1)
    {
        cout << "plotas yra :" << a * b << endl;
    }

    if (pasirinkimas == 2)

    {

        cout << "perimetras yra :" << (a + b) * 2 << endl;
    }
    if (pasirinkimas != 2 && pasirinkimas != 1)
    {

        cout << "nera tokio pasirinkimo,eik sikt,durniau " << endl;
    }
}
