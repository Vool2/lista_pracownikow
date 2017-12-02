#include "lista.h"



int main()
{
	Lista IT;

	IT.dodaj_pracownika("Jakub", "Wnek", "programista", 25);
	IT.dodaj_pracownika("Jan", "Barucha", "programista", 26);
	IT.dodaj_pracownika("Natalia", "Siwiec", "lekarka", 23);
	IT.dodaj_pracownika("Gutek", "Pacula", "tester", 25);
	IT.dodaj_pracownika("Filip", "Wolanski", "sprzedawca", 25);
	IT.dodaj_pracownika("Mieszko", "Grzeda", "logistyk", 25);
	IT.wyswietl();
	std::cout << std::endl;
	IT.usun_pracownika(2);
	IT.wyswietl();

	system("pause");
	
	return 0;
}