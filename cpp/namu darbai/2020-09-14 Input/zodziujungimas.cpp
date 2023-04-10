#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    string mytext = "happy";
    cout << "iveskite zodi:" << endl;
    cin >> mytext;
    cout << "jusu zodis:" << mytext << endl;
    string mytext2 = "3000";
    cout << "iveskite antra zodi:" << endl;
    cin >> mytext2;
    cout << "jusu antras zodis:" << mytext2 << endl;
    cout << "Zodis: " << mytext + mytext2 << endl;
}