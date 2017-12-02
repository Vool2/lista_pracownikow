#pragma once
#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>

class Lista
{
	std::vector<std::string> imie;
	std::vector<std::string> nazwisko;
	std::vector<std::string> dzial;
	std::vector<int> wiek;
	int rozmiar;
	int count = 0;
public:
	Lista(int rozmiar = 5);
	void dodaj_pracownika(std::string im, std::string nazw, std::string dz, int wi);
	void usun_pracownika(int n);
	void wyswietl();
	~Lista();

};
