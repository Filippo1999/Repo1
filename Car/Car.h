#pragma once
#include<string>
#include<iostream>
using namespace std;

class Car
{
private:
	string _marca;
	int _anno;
	string _modello;
	double _cilindrata;
	string _colore;
	int _cerchi;

public:

	enum colori {bianca, nera, verde, grigia, gialla};
	//costruttori
	Car();
	Car(string marca, string modello);
	Car(string marca, int anno, string modello, double cilindrata, string colore, int cerchi);
	//metodi set
	void setMarca(string marca);
	void setAnno(int anno);
	void setModello(string modello);
	void setCilindrata(double cilindrata);
	void setColore(string colore);
	void setCerchi(int cerchi);
	//metodi get
	string getMarca();
	int getAnno();
	string getModello();
	double getCilindrata();
	string getColore();
	int getCerchi();
	//overload cout e -
	friend ostream& operator<<(ostream& os, Car m);
	int operator-(const Car&m);
	void acquisto(Car&m);
	string color();
};