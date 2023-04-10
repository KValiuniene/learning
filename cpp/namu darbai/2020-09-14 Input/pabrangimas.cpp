#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    double value14 = 10;
    cout << "Iveskite kaina:" << endl;
    cin >> value14;
    cout << "pradine kaina yra :" << value14 << endl;

    double pabrangoProc = 15;
    cout << "iveskite pabrangima:" << endl;
    cin >> pabrangoProc;
    cout << "pabrangimas :" << pabrangoProc << endl;

    cout << "dabartine kaina : " << (value14 * (100 + pabrangoProc)) / 100 << endl;
}