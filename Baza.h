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
	bool dodajUmowe(Umowa);
	bool dodajOferte(Oferta);
	bool usunOferte(Oferta);


};

