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

        void push(Nodo*);
        void delete1(seleccion*);
        void listar();


};
#endif