

#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{

    //6)staciakampioperimetras: parasyti programa kuri  paprasyti ivesti 4 krastiniu ilgius (a,b,c,d) ir +++++++++
    //tiktai ir tik tiktais jei is tokiu krastiniu galima nubraizyti staciakampi, tik tokiu atveju, atspausdintu ar to staciakampio perimetras didesnis uz 30. pvz ivedus 2,4,2,4 isveda
    //"galime nubraizyti staciakampi kurio perimetras mazesnis uz 30"
    //(perimetras lygus 12). O ivedus 8,9,8,9 isvesda "galime nubraizyti staciakampi kurio perimetras didesnis uz 30"
    //(nes perimetras lygus 35). o Ivedus 4,5,6,5 isveda "negalime nubraizyti tokio staciakampio"

    //pirma dalis prasideda
    int a = 5;
    int b = 5;
    int c = 5;
    int d = 5;
    cout << " iveskite skaiciu a :" << endl;
    cin >> a;
    cout << "iveskite skaiciu b :" << endl;
    cin >> b;
    cout << "iveskite skaiciu c :" << endl;
    cin >> c;
    cout << "iveskite skaiciu d: " << endl;
    cin >> d;

    //pirma dalis baigiasi

    //antra dalis prasideda

    if (a == c && b == d) //jeigu tai yra staciakampis
    {
        int perimetras = a + b + c + d;                                                      //nebelieciam
        if (perimetras < 30)                                                                 //jeigu perimetras mazesnis uz 30
        {                                                                                    //jeigu tai yra staciakampis IR perimetras mazesnis uz 30
            cout << "galime nubraizyti staciakampi kurio perimetras mazesnis uz 30" << endl; //nebelieciam
        }

        //atspausdintu ar to staciakampio perimetras didesnis uz 30. pvz ivedus 2,4,2,4 isveda
        //"galime nubraizyti staciakampi kurio perimetras mazesnis uz 30"
        //(perimetras lygus 12). O ivedus 8,9,8,9 isvesda "galime nubraizyti staciakampi kurio perimetras didesnis uz 30"
        //(nes perimetras lygus 35). o Ivedus 4,5,6,5 isveda "negalime nubraizyti tokio staciakampio"

        if (perimetras > 30)
        {
            cout << "galime nubraizyti staciakampi kurio perimetras didesnis uz 30" << endl;
        }
    }
    else
    {
        cout << "negalima nubraizyti tokio staciakampio" << endl;
    }
}
