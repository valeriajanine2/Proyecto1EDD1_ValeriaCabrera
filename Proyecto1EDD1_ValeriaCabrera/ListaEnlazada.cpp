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
	delete head;
}

int ListaEnlazada::FIN(Lista* L){
	return this->length+1;
}

void ListaEnlazada::INSERTA(Item* x, int pos, Lista* L){
	
    if ( (pos <= 0) || (pos > this->length + 1) )
    {
        cout << "Error: la posicion esta fuera del rango" << endl;
    }
    else if (!head->getNodo())
    {        
		head->setItem(x);
        length++;
        cout << "Success: added '" << x->getName() << "' to position " << pos << ".\n";
        cout << "listLength = " << length << endl;
    }
    
}

int ListaEnlazada::LOCALIZA(Item* x, Lista* L){
	return 1;
}

Item* ListaEnlazada::RECUPERA(int pos, Lista* L){
	Item* n;
	return n;
}

void ListaEnlazada::SUPRIME(int pos, Lista* L){
	
}

int ListaEnlazada::SIGUIENTE(int pos, Lista* L){
	return 1;
}

int ListaEnlazada::ANTERIOR(int pos, Lista* L){
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