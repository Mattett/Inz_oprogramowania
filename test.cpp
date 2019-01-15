#include "pch.h"
#include <gtest/gtest.h>
#include "../../Inz_oprogramowania-master/Klient.h"
#include "../../Inz_oprogramowania-master/Pracownik.h"


TEST(test_klient, prosty_test) {
	Mieszkanie mieszkanie("Krakow", 500000);
	Klient klient;

  EXPECT_EQ(mieszkanie, klient.dodajMieszkanie());
  EXPECT_TRUE(true);
}

TEST(test_pracownik, prosty_test2) {
	
	Pracownik pracownik;
	Baza baza;
	
	EXPECT_TRUE(pracownik.dodajOferte(200, 25, "wazne", baza));
	EXPECT_TRUE(true);
}