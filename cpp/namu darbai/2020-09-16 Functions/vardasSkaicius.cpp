#include <iostream>
#include <vector>
#include <string>

using namespace std;

//3)vardasSkaicius: parasyti funkcija "vardasSkaicius" kuri ima 2 parametrus (viena string ir viena int, <vardas> ir <skaicius>),
//ir atspausdina tokia eilute: "Labas, <vardas>! tavo skaicius yra: <skaicius>."

void vardasSkaicius(string vardas, int skaicius)
{
    cout << " labas" << vardas << " tavo skaicius yra :" << skaicius << endl; //2;//4 ;//6
}

int main()

{
    vardasSkaicius(" Jonas", 30);    //1
    vardasSkaicius(" Kristina", 29); //3
    vardasSkaicius(" Rudolfas", 4);  //5
}