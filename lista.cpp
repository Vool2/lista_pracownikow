#include "lista.h"

Lista::Lista(int rozmiar)
{
	this->rozmiar = rozmiar;
	imie.resize(rozmiar);
	nazwisko.resize(rozmiar);
	dzial.resize(rozmiar);
	wiek.resize(rozmiar);
}

void Lista::dodaj_pracownika(std::string im, std::string nazw, std::string dz, int wi)
{
	if (count >= rozmiar)
	{
		rozmiar = rozmiar * 2;
		imie.resize(rozmiar);
		nazwisko.resize(rozmiar);
		dzial.resize(rozmiar);
		wiek.resize(rozmiar);
	}
	imie[count] = im;
	nazwisko[count] = nazw;
	dzial[count] = dz;
	wiek[count] = wi;
	count++;
}

void Lista::usun_pracownika(int n)
{
	imie.erase(imie.begin() + n-1);
	nazwisko.erase(nazwisko.begin() + n-1);
	dzial.erase(dzial.begin() + n-1);
	wiek.erase(wiek.begin() + n-1);

	count--;
}

void Lista::wyswietl()
{
	for (int i = 0; i < count; i++)
	{
		std::cout << i + 1 << ". Pracownik: ";
		std::cout << imie[i] << " " << nazwisko[i];
		std::cout << " wiek: " << wiek[i];
		std::cout << " dzial: " << dzial[i];
		std::cout << std::endl;
	}
}

Lista::~Lista()
{
	imie.clear();
	nazwisko.clear();
	dzial.clear();
	wiek.clear();
}
