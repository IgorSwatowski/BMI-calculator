#include <iostream>
#include <string>
#include <windows.h>

using namespace std;


float BMI;

bool czy_w_zakresie(double liczba, double min, double max)
{
  return ((liczba >= min) && (liczba < max));
}

int zapytaj_o_liczbe(const string &nazwa, float min, float max)
{
    cout << nazwa << ": ";
    int odpowiedz;
    for(;;)
    {
        cin >> odpowiedz;
        if( czy_w_zakresie(odpowiedz,min,max) ) break;
        else cout << nazwa << "musi sie miescic w przedziale od " << min << " do " << max;
    }
    return odpowiedz;
}

void liczBMI(float wzrost, float waga)
    {
        BMI = waga / (wzrost*wzrost/10000.);
        cout << "Twoje BMI jest rowne: " << BMI << endl;
    }

void sprawdzBMI()
{
    if( BMI < 16) cout << "Jest to bardzo niepokojace i radze jak naszybciej siegnac do lodowki bo jestes wyglodzony!"<<endl;
    if( czy_w_zakresie(BMI, 16, 17) )    cout << "Twoj organizm jest wychudzony!" << endl;
    if( czy_w_zakresie(BMI, 17, 18.5)) cout << "Masz niedowage, zacznij jesc"<< endl;
    if( czy_w_zakresie(BMI, 18.5, 25)) cout << "Twoje BMI jest IDEALNE!"<<endl;
    if( czy_w_zakresie(BMI, 25, 30))    cout << "Masz nadwage! Schudnij troche przyjacielu :D"<<endl;
    if( czy_w_zakresie(BMI, 30, 35))    cout << "Masz I stopien otylosci! Czas sie przebadac"<<endl;
    if( czy_w_zakresie(BMI, 35, 40))    cout << "Masz II stopien otylosci! Przebadaj sie koniecznie i zacznij sie ruszac!"<<endl;
    if( BMI >= 40 ) cout << "III stopien otylosci! Jest to otylosc skrajna. Jak najszybciej udaj sie do lekarza na niezbedne badania i do dietetyka!"<<endl;
}

void menuWyboru()
{
    cout << "-------------------------------------" << endl;
    cout << "Witaj w programie liczacym BMI!"<<endl;
    cout << "-------------------------------------"<<endl;
    int wybor;
    cout << "1) Czym jest BMI?"<<endl << "2) Wazne informacje"<<endl << "3) Przejdz do kalkulatora"<<endl;
    cin >> wybor;
    system("cls");
    switch(wybor)
    {
        case 1:
            cout << "BMI jest jednym z waznych wskazniow okreslajacych nasz stan fizyczny, ale niestety nie wystarczajacym. Bardzo waznym uzupelnieniem BMI jest wskaznik ilosci tluszczu brzusznego - zbyt duzy moze oznaczac niebezpieczna otylosc brzuszna";
            cout << "i to nawet przy prawidlowym BMI! Ponadto, paradoksalnie, badania naukowe wskazuja, ze osoby z lekka nadwaga zwykle sa zdrowsze i zyja dluzej od osob z tzw. prawidlowa waga.";
            cout << "Pojawiaja sie nawet glosy, ze ustalony arbitralnie przez WHO prog nadwagi (25) jest zbyt niski."<<endl;
        break;
        case 2:
            cout << "Kalkulator BMI obrazuje przyblizona zawartosc tluszczu w organizmie. W przypadku niektorych osob wskaznik BMI moze sugerowac bledne wnioski. ";
            cout << "Osoby aktywne fizycznie, uprawiajacy sport, moga posiadac zawyzona wage zwiazana z tkanka miesniowa a nie z iloscia tluszczu w organizmie.";
            cout << "Ponadto nie zaleca sie stosowania wskaznika BMI do oznaczania wagi ciala dla dzieci do ok. 14 roku zycia oraz dla kobiet w ciazy."<<endl;
        break;
        case 3:
             float wzrost = zapytaj_o_liczbe("Podaj wzrost: ", 120, 220);
             float waga = zapytaj_o_liczbe("Podaj wage: ", 40, 300);
             liczBMI(wzrost, waga);
             sprawdzBMI();
        break;
    }
}

int main()
{
    HANDLE kolor;
    kolor = GetStdHandle( STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(kolor, 10);
    menuWyboru();

    return 0;
}
