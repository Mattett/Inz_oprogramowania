#include "Umowa.h"

unsigned int Umowa::id_gen = 1;

Umowa::Umowa()
{
	++id_umowy;
	this->warunki_umowy;
	this->mieszkanie;
}

Umowa::Umowa(Oferta warunki,Mieszkanie m)
{
	++id_umowy;
	this->warunki_umowy = warunki;
	this->mieszkanie = m;
}

ostream & operator<<(ostream& str, Umowa & u)

{
	str << "ID to: " << u.id_umowy << endl << "Warunki umowy:  " << u.warunki_umowy << endl<<"Mieszkanie:  " << endl;
	return str;
}

Umowa::~Umowa()
{
}
