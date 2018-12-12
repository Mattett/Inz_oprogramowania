#include "Pracownik.h"



Pracownik::Pracownik()
{
}

bool Pracownik::dodajOferte(double cena, double czas, string opis, Baza &b)
{
	Oferta nowa;
	nowa.koszt_oferty = cena;
	nowa.czas_trwania_oferty = czas;
	nowa.opis_oferty = opis;

	cout << "Oferta " << nowa.ID_oferty << " zostala dodana " << endl;
		b.dodajOferte(nowa);
	return true;
}

bool Pracownik::usunOferte(int, Baza &)
{
	return true;
}


bool Pracownik::modyfikujOferte(int id, Baza &b)
{	

	
	cout << "Oferta zmodyfikowana"<<endl;
	return true;
}

Pracownik::~Pracownik()
{
}
