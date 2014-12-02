#ifndef DATOSCONSULTAS_H_INCLUDED
#define DATOSCONSULTAS_H_INCLUDED
#include "evaluacion.h"
#include "fecha.h"

typedef struct
{
    STRING Descripcion;
    Fecha fecha;
    EVALUACION Evaluacion;
    long int Cedula;

}DatosConsulta;

void conCargarConsulta(DatosConsulta &Con);
void conObtengoDescripcion(DatosConsulta Con, STRING &Descripcion);
Fecha conObtengoFecha(DatosConsulta Con);
EVALUACION conObtengoEvaluacion(DatosConsulta Con);
long int conObtengoCedula(DatosConsulta Con);

#endif
