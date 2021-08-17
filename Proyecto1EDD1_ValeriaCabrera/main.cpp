#include <iostream>
#include <string>
#include "Item.hpp"
#include "Nodo.hpp"
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
		cout<<"MENU"<<endl;
		cout<<"1) Inserta\n2) Fin\n3) Localiza\n4) Recupera\n5) Suprime\n6) Siguiente\n7) Anterior\n8) Primero\n9) Imprimir Lista\n10) Anula\n11) Salir\n";
		cout<<"Ingrese el numero de la opcion que desea realizar"<<endl;
		cin>>opcion;
		switch(opcion){
			case 1:{
				//Inserta
				
				break;
			}
			
			case 2:{
				//fin
				
				break;
			}
			
			case 3:{
				//localiza
				
				break;
			}
			
			case 4:{
				//recupera
				
				break;
			}
			
			case 5:{
				//suprime
				
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
	
	return 0;
}