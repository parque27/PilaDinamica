#include "Fitxa.h"
#include <iostream>
using namespace std;

// CONSTRUCTORS
// CONSTRUCTOR PER DEFECTE
Fitxa::Fitxa()
{
	a_tipus = ' ';
	a_valor = 0;
}
// CONSTRUCTOR PER PARAMETRES
Fitxa::Fitxa(char element, int valor)
{
	a_tipus = element;
	a_valor = valor;
}

// METODES CONSULTORS
void Fitxa::mostra() const
{
	cout << "(" << a_tipus;
	if (a_valor <= 9) cout << 0;
	cout << a_valor << ")";
}

// METODES MODIFICADORS
void Fitxa::llegeix()
{
	cin >> a_tipus >> a_valor;
}