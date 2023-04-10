
#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    //4)arkvadratas: parasyti programa kuri paprasyti ivesti 4 krastiniu ilgius (a,b,c,d) ir atspausdintu ar is tokiu krastiniu galima nubraizyti kvadrata
    //(visos krastines turi buti vienodo ilgio)

    int a = 5;
    int b = 5;
    int c = 5;
    int d = 5;
    cout << " iveskite skaiciu a :" << endl;
    cin >> a;
    cout << "iveskite skaiciu b :" << endl;
    cin >> b;
    cout << "iveskite skaiciu c :" << endl;
    cin >> c;
    cout << "iveskite skaiciu d: " << endl;
    cin >> d;

    if (a == b && a == c && a == d)
    {
        cout << "galima nubrezti kvadrata" << endl;
    }
    else
    {
        cout << "negalima nubrezti kvadrato" << endl;
    }
}