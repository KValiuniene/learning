#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    int skaicius = 15;
    cout << "iveskite skaiciu :" << endl;
    cin >> skaicius;

    if (skaicius > 30)
    {
        cout << skaicius << " didesnis uz 30" << endl;
    }

    if (!(skaicius > 30))
    {
        cout << skaicius << " nera didesnis uz 30" << endl;
    }
}