#include <iostream>
#include <Windows.h>

using namespace std;

int waga, wzrost;
float BMI;
char znaki[2]={'A', 'a'};



void podanie_wzrostu()
{
    cout<<"Podaj swoj wzrost w (cm): ";
    cin >> wzrost;


        while((wzrost < 40) || (wzrost > 300 ))
             {

        MessageBox( NULL,  "Nieprawidlowy wzrost. Kliknij OK aby sprobowac ponownie", "Wiadomosc", MB_ICONINFORMATION | MB_OK | MB_APPLMODAL);
             cout<< "Podales nieprawidlowy wzrost. Sprobuj ponownie podajac prawidlowy wzrost!"<<endl;
           }


}

void sprawdzenie_czy_niezostal_wpisany_znak()
{


    if(wzrost == znaki[2])
        {
        cout<<"Podaj prawidlowy wzrost! Pamietaj aby nie podawac znakow! "<<endl;
        cin >> wzrost;
        podanie_wzrostu();
        }

}

void podanie_wagi()
{
    cout<<"Podaj swoja wage: "<<endl;
    cin >> waga;

    while((waga < 30) || (waga > 500))
    {
        MessageBox( NULL,  "Nieprawidlowa waga. Kliknij OK aby sprobowac ponownie", "Wiadomoœæ", MB_ICONINFORMATION | MB_OK | MB_APPLMODAL);
        cout << "Podales nieprawidlowa wage. Sprobuj ponownie podajac prawidlowa wage!"<<endl;
        cin >> waga;
    }
}


void dzialanie_BMI()
{
    BMI = waga / (wzrost*wzrost/10000.);
    cout << "Twoje BMI wynosi: "<<endl;
    cout << BMI;

}

void sprawdzanie_poprawnosci_BMI()
{


    if(BMI < 16)
    {
        cout<<endl;
        cout<< "oznacza wyglodzenie. ¯ycie takiej osoby jest zagro¿one!"<<endl;
    }
    if(BMI < 18 && BMI > 15)
    {
        cout<<endl;
        cout << "Masz niedowage! Skorzystaj z bardziej tluszczowej diety." << endl;
    }

    if(BMI > 18 && BMI < 25)
    {
        cout<<endl;
        cout << "Twoje BMI jest idealne!" << endl;
    }

    if(BMI > 25 && BMI < 30)
    {
        cout<<endl;
        cout << "Masz nadwage! Skorzystaj z diety." << endl;
    }

    if(BMI > 30 && BMI < 35)
    {
        cout << "Jestes otyly! Zrzuc pare kilo i bedzie ok." << endl;
    }
}
int main()
{
podanie_wzrostu();
   sprawdzenie_czy_niezostal_wpisany_znak();
   podanie_wagi();

   dzialanie_BMI();

   cout << endl;

   sprawdzanie_poprawnosci_BMI();


    system("PAUSE");
    return 0;
}
