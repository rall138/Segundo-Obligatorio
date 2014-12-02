#ifndef CONSULTAS_H_INCLUDED
#define CONSULTAS_H_INCLUDED
#include "consulta.h"

// Puntero de la colección dinámica de consultas

typedef Consulta * Consul;

Consul * consultas;

void consCrear(consultas &Cons, int cantidadElementos);
void consDestruir(consultas &Cons);
void consGrabarConsultasEnArchivo(consultas Cons);
void consObtenerConsultasDeArchivo(consultas &Cons);

int conCantidadConsultasMayoresAFecha(Consultas Cons, Fecha fecha);
void conCantidadDeConsultasDeCadaTipo(Consultas Cons);
int conCantidadPacientesConApellido(Consultas Cons);
long int conObtenerCedulaPacienteConMayorCantidadConsultas(Consultas Cons);
void conDatosPacientesConMayorMenorCedula(Consultas Cons);

#endif
