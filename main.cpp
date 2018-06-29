#include <iostream>
#include "seleccion.h"
#include "Nodo.h"
#include "Lista.h"

#include <fstream>
#include <cstring>
#include <stdio.h>

using namespace std;
using std::endl;

void agregar_seleccion();
void listar_seleccion();
void eliminar_seleccion();
void abrir_archivo();

Nodo* nodo;
Lista* lista;
int cont_global=0;

int main(){
    char tecla;
    bool seguir=true;

    do{

        cout<<"-----------------------------------------"<<endl;
        cout<<"--------EXAMEN II PROGRAMCION III--------"<<endl;
        cout<<"1. Agregar Selecciòn"<<endl;
        cout<<"2. Listar Selecciòn"<<endl;
        cout<<"3. Eliminar Selecciòn"<<endl;
       // cout<<"4. Abrir archivo binario"<<endl;
        cout<<"4. Salir"<<endl;
        cout<<"------------------------------"<<endl;
        cin>>tecla;

        switch(tecla){
            case '1':  
                    agregar_seleccion();
                break;
            case '2':
                    listar_seleccion();
                
                
                break;
            case '3':
                    eliminar_seleccion();
                
                break;
            case '4':
                seguir=false;
                break;
            case '5':
                
                break;
                abrir_archivo();
            default:
                cout<<"OPCIÒN INCORRECTA"<<endl;
                break;

        }

    }while(seguir==true);

    return 0;
}

void agregar_seleccion(){
    /* nombre de la selección, 
    partidos ganados, perdidos, empatados,
     goles anotados, máximo goleador y sus goles anotados.
    */
   string nombre,goleador;
   int p_ganados,p_perdidos,p_empatados,goles_anotados,goles_jugador;
    cout<<"SELECCIÒN"<<endl;
   cout<<"Ingrese nombre de la seleccion:"<<endl;
   cin>>nombre;
   cout<<"partidos ganados:"<<endl;
   cin>>p_ganados;
   cout<<"partidos perdidos:"<<endl;
   cin>>p_perdidos;
   cout<<"partidos empatados"<<endl;
   cin>>p_empatados;
   cout<<"goles anotados"<<endl;
   cin>>goles_anotados;
   cout<<"maximo goleador:"<<endl;
   cin>>goleador;
   cout<<"goles anotados por el jugador"<<endl;
   cin>>goles_anotados;

    seleccion* selec=new seleccion(nombre,p_ganados,p_perdidos,p_empatados,goles_anotados,goleador,goles_jugador);
   
    nodo=new Nodo(selec,nodo);
    lista=new Lista();
    lista->push(nodo);
    cont_global++;
    lista->print(cont_global);

    //Archivo bianrio
    ofstream fsalida("Equipos.dat", ios::out | ios::binary | ios::app);
    //string x=selec->toString();
    fsalida.write((char*)selec,sizeof(seleccion*));
    fsalida.close();
    cout<<"AGREGADO AL ARCHIVO BINARIOS"<<endl;
    


    

}


void listar_seleccion(){
    lista->print(cont_global);
      

}
void eliminar_seleccion(){


}
void abrir_archivo(){
    
    /*
    seleccion* sele;
    ifstream leer("Equipos.dat",ios::in | ios::binary);
    leer.read((char*))&sele,sizeof(seleccion*);*/






}