#ifndef LISTA_HPP
#define LISTA_HPP
#include <iostream>
#include "Nodo.hpp"
#include "Item.hpp"

using namespace std;

class Lista{
	protected:
		Nodo* head;
		int length;
	public:
		Lista();
		Lista(Nodo*, int);
		~Lista();
		//mutadores
		void setHead(Nodo* head);
		Nodo* getHead();
		void setLength(int length);
		int getLength();
		//metodos de lista
		virtual void INSERTA(Item* x, int p, Lista* L)=0;
		virtual int FIN(Lista* L)=0;
		virtual int LOCALIZA(Item* x, Lista* L)=0;
		virtual Item* RECUPERA(int p, Lista* L)=0;
		virtual void SUPRIME(int p, Lista* L)=0;
		virtual int SIGUIENTE(int p, Lista* L)=0;
		virtual int ANTERIOR(int p, Lista* L)=0;
		virtual int ANULA(Lista* L)=0;
		virtual int PRIMERO(Lista* L)=0;
		virtual void IMPRIME_LISTA(Lista* L)=0;
};

#endif