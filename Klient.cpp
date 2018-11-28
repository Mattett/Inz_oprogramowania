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
}

Umowa Klient::zawrzyjUmowe(int id_oferty )
{
	



	return Umowa(um);
}

void Klient::zmienDane(string name, string surname, string nr_pesel, string adress)
{
	this->imie = name;
	this->nazwisko = surname;
	this->pesel = nr_pesel;
	this->adres_zamieszkania = adress;

}


ostream & operator<<(ostream& str, Klient & o)

{

	str << "ID to: " << o.id << endl << "Imiê: " << o.imie << endl << "Nazwisko:  "
		<< o.nazwisko << endl << "Pesel: " << o.pesel << endl << "Adres zamieszkania:  "
		<< o.adres_zamieszkania << endl << "Mieszkania: " << o.mieszkanie << endl;;


	return str;

}
