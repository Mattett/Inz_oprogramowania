#include "Pracownik.h"

unsigned int Pracownik::id_gen = 1;

Pracownik::Pracownik()
{
	id_pracownika = id_gen;
	id_gen++;
}

bool Pracownik::dodajOferte(double cena, double czas, string opis, Baza &b)
{
	Oferta nowa;
	nowa.koszt_oferty = cena;
	nowa.czas_trwania_oferty = czas;
	nowa.opis_oferty = opis;

	cout << "Oferta " << nowa.id_oferty << " zostala dodana " << endl;
		b.dodajOferte(nowa);
	return true;
}

bool Pracownik::usunOferte(int id_of, Baza &)
{
	b.usunOferte(id_of);
	cout << "Oferta " << id_of << " usunieta" << endl;
	return true;
}


bool Pracownik::modyfikujOferte(int id_of, Baza &b)
{	
	cout << "Oferta "<< id_of << " zmodyfikowana"<<endl;
	return true;
}

Pracownik::~Pracownik()
{
}
