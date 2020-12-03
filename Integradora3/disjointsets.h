/*
*Rodrigo Muñoz Guerrero
*A00572858
*/
#ifndef DISJOINTSETS_H_INCLUDED
#define DISJOINTSETS_H_INCLUDED

#include <sstream>
#include <string>
#include <iostream>
#include <vector>

using namespace std;

//Se crea la clase de Disjoint que tendra las funciones y atributos
// de nuestros disjoint sets.
class Disjoint {
	private:
        int *boss;
		vector<string> nodes;
        int size;
	public:
		Disjoint(vector<string>);
		~Disjoint();
		void crearunion(int, int);
		int find(int);
		string toString();
		void clear();
		void print();
};

/*
*Constructor de la clase Disjoint que define la variable de tamaño segun
*el tamaño del vector de nodos o personas, se crea un vector que guarda el
*jefe o nodo padre de cada nodo o persona y lo inicializa en -1.
*/
Disjoint::Disjoint(vector<string> v){
	int sze = v.size();
	size = sze;
	nodes = v;
	boss = new int[size];
	for (int i = 0; i < size; i++)
		boss[i] = -1;
}

//Destructor de la clase Disjoint
Disjoint::~Disjoint(){
	clear();
}

//Funcion que borra la lista de jefes de los nodos e inicializa
// en cero el atributo de tamaño de la clase
// Complejidad O(1) ya que se usa una funcion ya integrada en el sistema y no hay ciclos.
void Disjoint::clear(){
    delete [] boss;
	boss = 0;
	size = 0;
}

//Busca recursivamente el jefe del conjunto en el que esta cierto nodo o persona.
//Complejidad O(1) ya que se entra directamente al índice del arreglo y no hay ciclos.
int Disjoint::find(int val){
	if (boss[val] == -1)
		return val;
	return find(boss[val]);
}

/*
* Funcion que crea la union o, en otras palabras, define quien es el jefe de quien
* dependiendo del orden en el que se ingresan los indices de cada nodo o persona.
* Complejidad O(1) ya que son definiciones directas y no hay ciclos.
*/
void Disjoint::crearunion(int a, int b){
	int pa = find(a);
	int pb = find(b);
	boss[pa] = pb;
}

//Funcion que imprime quien es el jefe de quien escribiendo el nombre de la persona.
//Complejidad O(n) ya que es un ciclo que pasa por cada persona dentro del array.
string Disjoint::toString() {
	stringstream aux;
	for (int i = 0; i < size; i++){
		aux << nodes[i] << "'s boss = "<< nodes[boss[i]] << endl;
	}
	string line;
	line = aux.str();
	return line;
}

//Funcion que imprime el indice y el nombre de cada persona o nodo que hay en el arreglo.
//Complejidad O(n) ya que imprime cada una de las personas en el arreglo.
void Disjoint::print(){
    for (int i = 0; i < size; i++){
        cout << i << nodes[i] << endl;
    }
}

#endif // DISJOINTSETS_H_INCLUDED
