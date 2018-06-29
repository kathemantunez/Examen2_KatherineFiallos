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
/*void seleccion::toString(){
    cout<<"Nombre de equipo: "<<nombre<<" ,Partidos ganados: "<<partidos_ganados<<" ,Partidos perdidos:"<<partidos_perdidos
    <<" ,Partidos empatados:"<<partidos_empatados<<" ,Goles anotados por el equipo:"<<goles_anotados
    <<" ,Maximo Goleador:"<<goleador<<" ,Goles del maximo goleador:"<<goles_jugador<<endl;
    

}*/
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
/*
void seleccion::read(ifstream& in){
  int size;
  //partidosGanados
  in.read(reinterpret_cast<char*>(&partidos_ganados),sizeof(int));

  //partidosPerdidos
  in.read(reinterpret_cast<char*>(&partidos_perdidos),sizeof(int));

  //partidosEmpatados
  in.read(reinterpret_cast<char*>(&partidos_empatados),sizeof(int));

  //golesAnotados
  in.read(reinterpret_cast<char*>(&goles_anotados),sizeof(int));

  //golesJugador
  in.read(reinterpret_cast<char*>(&goles_jugador),sizeof(int));

  //nombreSeleccion
  in.read(reinterpret_cast<char*>(&size),sizeof(int));
  char numBuffer[size];
  in.read(numBuffer,size);
  nombre=numBuffer;

  //maximoGoleador
  in.read(reinterpret_cast<char*>(&size),sizeof(int));
  char maxGolBuffer[size];
  in.read(numBuffer,size);
  goleador=numBuffer;
}*/
/*void seleccion::write(ofstream& out){
  //Nombre Seleccion
  int size = nombre.size();
  out.write(reinterpret_cast<char*>(&size),sizeof(int));
  out.write(nombre.data(),nombre.size());

  //Maximo goleador
  size = goleador.size();
  out.write(reinterpret_cast<char*>(&size),sizeof(int));
  out.write(goleador.data(),goleador.size());

  //Partidos ganados
  out.write(reinterpret_cast<char*>(&partidos_ganados),sizeof(int));

  //Partidos perdidos
  out.write(reinterpret_cast<char*>(&partidos_perdidos),sizeof(int));

  //Partidos empatados
  out.write(reinterpret_cast<char*>(&partidos_empatados),sizeof(int));

  //Goles anotados
  out.write(reinterpret_cast<char*>(&goles_anotados),sizeof(int));

  //Goles Jugador
  out.write(reinterpret_cast<char*>(&goles_jugador),sizeof(int));

}*/