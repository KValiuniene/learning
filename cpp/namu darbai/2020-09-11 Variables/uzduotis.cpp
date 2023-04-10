#include <iostream>
#include <vector>
#include <string>

using namespace std;

double apskaicioukkaina(double pradinekaina, int galutineKainaProcentais)
{
    return pradinekaina * galutineKainaProcentais / 100;
}

void atspausdinknuolaida(string daiktopavadinimas, double kaina, int nuolaidaprocentais)
{
    cout << daiktopavadinimas << " kainuoja: " << kaina << ". Su  " << nuolaidaprocentais << "% nuolaida kainuos:" << apskaicioukkaina(kaina, 100 - nuolaidaprocentais) << endl;
}

void atspausdinkPabrangima(string daiktopavadinimas, double kaina, int pabrangimasProcentais)
{
    cout << daiktopavadinimas << " kainuoja: " << kaina << ". Su " << pabrangimasProcentais << "% pabrangimu kainuos: " << apskaicioukkaina(kaina, 100 + pabrangimasProcentais) << endl;
}

int main()
{
    int butokaina = 126541;
    cout << "Butas kainuoja: " << butokaina << ". Su 5 procentu nuolaida butas kainuos :" << butokaina * 95 / 100 << endl;

    double sushiukaina = 12.35;
    cout << "Sushiai kainuoja: " << sushiukaina << ". Su 12% nuolaida sushiai kainuos: " << sushiukaina * 88 / 100 << endl;

    double kepsniokaina = 4.28;
    cout << "Kepsnys kainuoja: " << kepsniokaina << ". Su 4% nuolaida kepsnys kainuos: " << kepsniokaina * 96 / 100 << endl;

    double kebabokaina = 5;
    cout << "Kebabas kainavo: " << kebabokaina << ". Kebabas pabrango 15% ir dabar kainuoja: " << kebabokaina * 115 / 100 << "." << endl;

    int sodyboskaina = 80;
    cout << "Sodybos nuoma parai kainavo: " << sodyboskaina << ". Sodyba pabrango 218% ir dabar kainuoja: " << sodyboskaina * 318.0 / 100 << "." << endl;

    double skanestukaina = 3.54;
    cout << "Rudolfo skanestai kainavo: " << skanestukaina << ". Bet pabrango 11% ir dabar kainuoja: " << skanestukaina * 111 / 100 << "." << endl;

    atspausdinknuolaida("televizorius", 899.99, 23);
    atspausdinknuolaida("telefonas", 545.99, 11);
    atspausdinknuolaida("pakas tualetinio", 4.28, 6);
    atspausdinknuolaida("automobilis", 35748, 8);
    atspausdinkPabrangima("kebabas", 5, 15);
    atspausdinkPabrangima("sodybos nuoma parai", 88, 218);
    atspausdinkPabrangima("jeigu", 15.68, 37);
    atspausdinkPabrangima("nezinosi", 1412.87, 22);
    atspausdinkPabrangima("kas", 11.57, 8);
    atspausdinkPabrangima("konsole", 41.05, 7);
    // kviesiu cia

    // parasyti funkcija "atspausdinkPabrangima"(arba darysim uzpakali)
    // parasyti funkcija "apskaiciuokkaina"
    // panaudoti "apskaiciuokKaina" funkcija is "atspausdinknuolaida" ir "atspausdinkPabrangima"
}

// cia

// implementacija

// kvietimas