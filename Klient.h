#pragma once
#include "MainHeader.h"
#include "Mieszkanie.h"
#include "Umowa.h"
class Klient
{
protected:
	static int id;
	string imie;
	string nazwisko;
	string pesel;
	string adres_zamieszkania;
	Mieszkanie *mieszkanie;
public:

	Klient();
	Klient(string, string, string, string);
	~Klient();
	void przegladajOferty();
	Umowa zawrzyjUmowe(int);
	void zmienDane(string, string, string, string);
	Mieszkanie dodajMieszkanie();

	friend ostream & operator<<(ostream&, Klient &);
};

