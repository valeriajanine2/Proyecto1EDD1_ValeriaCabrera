#include "Item.hpp"

Item::Item(){
	//constructor vacio
}

Item::Item(string nombre, float precio, int cant){
	this->nombre=nombre;
	this->precio=precio;
	this->cant=cant;
}

void Item::setName(string nombre){
	this->nombre=nombre;
}

string Item::getName(){
	return this->nombre;
}

void Item::setPrecio(float precio){
	this->precio=precio;
}

float Item::getPrecio(){
	return this->precio;
}

void Item::setCant(int cant){
	this->cant=cant;
}

int Item::getCant(){
	return this->cant;
}