#pragma once
#include "MainHeader.h"

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
	Umowa zawrzyjUmowe(Oferta);
	void zmienDane(string, string, string, string);
	Mieszkanie dodajMieszkanie();

	friend ostream & operator<<(ostream&, Klient &);
	
	
};

