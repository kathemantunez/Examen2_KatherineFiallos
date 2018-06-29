#include "Nodo.h"
#include <iostream>

Nodo::Nodo(seleccion* s,Nodo* n){
    SELECCION=s;
    siguiente=n;
    

}

void Nodo::setseleccion(seleccion* s){
    SELECCION=s;
}
void Nodo::setsig(Nodo* n){
    
    siguiente=n;
}
seleccion* Nodo::getseleccion(){
    return SELECCION;
}
Nodo* Nodo::getsig(){
    return siguiente;
}
/*int Nodo::size(){
    
}


Nodo* Nodo::insertar(Nodo* n,seleccion* sele){
    Nodo* nuevo_seleccion=new Nodo();
    Nodo* temp;

    nuevo_seleccion->setseleccion(sele);
    if(n!=NULL){
        temp=n;
        nuevo_seleccion->setsig(temp);
        n=nuevo_seleccion;
        
        
    }else{
        n=nuevo_seleccion;
        nuevo_seleccion->setsig(NULL);
        cout<<"Seleccion agregada a la lista enlazada,estaba vacia la lista"<<endl;

    }
    return n;
}

void Nodo::mostrar(Nodo* n){
    Nodo* temp=n;
    seleccion* aux1;
    while(temp!=NULL){
        aux1=temp->getseleccion();
        cout<<"hola";
        cout<<temp->getseleccion()->getnombre()<<" ";
        if(temp->getsig()!=NULL){
            cout<<"-->";
        }else{
            cout<<endl;
        }
        temp=temp->getsig();
    }
    if(n==NULL){
        cout<<"Lista en NULL"<<endl;
    }
}
    /*Nodo* nuevo=new Nodo();
    nuevo->setseleccion(n);

    Nodo* aux1=lista;
    Nodo* aux2;
    while((aux1!=NULL) ){
        aux2=aux1;
        aux1=getnodo();
    }

    if(lista==aux1){
        lista=nuevo;
    }else{
        aux2->setnodo(nuevo);
    }
    nuevo->setnodo(aux1);
    cout<<"Elemento"<<nuevo->SELECCION->getnombre()<<" insertado a lista correctamente"<<endl;
*/


