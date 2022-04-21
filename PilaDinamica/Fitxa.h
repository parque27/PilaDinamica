#ifndef FITXA_H
#define FITXA_H
class Fitxa
{
	// DESCRIPCCIO: Fitxa que te un element (aigua, foc, terra, vent i eter) i un valor.
	// INVARIABLE: Fitxa pren valors de 1 a 20. Caracters que pot ser una fitxa: a,f,t,v,e
public:
	// CONSTRUCTORS
	Fitxa();
	// Pre: --; Post: la fitxa te tipus buit i valor 0
	Fitxa(char tipus, int valor);
	// Pre: --; Post: la fitxa te els parametres passats per constructor
	
	// OPERADORS
	bool operator < (const Fitxa& f);
	// Criteri: this es menor que f si el tipus de this es menor que f, altrament si la numeracio de this es menor que la de f.
	
	// METODES CONSULTORS
	void mostra() const;
	// Pre: --: Post: mostra la fitxa per pantalla
	bool es_nula() const;
	// Pre: --; Post: retorna true si la fitxa es nula, fals altrament
	
	// METODES MODIFICADORS
	void llegeix();
	// Pre: --; Post: llegeix els atributs de la fitxa per teclat

private:
	// ATRIBUTS
	char a_tipus;
	int a_valor;
};
#endif // !FITXA_H