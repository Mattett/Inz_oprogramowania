#include "Oferta.h"

unsigned int Oferta::id_gen = 1;

Oferta::Oferta()
{
	this->id_oferty = id_gen;
	id_gen++;
	koszt_oferty = 0;
	czas_trwania_oferty = 0;
	opis_oferty = "brak";

}

Oferta::Oferta(double cena, double czas, string opis)
{
	this->id_oferty = id_gen;
	id_gen++;
	koszt_oferty = cena;
	czas_trwania_oferty = czas;
	opis_oferty = opis;
}

Oferta::~Oferta()
{
}


ostream & operator<<(ostream& str, Oferta & o)

{
	str << "ID to: " <<o.id_oferty << endl << "Koszt oferty:  " << o.koszt_oferty << endl << "Czas trwania oferty:  "
		<< o.czas_trwania_oferty << endl << "Opis oferty: " << o.opis_oferty << endl;
	return str;

}