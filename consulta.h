#ifndef CONSULTA_H_INCLUDED
#define CONSULTA_H_INCLUDED
#include "evaluacion.h"
#include "fecha.h"
#include "datosConsultas.h"

typedef struct nodo_l
{

    DatosConsulta datosConsulta;
    nodo_l * Sig;

}Consulta;

typedef Consulta * ListaConsultas;

void consCrear(ListaConsultas &Cons, int cantidadElementos);
BOOLEAN vacia(ListaConsultas Cons);
void consDestruir(ListaConsultas &Cons);
void consGrabarConsultasEnArchivo(ListaConsultas Cons);
void consObtenerConsultasDeArchivo(ListaConsultas &Cons);
void consMostrarConsultas(ListaConsultas Cons);

int conCantidadConsultasMayoresAFecha(ListaConsultas Cons, Fecha fecha);
void conCantidadDeConsultasDeCadaTipo(ListaConsultas Cons);

long int conObtenerCedulaPacienteConMayorCantidadConsultas(ListaConsultas Cons);
void conDatosPacientesConMayorMenorCedula(ListaConsultas Cons);

void Bajar_Consulta (ListaConsultas Cons , STRING nomArch);
void Levantar_Consulta (ListaConsultas &Cons, STRING nomArch);

#endif
