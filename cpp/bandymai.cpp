#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    int penki = 5;
    cout << "iveskite pirma skaiciu : " << endl;
    cin >> penki;
    cout << "iveskite antra skaiciu :" << endl;
    int trys = 3;
    cin >> trys;
    cout << penki * trys;
}