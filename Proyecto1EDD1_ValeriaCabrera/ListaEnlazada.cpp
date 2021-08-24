#include "ListaEnlazada.hpp"

ListaEnlazada::ListaEnlazada():Lista(){
	cout << "\nEntering Constructor ..." << endl;
    head = new Nodo;
    Item* item = new Item("head",0,0);
    head->tipo_elemento = item;
    head->sig = NULL;
    length = 0;
    cout << "Success: head node created. listLength set to 0." << endl;
}

ListaEnlazada::ListaEnlazada(Nodo* head, int length){
	
}

ListaEnlazada::~ListaEnlazada(){
	delete head;
}

int ListaEnlazada::FIN(Lista* L){
	
	int f = 0;
	Nodo* p = new Nodo;
	Nodo* q = new Nodo;
	p = head;
	q = head;
	while(q){
		p = q;
		q = p->sig;
		f++;
	}
	
	return f;
}

void ListaEnlazada::INSERTA(Item* x, int pos, Lista* L){
	
	Nodo* nuevoNodo = new Nodo;
	nuevoNodo->tipo_elemento = x;
	nuevoNodo->sig = NULL;
	
    if ( (pos <= 0) || (pos > this->length + 1) ){
        cout << "Error: la posicion esta fuera del rango" << endl;
    }else if(!head->sig){
    	cout<<"en el primero entra aqui\n";
		head->sig = nuevoNodo;
        length++;
        cout << "Success: added '" << nuevoNodo->tipo_elemento->getName() << "' to position " << pos << ".\n";
        cout << "listLength = " << length << endl;
	}else{
		int count = 0;
		Nodo* p = new Nodo;
		Nodo* q = new Nodo;
		p = head;
		q = head;
		while(q){
			p = q;
			q = p->sig;
			count++;
		}
		if (count == pos){
        p->sig= nuevoNodo;
        nuevoNodo->sig= q;
        length++;
        cout << "Success: added '" << nuevoNodo->tipo_elemento << "' to position " << pos << ".\n";
        cout << "listLength = " << length << endl;
    	}
			
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
	cout << "\nEntered printList..." << endl;
    int count = 0;
    Nodo* p = new Nodo;
	Nodo* q = new Nodo;
    p = head;
    q = head;
    cout << "\n---------------------\n";
    cout << " Lista de Supermercado\n";
    while (q)
    {
        p = q;
        Item* it = p->tipo_elemento;
        cout << "---------------------\n";
        cout << "Articulo #" << count << "\n";
        cout << "\t Nombre: " << it->getName() << "\n";
        cout << "\t Precio: " << it->getPrecio() << "\n";
        cout << "\t Cant: " << it->getCant() << "\n";
        q = p->sig;
        count++;
    }
}