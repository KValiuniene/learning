#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    // 1) arlygu: parasyti programa kuri paprasytu ivesti 2 skaicius ir pasakytu ar ivesti skaiciai buvo vienodi.
    // pvz ivedus 3 ir 3, isveda "skaiciai yra vienodi", ivedus 3 ir 4, isveda "skaiciai nera vienodi".

    int skaicius = 25;
    cout << "iveskite skaiciu :" << endl;
    cin >> skaicius;

    int skaicius2 = 15;
    cout << "iveskite antra skaiciu :" << endl;
    cin >> skaicius2;

    if (skaicius == skaicius2)
    {
        cout << skaicius << " yra lygus" << skaicius2 << endl;
    }
    else
    {

        cout << skaicius << " nera lygus " << skaicius2 << endl;
    }
}
