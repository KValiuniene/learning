#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{

    //2)sudetis: parasyti programa paprasytu ivesti 1 skaiciu(a), tuomet antra(b), o tuomet trecia(c). tuomet atspausdintu ju suma

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

    //3)daugybairsudetis: parasyti programa paprasytu ivesti 1 skaiciu(a), tuomet antra(b), o tuomet trecia(c). tuomet atspausdintu kiek bus a*b+c. pvz ivedziau 10, 4 ir 8, atsakymas bus 10*4+8=48

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

    //4)sudetisirdaugyba: parasyti programa paprasytu ivesti 1 skaiciu(a), tuomet antra(b), o tuomet trecia(c). tuomet atspausdintu kiek bus a*(b+c). pvz ivedziau 10, 4 ir 8, atsakymas bus 10*(4+8)=120
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

    //5)zodziujungimas: parasyti programa kuri paprasytu ivesti pirma zodi, tuomet antra zodi. Tuomet isspausdintu abu zodzius sujungtus kartu. cia kintamuju tipas bus "string" o ne "int" ar "double".
    //Pvz: ivedziau asd ir 123, programa atspausdins asd123

    string mytext = "happy";
    cout << "iveskite zodi:" << endl;
    cin >> mytext;
    cout << "jusu zodis:" << mytext << endl;
    string mytext2 = "3000";
    cout << "iveskite antra zodi:" << endl;
    cin >> mytext2;
    cout << "jusu antras zodis:" << mytext2 << endl;
    cout << "Zodis: " << mytext + mytext2 << endl;

    //6)nuolaida: parasyti programa kuri paprasytu ivesti pradine kaina, tuomet suteikta nuolaida procentais. Programa turi isvesti kaina po nuolaidos.
    //pvz, suvedziau 10 ir 15 (10 pradine kaina ir 15% nuolaida), rezultatas turi gautis 8.5

    double value12 = 10;
    cout << "Iveskite kaina:" << endl;
    cin >> value12;
    cout << "pradine kaina yra :" << value12 << endl;
    double value13 = 15;
    cout << "nuolaida procentais:" << value13 << endl;
    cin >> value13;
    cout << "kaina su nuolaida: " << (value12 * 85) / 100 << endl;

    //7)pabrangimas: parasyti programa kuri paprasytu ivesti pradine kaina, tuomet pabrangima procentais. Programa turi isvesti kaina po pabrangimo. pvz, suvedziau 10 ir 15 (10 pradine kaina ir 15% pabrangimas),
    //rezultatas turi gautis 11.5

    double value14 = 10;
    cout << "Iveskite kaina:" << endl;
    cin >> value14;
    cout << "pradine kaina yra :" << value14 << endl;
    double pabrangoProc = 15;
    cout << "pabrango procentais:" << pabrangoProc << endl;
    cin >> pabrangoProc;
    cout << "pabrango procentais:" << pabrangoProc << endl;
    int pabrangimas = 5;
    cout << "iveskite pabrangima :" << endl;
    cin >> pabrangimas;
    cout << "dabartine kaina : " << (value14 * (100 + pabrangimas)) / 100 << endl;
}