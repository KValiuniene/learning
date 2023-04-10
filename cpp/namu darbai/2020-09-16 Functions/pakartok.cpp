#include <iostream>
#include <vector>
#include <string>

using namespace std;

//8)pakartok: parasyti funkcija "pakartok" kuri ima viena parametra <kazkas> ir atspausdina tokia eilute: <kazkas><kazkas>.
//pvz padavus "123" atspausdina "123123". padavus "asd" atspausdina "asdasd".

void pakartok(string vardas)

{
    cout << vardas << vardas << endl; //2; //4; //6
}

int main()
{
    pakartok("Jonas"); //1
    pakartok("du");    //3
    pakartok("kuku");  //5
}