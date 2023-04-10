#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    // 1)daugyba: parasyti programa, kuri paprasytu ivesti 1 skaiciu, tuomet antra skaiciu, ir tuomet atspausdintu ju sandauga

    int value = 125;
    cout << "iveskite skaiciu:" << endl;
    cin >> value;
    cout << "jusu skaicius:" << value << endl;
    int value2 = 2;
    cout << "iveskite antra skaiciu:" << endl;
    cin >> value2;
    cout << "jusu antras skaicius:" << value2 << endl;
    cout << "Suma: " << value * value2 << endl;
}