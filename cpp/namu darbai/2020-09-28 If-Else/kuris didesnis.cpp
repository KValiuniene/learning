
#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    //2) kurisdidesnis: parasyti programa kuri paprasytu ivesti 2 skaicius  ()a ir b) ir pasakytu, ar a daugiau uz b, ar b daugiau uz a, ad jie vienodi.
    // pvz ivedus 3 ir 3 isveda "skaiciao yra vienodi", ivedus 3 if 4 isveda "3 yra maziau uz 4", ivedus 4 ir 3, isveda "4 yra daugiau uz 3".

    int a = 10;
    cout << "iveskite skaiciu: " << endl;
    cin >> a;

    int b = 25;
    cout << "iveskite antra skaiciu :" << endl;
    cin >> b;

    if (a > b)
    {
        cout << a << "yra daugiau uz " << b << endl;
    }

    if (a < b)
    {
        cout << a << " yra maziau uz" << b << endl;
    }

    if (a == b)
    {
        cout << "abu skaiciai yra lygus" << endl;
    }
}   