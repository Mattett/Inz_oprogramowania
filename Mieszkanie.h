#pragma once
#include "MainHeader.h"

class Mieszkanie
{
protected:
	static unsigned int id_gen;
	unsigned int id_mieszkania;
	string adres_mieszkania;
	double wartosc_mieszkania;
public:
	Mieszkanie();
	~Mieszkanie();
	Mieszkanie(string adres, double wartosc);
	void zmienDane(string new_adres, double new_wartosc);
	
	friend class Klient;
};

