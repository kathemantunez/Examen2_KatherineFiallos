#include "Lista.h"
#include "Nodo.h"

Lista::Lista(){
    siguiente=NULL;
}

void Lista::push(Nodo* n,int cont){
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
         string x1=nuevo->getseleccion()->getnombre();
        cout<<"Nombre del equipo:"<<x1<<endl;
        cout<<"Maximo goleador:"<<nuevo->getseleccion()->getgoleador()<<endl;
        cout<<"Partidos Ganados:"<<nuevo->getseleccion()->getp_perdidos()<<endl;
        cont++;
        x++;
        cout<<endl;
    }
   
  
}
void Lista::delete1(seleccion* s){

}