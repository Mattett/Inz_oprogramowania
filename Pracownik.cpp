#include "Pracownik.h"



Pracownik::Pracownik()
{
}

Oferta Pracownik::dodajOferte(double price, double time, string description)
{
	return Oferta::Oferta(price, time, description);
}


Oferta Pracownik::modyfikujOferte()
{
	Oferta::przegladajOferty();
	return Oferta();
}

Pracownik::~Pracownik()
{
}
