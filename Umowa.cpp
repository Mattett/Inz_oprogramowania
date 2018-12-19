#include "Umowa.h"

unsigned int Umowa::id_gen = 1;

Umowa::Umowa()
{
	id_umowy = id_gen;
	id_gen++;
}

Umowa::Umowa(Oferta warunki)
{
	id_umowy = id_gen;
	id_gen++;
	this->warunki_umowy = warunki;
}

ostream & operator<<(ostream& str, Umowa & u)
{
	str << "ID to: " << u.id_umowy << endl << "Warunki umowy:  " << u.warunki_umowy << endl;
	return str;
}

Umowa::~Umowa()
{
}
