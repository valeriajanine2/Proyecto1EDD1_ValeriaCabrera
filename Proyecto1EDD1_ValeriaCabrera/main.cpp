#include <iostream>
#include <string>
#include "Item.hpp"
#include "Lista.hpp"
#include "ListaEnlazada.hpp"

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {

	//crear la lista
	ListaEnlazada* L = new ListaEnlazada();

	//Insertar
	Item* x1 = new Item("queso",33.75,3);
	Item* x2 = new Item("jamon",60.13,1);
	Item* x3 = new Item("mayonesa",29.98,2);
	Item* x4 = new Item("huevos",3.50,12);
	Item* x5 = new Item("leche",32.77,4);
	Item* x6 = new Item("pan",26.32,1);
	Item* x7 = new Item("cereal",83.87,1);
	Item* x8 = new Item("tomate",5.21,6);
	Item* x9 = new Item("papas",7.21,5);
	Item* x0 = new Item("banano",4.16,6);

	L->INSERTA(x1,1,L);
	L->INSERTA(x2,2,L);
	L->INSERTA(x3,3,L);
	L->INSERTA(x4,4,L);
	L->INSERTA(x5,5,L);
	L->INSERTA(x6,6,L);
	L->INSERTA(x7,7,L);
	L->INSERTA(x8,8,L);
	L->INSERTA(x9,9,L);
	L->INSERTA(x0,10,L);

	//imprimir lista
	L->IMPRIME_LISTA(L);
	
	//fin
	cout<<"\nFin: "+to_string(L->FIN(L))+"\n";

	//localiza
	cout<<"\nLocaliza el cereal.....\n";
	Item* temp = new Item();
	temp->setName("cereal");
	cout<<"Cereal en la posicion "+to_string(L->LOCALIZA(temp,L))+"\n";

	//recupera
	cout<<"\nRecupera en la posicion 2.....\n";
	Item* res = L->RECUPERA(2,L);
	cout<<"Articulo: "+res->getName()+"\nPrecio: L. "+to_string(res->getPrecio())+"\nCantidad: "+to_string(res->getCant())+"\n";
	
	//suprime
	cout<<"\nSuprime la posicion 8.....\n";
	L->SUPRIME(8,L);
	L->IMPRIME_LISTA(L);
	
	//fin
	cout<<"\nFin: "+to_string(L->FIN(L))+"\n";
	
	//siguiente
	cout<<"\nPosicion siguiente de 4: "+to_string(L->SIGUIENTE(4,L))+"\n";
	
	//anterior
	cout<<"\nPosicion anterior de 7: "+to_string(L->ANTERIOR(7,L))+"\n";
	
	//primero
	cout<<"\nPrimero de la lista: "+to_string(L->PRIMERO(L))+"\n";
	
	//anula
	cout<<"\nAnulando la lista.....\n";
	cout<<"Anulada: "+to_string(L->ANULA(L))+"\n";
	
	//imprime vacio
	L->IMPRIME_LISTA(L);


	//destructores
	delete L;

	return 0;
}