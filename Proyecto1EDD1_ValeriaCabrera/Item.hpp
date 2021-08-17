#ifndef ITEM_HPP
#define ITEM_HPP
#include <iostream>
#include <string>

using namespace std;

class Item{
	private:
		string nombre;
		float precio;
		int cant;
	public:
		Item();
		Item(string,float,int);
		void setName(string);
		string getName();
		void setPrecio(float);
		float getPrecio();
		void setCant(int);
		int getCant();
};

#endif