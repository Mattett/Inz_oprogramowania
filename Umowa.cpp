#include "Umowa.h"

unsigned int Umowa::ID_gen = 1;

Umowa::Umowa()
{
	this->ID_umowy = ID_gen;
	ID_gen++;
}

Umowa::Umowa(string warunki)
{
	this->warunki_umowy = warunki;
}

ostream & operator<<(ostream& str, Umowa & u)

{
	str << "ID to: " << u.ID_umowy << endl << "Warunki umowy:  " << u.warunki_umowy << endl;
	return str;
}

Umowa::~Umowa()
{
}
