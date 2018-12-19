#include "Baza.h"



Baza::Baza()
{

}


Baza::~Baza()
{
}

void Baza::przegladajOferty()
{
	cout << "<Lista ofert>" << endl;
}

bool Baza::zmodyfikujOferte(int id_of)
{
	cout << "<modyfikacja oferty o id " << id_of << endl;
	return false;
}

bool Baza::dodajUmowe(Umowa)
{
	cout << "<dodawanie umowy>" << endl;
	return false;
}

bool Baza::dodajOferte(Oferta)
{
	cout << "<dodawanie oferty>" << endl;
	return false;
}

bool Baza::usunOferte(int id_of)
{
	cout << "Baza: usunieto oferte " << id_of << endl;
	return false;
}
