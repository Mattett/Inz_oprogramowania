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
	Oferta dodajOferte(double, double, string);
	bool usunOferte();
	Oferta modyfikujOferte();
	~Pracownik();
};

