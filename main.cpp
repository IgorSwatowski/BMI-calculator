#include <iostream>
#include <string>
#include <cmath>
#include <conio.h>
#include <math.h>

using namespace std;

float odpowiedz1, odpowiedz2, BMI;


int zapytaj_o_liczbe_wzrostu(const string &pytanie1, int odIluWzrost, int doIluWzrost)
{
    cout << pytanie1;
    for(;;)
    {
        cin >> odpowiedz1;
        if((odpowiedz1 >= odIluWzrost) and (odpowiedz1 <= doIluWzrost)) break;
        else cout << "Wzrost musi sie miescic w przedziale od " << odIluWzrost << " do " << doIluWzrost;
    }
    return odpowiedz1;
}
int zapytaj_o_liczbe_wagi(const string &pytanie2, int odIluWaga, int doIluWaga)
{
    cout << pytanie2;
    for(;;)
    {
        cin >> odpowiedz2;
        if((odpowiedz2 >= odIluWaga) and (odpowiedz2 <= doIluWaga)) break;
        else cout << "Waga musi sie miescic w przedziale od " << odIluWaga << " do " << doIluWaga;
    }
    return odpowiedz2;
}
 void liczBMI()
    {
        BMI = odpowiedz2 / (odpowiedz1*odpowiedz1/10000.);
        cout << "Twoje BMI jest rowne: " << BMI << endl;
    }

void sprawdzBMI()
{
    if(BMI < 16 ) cout << "Wyglodzenie. Bardzo skrajne. Zacznij jesc!" << endl;
    if(BMI >= 16 && BMI < 16.99) cout << "Twoj organizm jest wychudzony!" << endl;
    if(BMI >= 17 && BMI < 18.49) cout << "Masz niedowage, zacznij jesc"<< endl;
    if(BMI >=18.5 && BMI <24.99) cout << "Twoje BMI jest IDEALNE!"<<endl;
    if(BMI >=25.0 && BMI <29.99) cout << "Masz nadwage! Schudnij troche przyjacielu :D"<<endl;
    if(BMI >=30.0 && BMI <34.99) cout << "Masz I stopien otylosci! Czas sie przebadac"<<endl;
    if(BMI >=35.0 && BMI <39.99) cout << "Masz II stopien otylosci! Przebadaj sie koniecznie i zacznij sie ruszac!"<<endl;
    if(BMI >=40) cout << "III stopien otylosci! Jest to otylosc skrajna. Jak najszybciej udaj sie do lekarza na niezbedne badania i do dietetyka!"<<endl;

}
int main()
{
    zapytaj_o_liczbe_wzrostu("Podaj wzrost: ",120,220);
    zapytaj_o_liczbe_wagi("Podaj wage: ",50,300);
    liczBMI();
    sprawdzBMI();

    return 0;
}
