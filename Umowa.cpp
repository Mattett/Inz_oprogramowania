#include "Umowa.h"


Umowa::Umowa()
{
	++ID_umowy;
	this->warunki_umowy;
}

Umowa::Umowa(Oferta warunki)
{
	++ID_umowy;
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
