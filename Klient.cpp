#include "Klient.h"


Klient::Klient()
{
	++id;
	imie = "brak";
	nazwisko = "brak";
	pesel = "brak";
	adres_zamieszkania = "brak";
	mieszkanie = NULL;
}

Klient::Klient(string name, string surname, string nr_pesel, string adress)
{
	++id;
	imie = name;
	nazwisko = surname;
	pesel = nr_pesel;
	adres_zamieszkania = adress;
	mieszkanie = NULL;
}


Klient::~Klient()
{
}

void Klient::przegladajOferty()
{
	cout << "Przegladanie bazy danych \n";
}

Umowa Klient::zawrzyjUmowe(Oferta o)
{
	Umowa nowa;
	nowa.warunki_umowy = o;

	cout << "Umowa " << nowa.ID_umowy << " zostala zawarta " << endl;
	return nowa ;
}

void Klient::zmienDane(string name, string surname, string nr_pesel, string adress)
{
	this->imie = name;
	this->nazwisko = surname;
	this->pesel = nr_pesel;
	this->adres_zamieszkania = adress;

}

Mieszkanie Klient::dodajMieszkanie()
{
	string adres;
	double wartosc;
	Mieszkanie nowe;

	cout << "Podaj adres" << endl;
	cin >> adres;

	cout << "Podaj wartosc" << endl;
	cin >> wartosc;
	
	nowe.adres_mieszkania = adres;
	nowe.wartosc_mieszkania = wartosc;
	
	cout << "Mieszkanie " << nowe.ID_mieszkania << " zostalo dodane " << endl;

	return nowe;
}


ostream & operator<<(ostream& str, Klient & o)

{

	str << "ID to: " << o.id << endl << "Imiê: " << o.imie << endl << "Nazwisko:  "
		<< o.nazwisko << endl << "Pesel: " << o.pesel << endl << "Adres zamieszkania:  "
		<< o.adres_zamieszkania << endl << "Mieszkania: " << o.mieszkanie << endl;;


	return str;

}
