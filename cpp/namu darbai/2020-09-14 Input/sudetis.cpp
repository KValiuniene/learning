#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    int value3 = 12;
    cout << "iveskite skaiciu:" << endl;
    cin >> value3;
    cout << "jusu skaicius:" << value3 << endl;
    int value4 = 5;
    cout << "iveskite antra skaiciu:" << endl;
    cin >> value4;
    cout << "jusu antras skaicius:" << value4 << endl;
    int value5 = 2;
    cout << "iveskite trecia skaiciu: " << endl;
    cin >> value5;
    cout << "jusu trecias skaicius: " << value5 << endl;
    cout << "Suma: " << value3 + value4 + value5 << endl;
}