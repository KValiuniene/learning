#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    {
        cout << "dabar atspausdinsiu skaicius nuo 10 iki 20" << endl;
    }

    // for (<ciklo inicializacija> ; <salyga kada kartoti> ; <veiksmas po iteracijos>)
    for (int j = 1; j <= 100; j++)
    {
        for (int i = 1; i <= 5; i++)
        {
            cout << i << " ";
        }

        cout << endl;
    }

    for (int i = 1; i <= 5; i++)
    {

        cout << i << " ";
    }

    cout << endl;
    for (int i = 1; i <= 5; i++)
    {

        cout << i << " ";
    }

    cout << endl
         << "pabaiga." << endl;

    for (int i = 2; i <= 3; i++)
    {
        cout << "mokomes" << endl;
    }
}