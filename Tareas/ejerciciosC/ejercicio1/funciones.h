#ifndef FUNCIONES_H
#define FUNCIONES_H

typedef enum {
    PAR,
    IMPAR
} TipoNumero;

typedef struct{
    int valor;
    TipoNumero tipo;
}Numero;

TipoNumero determinarTipo(int n);

#endif
