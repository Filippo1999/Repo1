#include <iostream>
#include "Car.h"
using namespace std;

//Variabili globali
string nome, cognome, marca, modello;
Car ricco;
char scelta;
char menu;
Car etaMacchina;

int contatore() {

	static int C = 0;
	if (scelta == 's' || scelta == 'S') C++;
    return C;

};

void povertà() {
	Car povero(marca, modello);
	cout << "Inserire la marca desiderata: ";
	cin >> marca;
	cout << "Inserire il modello desiderato: ";
	cin >> modello;
	povero.setMarca(marca);
	povero.setModello(modello);
	system("CLS");
	cout << "E' disponibile la seguente auto usata con le caratteristiche richieste:" << endl;
	//riepilogo dati inseriti
	cout << povero
		 << "Il veicolo selezionato ha " << etaMacchina - povero << " anni" << endl;
	cout << " " << endl;
}

void riccanza() {


	cout << " " << endl;

	//inserimento dati

	ricco.acquisto(ricco);
	system("CLS");
	cout << "--------RIEPILOGO--------" << endl;
	//riepilogo dati inseriti
	cout << ricco;
	cout << " " << endl;
}

void conferma() {

	//Conferma più gestione eccezioni
sn:
	try {

		cout << "Confermare? (s/n): ";
		cin >> scelta;

		if ((scelta != 's') && (scelta != 'S') && (scelta != 'n') && (scelta != 'N'))
		{
			//lancia un'eccezione di tipo 'costante stringa'
			throw "Scelta non valida";
		}
	}

	//gestione eccezione che rimanda alla scelta
	catch (const char* messaggio) { cout << messaggio << endl; goto sn; };

	if ((scelta == 's' || scelta == 'S') && menu != 'e' && menu != 'E')
	{
		cout << " " << endl;
		cout << "Inserisca il suo nome: ";
		cin >> nome;
		cout << "Inserisca il suo cognome: ";
		cin >> cognome;
		cout << ""<< endl
		     << "Complimenti " << cognome << " " << nome << " l'auto e' pronta per l'acquisto!" << endl;
		system("pause");
	}

	system("CLS");


}

void main() {

	do {
		cout << "Digitare 'U' per acquistare un'auto usata" << endl
			<< "Digitare un altro tasto per acquistare un'auto nuova" << endl
		    << "Digitare 'E' per uscire" << endl
		    << "" << endl 
		    << "Numero acquisti completati: " << contatore() << endl;
		cin >> menu;
		if (menu == 'U' || menu == 'u')
			povertà();
		else if (menu != 'e' && menu != 'E')
			riccanza();

		conferma();
	} while ((menu != 'e' && menu != 'E') || (scelta != 's' && scelta != 'S'));

}