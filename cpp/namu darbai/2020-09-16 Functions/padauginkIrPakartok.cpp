#include <iostream>
#include <vector>
#include <string>

using namespace std;

//9)padauginkIrPakartok: parasyti funkcija "padauginkIrPakartok" kuri ima viena parametra <kazkas>, ji padaugina is 2 ir tuomet atspausdina rezultata 2 kartus.
//pvz padavus "123" atspausdina "246246".

void padauginkIrPakartok(int skaicius)

{

    cout << skaicius * 2 << skaicius * 2 << endl; //2 ; //4; //6 ;//8
}

int main()
{
    padauginkIrPakartok(25);  //1
    padauginkIrPakartok(100); //3
    padauginkIrPakartok(5);   //5
    padauginkIrPakartok(33);  //7
}