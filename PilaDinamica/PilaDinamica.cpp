// ENTRADA:
// SORTIDA: 
#include <iostream>
#include "PilaFitxes.h"
using namespace std;
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
void mostrar_menu()
{
	cout << "1) Empilar fitxa" << endl;
	cout << "2) Desempilar fitxa" << endl;
	cout << "3) Mostrar fitxa del cim" << endl;
	cout << "4) Mostrar menu" << endl;
	cout << "5) Sortir" << endl;
}

int main()
{
	PilaFitxes p;
	mostrar_menu();
	int opcio = introduir_opcio();
	while (opcio != 5)
	{
		if (opcio == 1) empila(p);
		else if (opcio == 2) p.desempila();
		else if (opcio == 3)
		{
			p.cim().mostra();
			cout << endl; // ESTETICA
		}
		else if (opcio == 4) mostrar_menu();

		opcio = introduir_opcio();
	}
}
