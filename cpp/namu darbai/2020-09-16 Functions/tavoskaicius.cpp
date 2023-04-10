#include <iostream>
#include <vector>
#include <string>

using namespace std;

//1)tavoSkaicius: parasyti funkcija "tavoSkaicius" kuri ima viena double parametra <skaicius> ir atspausdina tokia eilute: "tavo skaicius yra: <skaicius>"

void tavoskaicius(double skaicius5)
{
    cout << "Tavo skaicius yra: " << skaicius5 << endl; //2; //4
}

int main()
{
    tavoskaicius(25.88); //1
    tavoskaicius(15.89); //3
}
