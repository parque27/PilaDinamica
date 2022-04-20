#include "PilaFitxes.h"
#include <iostream>
using namespace std;

// CONSTRUCTORS
// CONSTRUCTOR PER DEFECTE
PilaFitxes::PilaFitxes()
{
	a_cim = NULL;
}
// CONSTRUCTOR COPIA
PilaFitxes::PilaFitxes(const PilaFitxes& o)
{
	a_cim = NULL;
	copia(o);
}
// DESTRUCTOR
PilaFitxes::~PilaFitxes()
{
	allibera();
}
// OPERADORS
PilaFitxes& PilaFitxes::operator=(const PilaFitxes& o)
{
	if (this != &o)
	{
		allibera();
		copia(o);
	}
	return *this;
}

// METODES CONSULTORS
bool PilaFitxes::es_buida() const
{
	return a_cim == NULL;
}

Fitxa PilaFitxes::cim() const
{
	return a_cim->f;
}

// METODES MODIFICADRS
void PilaFitxes::empila(Fitxa fitxa)
{
	Node* nou = new Node; // reservem memoria "virtual"
	nou->f = fitxa; // la fitxa f apuntada per nou = fitxa a empilar
	nou->seg = a_cim; // el node seg de nou apunta al mateix lloc que a_cim (NULL en el n=1 cas, a_cim en n=2,3...)
	a_cim = nou; // a_cim apunta al mateix lloc que apunta nou (es a dir al nou node que volem empilar)
	// un cop finalitzem, nou desapareix del mon virtual
}

void PilaFitxes::desempila()
{
	Node* aux = a_cim;
	a_cim = a_cim->seg;
	delete aux;
}