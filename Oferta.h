#pragma once
#include "MainHeader.h"



class Oferta
{
protected:
	static int id_oferty;
	double koszt_oferty;
	double czas_trwania_oferty;
	string opis_oferty;

public:
	Oferta();
	Oferta(double, double, string);
	~Oferta();

	friend ostream & operator<<(ostream&, Oferta &);

};

