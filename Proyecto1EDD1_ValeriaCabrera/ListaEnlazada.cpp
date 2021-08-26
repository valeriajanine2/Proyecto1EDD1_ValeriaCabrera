#include "ListaEnlazada.hpp"

ListaEnlazada::ListaEnlazada():Lista(){
    head = new Nodo;
    Item* item = new Item("head",0,0);
    head->tipo_elemento = item;
    head->sig = NULL;
    length = 0;
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
		head->sig = nuevoNodo;
        length++;
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
    	}
			
	} 
    
}

int ListaEnlazada::LOCALIZA(Item* x, Lista* L){
	bool existe = false;
	Nodo* p = new Nodo;
	Nodo* q = new Nodo;
	p = head;
	q = head;
	int cont = 0;
	int ret;
	while(q){
		p = q;
		Item* temp = p->tipo_elemento;
		if(temp->getName()==x->getName()){
			ret = cont;
			existe=true;
		}
		q = p->sig;
		cont++;
	}
	
	if(existe){
		return ret;
	}else{
		return L->FIN(L);
	}
	
}

Item* ListaEnlazada::RECUPERA(int pos, Lista* L){
	
	Item* n;
	
	if ( (pos <= 0) || (pos > this->length + 1) ){
        cout << "Error: la posicion esta fuera del rango" << endl;
        return NULL;
    }else{
    	Nodo* p = new Nodo;
		Nodo* q = new Nodo;
		p = head;
		q = head;
		int cont=0;
		while(q){
			p = q;
			if(cont==pos){
				n = p->tipo_elemento;
			}
			q = p->sig;
			cont++;
		}
		return n;
	}
	
}

void ListaEnlazada::SUPRIME(int pos, Lista* L){
	cout << "\nEntering removeNode..." << endl;
    if ( (pos <= 0) || (pos > length + 1) )
    {
        cout << "Error: la posicion esta fuera de rango" << endl;
    }
    if (!head->sig)
    {
        cout << "Error: no hay nada que borrar" << endl;
    }
    
    int count = 0;
    Nodo* p = new Nodo;
	Nodo* q = new Nodo;
	p = head;
	q = head;
    while (q)
    {
        if (count == pos)
        {
            p->sig = q->sig;
            delete q;
            length--;
        }
        p = q;
        q = p->sig;
        count++;
    }
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
        if(count==0){
        	p = p->sig;
        	count++;
		}
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