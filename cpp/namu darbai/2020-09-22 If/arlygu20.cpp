#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    int skaicius = 5;
    cout << "iveskite skaiciu :" << endl;
    cin >> skaicius;

    if (skaicius == 20)
    {

        cout << skaicius << " lygus 20" << endl;
    }

    if (skaicius != 20)
    {
        cout << skaicius << " nelygus 20" << endl;
    }
}
