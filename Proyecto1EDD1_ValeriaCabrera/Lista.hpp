#ifndef LISTA_HPP
#define LISTA_HPP
#include <iostream>

using namespace std;

class Lista{
	private:
		Nodo* head;
		int length;
	public:
		Lista();
		~Lista();
};

#endif