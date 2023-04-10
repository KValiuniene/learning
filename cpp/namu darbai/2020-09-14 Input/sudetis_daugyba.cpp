#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    int value9 = 20;
    cout << "iveskite skaiciu: " << endl;
    cin >> value9;
    cout << "jusu skaicius :" << value9 << endl;
    int value10 = 70;
    cout << "iveskite antra skaiciu: " << endl;
    cin >> value10;
    cout << "jusu antras skaicius :" << value10 << endl;
    int value11 = 89;
    cout << "iveskite trecia skaiciu :" << endl;
    cin >> value11;
    cout << "jusu trecias skaicius:" << value11 << endl;
    cout << "Suma :" << value9 * (value10 + value11) << endl;
}