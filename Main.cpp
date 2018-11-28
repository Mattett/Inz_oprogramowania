#include "MainHeader.h"
#include "Oferta.h"

int Main() {
	Oferta* tab_ofert[100];

	tab_ofert[0] = new Oferta;
	tab_ofert[1] = new Oferta;
	tab_ofert[2] = new Oferta;
	tab_ofert[3] = new Oferta;

	przegladajOferty(*tab_ofert);
	return 0;
}

void przegladajOferty(Oferta* tab_ofert) {
	for (int i = 0; i < 4; i++) {
		cout << tab_ofert[i];
	}
}

Oferta wybierzOferte(int id) {

}