#include "Nodo.hpp"

Nodo::Nodo(){
	
}

void Nodo::setItem(Item* tipo_elemnto){
	this->tipo_elemento=tipo_elemento;
}

void Nodo::setNodo(Nodo* sig){
	this->sig=sig;
}