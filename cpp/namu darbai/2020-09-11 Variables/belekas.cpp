#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    double value = 12.50;
    cout << "iveskite skaiciu:" << endl;
    cin >> value;
    cout << "jusu skaicius:" << value << endl;
    int value2 = 5;
    cout << "iveskite antra skaiciu:" << endl;
    cin >> value2;
    cout << "jusu antras skaicius:" << value2 << endl;
    int value3 = 2;
    cout << "iveskite trecia skaiciu: " << endl;
    cin >> value3;
    cout << "jusu trecias skaicius: " << value3 << endl;
    cout << "Suma: " << value + value2 + value3;
}
