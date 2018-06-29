#include "seleccion.h"

/* nombre de la selección, 
    partidos ganados, perdidos, empatados,
     goles anotados, máximo goleador y sus goles anotados.
    */
seleccion::seleccion(string _nombre,int p_ganados,int p_perdidos,int p_empatados,int goles,string _goleador,int goles_goleador){
    nombre:_nombre;
    partidos_ganados=p_ganados;
    partidos_perdidos=p_perdidos;
    partidos_empatados=p_empatados;
    goles_anotados=goles;
    goleador=_goleador;
    goles_jugador=goles_goleador;

}
        //get
string seleccion::getnombre(){
    return nombre;
}
int seleccion::getp_ganados(){
    return partidos_ganados;
}
int seleccion::getp_perdidos(){
    return partidos_perdidos;
}
int seleccion::getp_empatados(){
    return partidos_empatados;
}
int seleccion::getgoles_anotados(){
    return goles_anotados;
}
string seleccion::getgoleador(){
    return goleador;
}
int seleccion::getgoles_jugador(){
    return goles_jugador;
}

//set
void seleccion::setnombre(string x){
    nombre=x;
}
void seleccion::setp_ganados(int x) {
    partidos_ganados=x;
}
void seleccion::setp_perdidos(int x){
    partidos_perdidos=x;
}
void seleccion::setp_empatados(int x){
    partidos_empatados=x;
}
void seleccion::setgoles_anotados(int x){
    goles_anotados=x;
}
void seleccion::setgoleador(string x) {
    goleador=x;
}
void seleccion::setgoles_jugador(int x){
    goles_jugador=x;
}