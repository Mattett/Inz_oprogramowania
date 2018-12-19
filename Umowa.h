#pragma once
#include "MainHeader.h"

class Umowa
{
protected:
	static unsigned int id_gen;
	unsigned int id_umowy;
	Oferta warunki_umowy;
public:
	Umowa();
	Umowa(Oferta);
	~Umowa();

	friend ostream & operator<<(ostream&, Umowa &);
	friend class Klient;

};

