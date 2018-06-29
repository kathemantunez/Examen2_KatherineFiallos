#ifndef NODO_H
#define NODO_H
#include "seleccion.h"
class Nodo{
    protected:
        seleccion* SELECCION;
        Nodo* siguiente;
    
    public:
        Nodo(seleccion*,Nodo*);

      // seleccion* getseleccion();
        void setseleccion(seleccion*);
        void setsig(Nodo*);
        seleccion* getseleccion();
        Nodo* getsig();
       /* Nodo* insertar(Nodo* ,seleccion*);
        void mostrar(Nodo*);
        int size();*/



};
#endif