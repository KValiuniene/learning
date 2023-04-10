

#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    //3) artrikampis:
    //!!!!!!PRASIDEDA UZDAVINIO AISKINIMAS !!!!!
    // Trikampi kurio krastines pazymesime a,
    // b ir c galime nubraizyti tik tuomet, kai priesingu krastiniu ilgiu suma didesne uz esama krastine.t.y.neimanoma nubraizyti trikampio kurio krastiniu ilgiai butu 1, 3 ir 1
    //(pabandyk nusipaisyti sasiuvinyje naudojant liniuote).taip pat neis nubraizyti ir 10, 4 ir 4 arba 3, 7 ir 15.
    //!!!!!BAIGIASI UZDAVINIO AISKINIMAS !!!!!!!!!!TOLIAU EINA PATI UZDUOTIS !!!!!!
    //parasyti tokia programa,
    //kuri paprasytu ivesti trikampio krastiniu ilgius ir atspausdintu ar imanoma toki trikampi nubraizyti ar ne.pvz : ivedus 2, 4 ir 5 isveda "trikampi nubraizyti imanoma"
    //(nes 2 + 4 > 5 bei 4 + 5 > 2 bei 2 + 5 > 4).o tarkim ivedus 4, 2 ir 1 atspausdintu

    int a = 5;
    int b = 6;
    int c = 3;
    cout << "iveskite skaiciu a: " << endl;
    cin >> a;
    cout << "iveskite skaiciu b :" << endl;
    cin >> b;
    cout << "iveskite skaiciu c : " << endl;
    cin >> c;
    if (a + b > c && b + c > a && a + c > b)
    {
        cout << "Nubraizyti trikampi imanoma" << endl;
    }

    else
    {
        cout << "nubraizyti trikampio neimanoma" << endl;
    }
}
