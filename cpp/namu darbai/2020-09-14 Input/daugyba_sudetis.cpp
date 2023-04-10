#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    int value6 = 12;
    cout << "iveskite skaiciu:" << endl;
    cin >> value6;
    cout << "jusu skaicius:" << value6 << endl;
    int value7 = 5;
    cout << "iveskite antra skaiciu:" << endl;
    cin >> value7;
    cout << "jusu antras skaicius:" << value7 << endl;
    int value8 = 2;
    cout << "iveskite trecia skaiciu: " << endl;
    cin >> value8;
    cout << "jusu trecias skaicius: " << value8 << endl;
    cout << "Suma: " << value6 * value7 + value8 << endl;
}