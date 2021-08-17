#ifndef NODO_HPP
#define NODO_HPP
#include "Item.hpp"
#include <iostream>

using namespace std;

//crear la clase nodo con el tipo elemento de la lista, en este caso int
class Nodo{
	private:
		Item* tipo_elemento;
		Nodo* sig;
	public:
		Nodo();
		void setItem(Item* tipo_elemento);
		void setNodo(Nodo* sig);
		InsertarNodo(Nodo* nuevo, int pos);
		EliminarNodo(int pos);
};

#endif