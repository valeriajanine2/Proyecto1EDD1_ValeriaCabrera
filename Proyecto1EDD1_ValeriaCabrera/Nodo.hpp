#ifndef NODO_HPP
#define NODO_HPP
#include <iostream>

using namespace std;

//crear la clase nodo con el tipo elemento de la lista, en este caso int
class Nodo{
	private:
		int num;
		Nodo* sig;
	public:
		Nodo();
		InsertarNodo(Nodo* nuevo, int pos);
		EliminarNodo(int pos);
};

#endif