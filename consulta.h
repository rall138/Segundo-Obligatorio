#ifndef CONSULTA_H_INCLUDED
#define CONSULTA_H_INCLUDED
#include "evaluacion.h"
#include "fecha.h"

typedef struct
{

    STRING Descripcion;
    Fecha fecha;
    EVALUACION Evaluacion;
    long int Cedula;

}Consulta;

Consulta conCargarConsulta();
void conObtengoDescripcion(Consulta Con, STRING &Descripcion);
Fecha conObtengoFecha(Consulta Con);
EVALUACION conObtengoEvaluacion(Consulta Con);
long int conObtengoCedula(Consulta Con);

#endif
