#ifndef PACIENTEABB_H_INCLUDED
#define PACIENTEABB_H_INCLUDED
#include "paciente.h"

typedef struct Nodo_
{

    Paciente Pac;
    Nodo_ * hizq;
    Nodo_* hder;

}Nodo;

typedef Nodo * Arbol;

Arbol arbCrear();
void arbDestruir(Arbol &arb);
int arbContarNodos(Arbol arb);
void arbInsertarNodo(Arbol &arb, Paciente Pac);
BOOLEAN arbEsArbolVacio(Arbol arb);
void arbMostrar(Arbol arb);

int conCantidadPacientesConApellido(Arbol arb,STRING apellido);

#endif
