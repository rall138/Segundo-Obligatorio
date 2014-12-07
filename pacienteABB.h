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
void arbMostrar(Arbol arb);
void arbDestruir(Arbol &arb);
int arbContarNodos(Arbol arb);
BOOLEAN arbEsArbolVacio(Arbol arb);
void arbInsertarNodo(Arbol &arb, Paciente Pac);
Arbol arbCargarMedianteArchivo();

/* == Manejo de pacientes == */
long int arbMenorCi(Arbol arb);
long int arbMayorCi(Arbol arb);
void arblistarPacienteMedianteCedula(Arbol arb, long int cedulaIdentidad);
void arblistarPacientesOrdenadosPorCedula(Arbol arb);
int arbCantidadPacientesConMismoApellido(Arbol arb,STRING apellido);
BOOLEAN arbExistePaciente(Arbol arb, long int cedula);

#endif
