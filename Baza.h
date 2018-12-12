#pragma once
#include "MainHeader.h"
#include <list> // "wspomnicie moje slowa"- W.Sacha

class Baza
{
protected:
	list<Oferta> oferty_lista;
	list<Umowa> umowy_lista;

	
public:
	Baza();
	~Baza();

	void przegladajOferty();
	bool zmodyfikujOferte(int);
	bool dodajUmowe(Umowa);
	bool dodajOferte(Oferta);


};

