#ifndef LISTAENLAZADA_HPP
#define LISTAENLAZADA_HPP
#include <iostream>
#include "Lista.hpp"
#include "Nodo.hpp"
#include "Item.hpp"

using namespace std;

class ListaEnlazada:public Lista{
	public:
		ListaEnlazada();
		ListaEnlazada(Nodo* head, int length);
		~ListaEnlazada();
		//metodos de la lista
		virtual void INSERTA(Item* x, int p, Lista* L);
		virtual int FIN(Lista* L);
		virtual int LOCALIZA(Item* x, Lista* L);
		virtual Item* RECUPERA(int p, Lista* L);
		virtual void SUPRIME(int p, Lista* L);
		virtual int SIGUIENTE(int p, Lista* L);
		virtual int ANTERIOR(int p, Lista* L);
		virtual int ANULA(Lista* L);
		virtual int PRIMERO(Lista* L);
		virtual void IMPRIME_LISTA(Lista* L);
};

#endif