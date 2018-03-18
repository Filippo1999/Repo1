#include <iostream>
#include <string>
#include <time.h>
#include "Car.h"
using namespace std;


Car::Car() {
	_modello = " ";
	_anno = 2017;
	_marca = " ";
	_cilindrata = 0;
	_colore = " ";
	_cerchi = 0;
}

Car::Car(string marca, string modello) {
	
	_marca = marca;
	_anno = rand() % 27 + 1991;
	_modello = modello;
	_cilindrata = double(rand() % 9 + 11) / 10;
	_colore = color();
	_cerchi = rand() % 2 + 1;
}

Car::Car(string marca, int anno, string modello, double cilindrata, string colore, int cerchi) {
	_marca = marca;
	_anno = anno;
	_modello = modello;
	_cilindrata = cilindrata;
	_colore = colore;
	_cerchi = cerchi;
}

void Car::setMarca(string marca)
{
	_marca = marca;
}

void Car::setAnno(int anno)
{
	_anno = anno;
}

void Car::setModello(string modello)
{
	_modello = modello;
}

void Car::setCilindrata(double cilindrata)
{
	_cilindrata = cilindrata;
}
void Car::setColore(string colore)
{
	_colore = colore;
}
void Car::setCerchi(int cerchi)
{
	_cerchi = cerchi;
}

string Car::getMarca()
{
	return _marca;
}

int Car::getAnno()
{
	return _anno;
}

string Car::getModello()
{
	return _modello;
}

double Car::getCilindrata()
{
	return _cilindrata;
}
string Car::getColore()
{
	return _colore;
}
int Car::getCerchi() {
	return _cerchi;
}
ostream &operator<<(ostream & os, Car m)
{
	return os << "MARCA: " << m.getMarca() << endl
		<< "MODELLO: " << m.getModello() << endl
		<< "ANNO DI PRODUZIONE: " << m.getAnno() << endl
		<< "CILINDRATA: " << m.getCilindrata() << endl
		<< "COLORE: " << m.getColore() << endl
		<< "CERCHI (1: Standard, 2: In lega): " << m.getCerchi() << endl;
}

int Car::operator-(const Car &m) {
	int A; 	A = _anno - m._anno; 	return A;
}

void Car::acquisto(Car&m)
{
	string A;
	int B;
	cout << "CARATTERISTICHE AUTO DA ACQUISTARE" << endl;
	cout << "Inserire la marca dell'auto: ";
	cin >> A;
	m.setMarca(A);

	cout << "Inserire il modello dell'auto: ";
	cin >> A;
	m.setModello(A);

	cout << "Inserire l'anno di produzione: ";
	cin >> B;
	m.setAnno(B);

	cout << "Inserire la cilindrata: ";
	cin >> B;
	m.setCilindrata(B);

	cout << "Inserisci il colore della verniciatura: ";
	cin >> A;
	m.setColore(A);

	cout << "Come vuole i cerchi?" << endl;
	cout << "1- Standard" << endl;
	cout << "2- In Lega (costo aggiuntivo)" << endl;
	cin >> B;
	m.setCerchi(B);
}

string Car::color() {

	int color;
	color = rand() % 5;
	string colore;

	switch (color)
	{
	case bianca:
		colore = "bianca";
		break;
	case nera:
		colore = "nera";
		break;
	case verde:
		colore = "verde";
		break;
	case grigia:
		colore = "grigia";
		break;
	case gialla:
		colore = "gialla";
		break;
	}

	return colore;
}