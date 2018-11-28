#include "Oferta.h"



Oferta::Oferta()
{
	
		++id_oferty;
		koszt_oferty = 0;
		czas_trwania_oferty = 0;
		opis_oferty = "brak";

}

Oferta::Oferta(double price, double time, string description)
{
	++id_oferty;
	koszt_oferty = price;
	czas_trwania_oferty = time;
	opis_oferty = description;
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