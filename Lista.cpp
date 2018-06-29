#include "Lista.h"
#include "Nodo.h"

Lista::Lista(){
    siguiente=NULL;
}

void Lista::push(Nodo* n){
  /*  Nodo* temp=new Nodo(n);
    temp->setseleccion(siguiente);
    siguiente=temp;*/



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
void Lista::print(int cont1){
    Nodo* nuevo=siguiente;
    int cont=1;
    int x=1;
    //while(nuevo!=NULL){
    while(x<=cont1){
         cout<<"Equipos #"<<cont<<endl;
        cout<<"Nombre del equipo:"<<nuevo->getseleccion()->getnombre()<<endl;
        cout<<"Maximo goleador:"<<nuevo->getseleccion()->getgoleador()<<endl;
        cout<<"Partidos Ganados:"<<nuevo->getseleccion()->getp_perdidos()<<endl;
        cont++;
        x++;
    }
   
  /*  cout<<"Equipos:"<<endl;
    int cont=1;
   
    while(siguiente!=NULL){
        cout<<"Equipos #"<<cont<<endl;
        cout<<"Nombre del equipo:"<<siguiente->getseleccion()->getnombre()<<endl;
        cout<<"Maximo goleador:"<<siguiente->getseleccion()->getgoleador()<<endl;
        cout<<"Partidos Ganados:"<<siguiente->getseleccion()->getp_perdidos();
        cont++;
       
    }*/
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


