#include <iostream>
#include <string>

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

int main()
{
     float wzrost = zapytaj_o_liczbe("Podaj wzrost: ", 120, 220);
     float waga = zapytaj_o_liczbe("Podaj wage: ", 40, 300);
     liczBMI(wzrost, waga);
     sprawdzBMI();

    return 0;
}
