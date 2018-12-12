#pragma once
#include "MainHeader.h"
#include "Oferta.h"

class Pracownik
{
protected:
	static int id_pracownika;
	string nazwisko;
	string imie;

public:
	Pracownik();
	bool dodajOferte(double, double, string, Baza &);
	bool usunOferte(int, Baza&);
	bool modyfikujOferte(int, Baza&);
	~Pracownik();
};

