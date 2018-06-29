#include "Lista.h"
#include "Nodo.h"

Lista::Lista(){
}

void Lista::push(Nodo* n){
    Nodo* t;
    
    if(siguiente==NULL){
        siguiente=n;
        cout<<"agregado"<<endl;
    }else{
        
       t=siguiente;
        while(t->getsig()!=NULL){
            t=t->getsig();
            cout<<"agregado"<<endl;
        }
        t->setsig(n);

    }
}
    












   /* Nodo* nuevo_seleccion;
    Nodo* temp;

    //nuevo_seleccion->setseleccion(sele);
    if(n!=NULL){
        temp=n;
        nuevo_seleccion->setsig(temp);
        n=nuevo_seleccion;
        cout<<"agregado"<<endl;
        
        
        
    }else{
        n=nuevo_seleccion;
        nuevo_seleccion->setsig(NULL);
        cout<<"Seleccion agregada a la lista enlazada,estaba vacia la lista"<<endl;

    }*/


