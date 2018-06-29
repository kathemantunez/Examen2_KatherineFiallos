#ifndef SELECCION_H
#define SELECCION_H


#include <iostream>
#include <string>

using namespace std;

class seleccion{

    /* nombre de la selección, 
    partidos ganados, perdidos, empatados,
     goles anotados, máximo goleador y sus goles anotados.
    */
   public:
    
        string nombre;
        int partidos_ganados;
        int partidos_perdidos;
        int partidos_empatados;
        int goles_anotados;
        string goleador;
        int goles_jugador;



    
        seleccion(string,int,int,int,int,string,int);
        //get
        string getnombre();
        int getp_ganados();
        int getp_perdidos();
        int getp_empatados();
        int getgoles_anotados();
        string getgoleador();
        int getgoles_jugador();

        //set
        void setnombre(string);
        void setp_ganados(int);
        void setp_perdidos(int);
        void setp_empatados(int);
        void setgoles_anotados(int);
        void setgoleador(string);
        void setgoles_jugador(int);
        //void toString();
        // void write(ofstream&);
        //void read(ifstream&);
        //friend ostream& operator<<(ostream&,const Seleccion&);
        //friend istream& operator>>(istream&, Seleccion&);






};
#endif