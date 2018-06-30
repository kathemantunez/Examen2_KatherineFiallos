#ifndef LISTA_H
#define LISTA_H
#include "Nodo.h"


class Lista{
    private:
        Nodo* n;
        Nodo* siguiente;
       // Nodo* nuevo_seleccion;
    public:
        Lista();
        ~Lista();
        Nodo* getsiguiente();

        void push(Nodo*,int);
        void delete1(seleccion*);
        void print(int);


};
#endif