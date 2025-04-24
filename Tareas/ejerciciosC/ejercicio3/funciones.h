#ifndef FUNCIONES_H
#define FUNCIONES_H


typedef enum { ROJO, VERDE, AMARILLO } Semaforo;


void mostrarEstado(Semaforo estado);
Semaforo siguienteEstado(Semaforo estado);

#endif
