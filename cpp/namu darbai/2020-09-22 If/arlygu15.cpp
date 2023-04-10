#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    int skaicius = 23;
    cout << "iveskite skaiciu :" << endl;
    cin >> skaicius;

    if (skaicius == 15)
    {
        cout << "Skaicius lygus 15" << endl;
    }

    if (skaicius != 15)
    {

        cout << "Skaicius nelygu 15" << endl;
    }
}