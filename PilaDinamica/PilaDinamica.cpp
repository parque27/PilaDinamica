// ENTRADA:
// SORTIDA: 
#include <iostream>
#include "PilaFitxes.h"
using namespace std;

// ACCIONS I FUNCIONS
int introduir_opcio()
{
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
	Fitxa f; f.llegeix();
	p.empila(f);
}
void desempila(PilaFitxes& p)
{
	if (p.es_buida()) cout << "NO HI HA CAP FITXA" << endl;
	else p.desempila();
}
void mostrar_cim(PilaFitxes& p)
{
	if (p.es_buida()) cout << "NO HI HA CAP FITXA" << endl;
	else p.cim().mostra();
}
void mostrar_pila(PilaFitxes& p)
{
	if (p.es_buida()) cout << "NO HI HA CAP FITXA" << endl;
	else p.mostra();
}
void mostrar_menu()
{
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
