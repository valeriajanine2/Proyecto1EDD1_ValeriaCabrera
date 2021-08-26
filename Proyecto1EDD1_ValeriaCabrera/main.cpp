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
	
	//menu
	int opcion=0;
	while(opcion!=11){
		cout<<"BIENVENIDO A SU LISTA DE SUPERMERCADO\n";
		cout<<"MENU"<<endl;
		cout<<"1) Inserta\n2) Fin\n3) Localiza\n4) Recupera\n5) Suprime\n6) Siguiente\n7) Anterior\n8) Primero\n9) Imprimir Lista\n10) Anula\n11) Salir\n";
		cout<<"Ingrese el numero de la opcion que desea realizar: ";
		cin>>opcion;
		switch(opcion){
			case 1:{
				//Inserta
				
				//crear el item
				string nombre;
				float precio;
				int cant;
				
				cout<<"Ingrese el nombre del articulo: ";
				cin>>nombre;
				cout<<"Ingrese el precio de "+nombre+" L.";
				cin>>precio;
				cout<<"Ingrese la cantidad a comprar: ";
				cin>>cant;
				
				Item* x = new Item(nombre,precio,cant);
				
				//implementar metodo
				int pos;
				cout<<"Ingrese la poscion en la lista donde desea insertar: ";
				cin>>pos;
				
				L->INSERTA(x,pos,L);
				
				break;
			}
			
			case 2:{
				//fin
				
				cout<<"FIN(L): ";
				cout<<L->FIN(L)<<endl;
				
				break;
			}
			
			case 3:{
				//localiza
				
				string nombre;
				cout<<"Ingrese el nombre del item que desea localizar: ";
				cin>>nombre;
				Item* x = new Item();
				x->setName(nombre);
				int temp = L->LOCALIZA(x,L);
				
				if(temp==L->FIN(L)){
					cout<<"No existe este articulo en la lista, fin: "+to_string(temp)+"\n";
				}else{
					cout<<"Este articulo se encuentra en la posicion: "+to_string(temp)+"\n";
				}
				
				break;
			}
			
			case 4:{
				//recupera
				
				break;
			}
			
			case 5:{
				//suprime
				int pos;
				cout<<"Ingrese la posicion del articulo que desea eliminar: ";
				cin>>pos;
				L->SUPRIME(pos, L);
				break;
			}
			
			case 6:{
				//siguiente
				
				break;
			}
			
			case 7:{
				//anterior
				
				break;
			}
			
			case 8:{
				//primero
				
				break;
			}
			
			case 9:{
				//imprime lista
				L->IMPRIME_LISTA(L);
				break;
			}
			
			case 10:{
				//anula
				
				break;
			}
			
			case 11:{
				//solo para que no salga la validacion
				break;
			}
			
			default:{
				cout<<"Asegurese de ingresar una de las opciones del menu"<<endl;
				break;
			}
		}
	}//fin del while
	
	//destructores
	delete L;
	
	return 0;
}