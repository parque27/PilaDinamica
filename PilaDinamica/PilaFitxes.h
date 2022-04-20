#ifndef PILAFITXES_H
#define PILAFITXES_H
#include "Fitxa.h"
class PilaFitxes
{
public:
	PilaFitxes();
	PilaFitxes(const PilaFitxes& o);
	~PilaFitxes();
	PilaFitxes& operator=(const PilaFitxes& o);

	bool es_buida() const;
	Fitxa cim() const;

	void empila(Fitxa f);
	void desempila();
private:
	struct Node
	{
		Fitxa f;
		Node* seg;
	};
	Node* a_cim;

	void copia(const PilaFitxes& o);
	void allibera();
};
#endif // !PILAFITXES_H