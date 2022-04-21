#ifndef PILAFITXES_H
#define PILAFITXES_H
#include "Fitxa.h"
class PilaFitxes
{
	public:
		// CONSTRUCTORS
		PilaFitxes();
		PilaFitxes(const PilaFitxes& o);

		// DESTRUCTOR
		~PilaFitxes();

		// OPERADORS
		PilaFitxes& operator=(const PilaFitxes& o);

		// METODES CONSULTORS
		bool es_buida() const;
		Fitxa cim() const;
		void mostra() const;

		// METODES MODIFICADORS
		void empila(Fitxa f);
		void desempila();

	private:
		// ESTRUCTURA DE DADES
		struct Node
		{
			Fitxa f;
			Node* seg;
		};

		// ATRIBUTS
		Node* a_cim;

		// METODES D'INSTANCIA
		void copia(const PilaFitxes& o);
		void allibera();
};
#endif // !PILAFITXES_H