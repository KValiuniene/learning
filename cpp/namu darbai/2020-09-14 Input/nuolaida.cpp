#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{

    double value15 = 10;
    cout << "Iveskite kaina:" << endl;
    cin >> value15;
    cout << "pradine kaina yra :" << value15 << endl;

    double nuolaidaProc = 15;
    cout << "iveskite nuolaida:" << endl;
    cin >> nuolaidaProc;
    cout << "atpigo :" << nuolaidaProc << endl;

    cout << "dabartine kaina : " << (value15 * (100 - nuolaidaProc)) / 100 << endl;
}