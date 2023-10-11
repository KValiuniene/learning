#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    // 5)arstaciakampis: parasyti programa kuri paprasytu ivesti 4 krastiniu ilgius
    //(a,b,c,d) ir atspausdintu ar is tokiu krastiniu galima nubraizyti STACIAKAMPI (priesingos krastines turi buti vienodo ilgio)

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

    if (a == c && b == d)
    {
        cout << "galima nubraizyti staciakampi" << endl;
    }
    else
    {
        cout << "negalima nubraizyti staciakampio" << endl;
    }
}