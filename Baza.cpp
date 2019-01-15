#include "Baza.h"



Baza::Baza()
{
	cout << "£ADOWANIE BAZY" << endl;
}


Baza::~Baza()
{
	cout << "AKTUALIZACJA BAZY" << endl;
}

void Baza::przegladajOferty()
{
	list<Oferta>::iterator itt = oferty_lista.begin();
	for (itt = oferty_lista.begin(); itt != oferty_lista.end(); itt++)
		cout << *itt << endl;
}

bool Baza::dodajUmowe(Umowa u)
{
	umowy_lista.push_back(u);
	return true;
}

bool Baza::dodajOferte(Oferta o)
{

	oferty_lista.push_back(o);
	return true;
}

bool Baza::usunOferte(Oferta o)
{
	return true;
}
