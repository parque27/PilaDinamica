// ENTRADA:
// SORTIDA: 

#include <iostream>
#include "PilaFitxes.h"
using namespace std;

// ACCIONS I FUNCIONS
int introduir_opcio()
{
	// Pre: 1 <= opcio <= 6
	// Post: retorna l'opcio seleccionada
	cout << "Introdueix opcio: ";
	int opcio; cin >> opcio;
	while (opcio < 1 or opcio > 6)
	{
		cout << "Introdueix opcio: ";
		cin >> opcio;
	}
	return opcio;
}
void empila(PilaFitxes& p)
{
	// Pre: --;
	// Post: llegeix una fitxa i empila la fitxa llegida a p
	Fitxa f; f.llegeix();
	p.empila(f);
}
void desempila(PilaFitxes& p)
{
	// Pre: --
	// Post: si la pila es buida mostra un missatge, altrament desempila una fitxa
	if (p.es_buida()) cout << "NO HI HA CAP FITXA" << endl;
	else p.desempila();
}
void mostrar_cim(PilaFitxes& p)
{
	// Pre: --
	// Post: Si la pila es buida mostra un missatge, altrament mostra la pila del cim
	if (p.es_buida()) cout << "NO HI HA CAP FITXA" << endl;
	else p.cim().mostra();
}
void mostrar_pila(PilaFitxes& p)
{
	// Pre: --
	// Post: si la pila es buida mostra un missatge, altrament mostra les fitxes empilades
	if (p.es_buida()) cout << "NO HI HA CAP FITXA" << endl;
	else p.mostra();
}
void mostrar_menu()
{
	// Pre: --
	// Post: mostra el menu per pantalla
	cout << "1) Empilar fitxa" << endl;
	cout << "2) Desempilar fitxa" << endl;
	cout << "3) Mostrar fitxa del cim" << endl;
	cout << "4) Mostrar pila" << endl;
	cout << "5) Mostrar menu" << endl;
	cout << "6) Sortir" << endl;
}

// MAIN
int main()
{
	PilaFitxes p;
	mostrar_menu();
	int opcio = introduir_opcio();
	while (opcio != 6)
	{
		if (opcio == 1) empila(p);
		else if (opcio == 2) desempila(p);
		else if (opcio == 3) mostrar_cim(p);
		else if (opcio == 4) mostrar_pila(p);
		else if (opcio == 5) mostrar_menu();
		opcio = introduir_opcio();
	}
}
