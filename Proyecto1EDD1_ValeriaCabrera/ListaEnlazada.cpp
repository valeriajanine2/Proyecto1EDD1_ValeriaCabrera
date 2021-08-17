#include "ListaEnlazada.hpp"

ListaEnlazada::ListaEnlazada():Lista(){
	cout << "\nEntering Constructor ..." << endl;
	Item* vacio = new Item();
    head = new Nodo;
    head->setItem(vacio);
    vacio->setName("head");
    vacio->setPrecio(0);
    vacio->setCant(0);
    head->setNodo(NULL);
    length = 0;
    cout << "Success: head node created. listLength set to 0." << endl;
}

ListaEnlazada::ListaEnlazada(Nodo* head, int length){
	
}

ListaEnlazada::~ListaEnlazada(){
	
}

int ListaEnlazada::FIN(Lista* L){
	return 1;
}

void ListaEnlazada::INSERTA(Item* x, int p, Lista* L){
	
}

int ListaEnlazada::LOCALIZA(Item* x, Lista* L){
	return 1;
}

Item* ListaEnlazada::RECUPERA(int p, Lista* L){
	Item* n;
	return n;
}

void ListaEnlazada::SUPRIME(int p, Lista* L){
	
}

int ListaEnlazada::SIGUIENTE(int p, Lista* L){
	return 1;
}

int ListaEnlazada::ANTERIOR(int p, Lista* L){
	return 1;
}

int ListaEnlazada::ANULA(Lista* L){
	return L->FIN(L);
}

int ListaEnlazada::PRIMERO(Lista* L){
	return 1;
}

void ListaEnlazada::IMPRIME_LISTA(Lista* L){
	
}