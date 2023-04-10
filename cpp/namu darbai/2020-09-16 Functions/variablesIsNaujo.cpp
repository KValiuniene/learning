#include <iostream>
#include <vector>
#include <string>

using namespace std;

//6)variablesIsNaujo: sioje programoje padaryti 2020-09-11 namu darbus is naujo(!!!!tik nuolaidu dali!!!!), taciau !!!!!!naudojant pries
//tai parasyta nuolaidaDaiktui funkcija!!!!!

void nuolaidaDaiktui(string daiktas, double pradinekaina, double nuolaidaProc)
{
    cout << daiktas << " kainuoja " << pradinekaina << " su " << nuolaidaProc << " % kainuos: " << (pradinekaina * (100 - nuolaidaProc) / 100) << endl; //2 ;//4; //6; //8; //10;
    //12; //14; //16; //18 ;//20
}

void daiktasPabrango(string daiktas1, double pradinekaina2, double pabrangoProc3)
{
    cout << daiktas1 << " kainavo " << pradinekaina2 << " pabrango " << pabrangoProc3 << " %  ir dabar kainuos: " << (pradinekaina2 * (100 + pabrangoProc3) / 100) << endl;
    //2; //4 ;//6 ;//8 ;//10 ;//12; //14; //16; //18 ;//20 ;//22
}

int main()

{
    nuolaidaDaiktui(" Butas", 126541, 5);         //1
    nuolaidaDaiktui(" Sushiai", 12.35, 12);       //3
    nuolaidaDaiktui(" Kepsnys", 4.28, 4);         //5
    nuolaidaDaiktui(" Spinta", 474, 14);          //7
    nuolaidaDaiktui(" Televizorius", 899.99, 23); //9
    nuolaidaDaiktui("Telefonas", 545.99, 11);     //11
    nuolaidaDaiktui("Pakas tuoletinio", 4.28, 6);
    nuolaidaDaiktui(" Automobilis", 35748, 8); //13
    nuolaidaDaiktui(" Knyga", 15.99, 13);      //15
    nuolaidaDaiktui(" Cipsai", 3.78, 22);      //17
    nuolaidaDaiktui(" Alkotesteris", 150, 16); //19

    daiktasPabrango(" Kebabas", 5, 15);               //1
    daiktasPabrango(" Sodybos nuoma parai", 80, 218); //3
    daiktasPabrango(" Rudolfo skanestai", 3.54, 11);  //5
    daiktasPabrango(" jeigu", 15.68, 37);             //7
    daiktasPabrango(" Nezinosi", 1412.87, 22);        //9
    daiktasPabrango(" Kas", 11.57, 8);                //11
    daiktasPabrango("Yra", 23.65, 3);                 //13
    daiktasPabrango(" Konsole", 41.05, 7);            //15
    daiktasPabrango(" Tai", 1058.64, 15);             //17
    daiktasPabrango(" Darysim", 6969.69, 100);        //19
    daiktasPabrango(" Uzpakalis", 99999.999, 69);     //21
}
