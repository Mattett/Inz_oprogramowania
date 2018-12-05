#pragma once
#include "MainHeader.h"

class Umowa
{
protected:
	static int ID_umowy;
	Oferta warunki_umowy;
public:
	Umowa();
	Umowa(Oferta);
	~Umowa();

	friend ostream & operator<<(ostream&, Umowa &);
	friend class Klient;

};

