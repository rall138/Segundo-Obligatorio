#include "datosConsultas.h"

void conCargarConsulta(DatosConsulta &Con)
{

    fchCargar(Con.fecha);
    strCargar(Con.Descripcion);
    printf("\nIngrese cedula:");
    scanf("%ld", &Con.Cedula);

}

void conObtengoDescripcion(DatosConsulta Con, STRING &Descripcion)
{
    strcop(Descripcion, Con.Descripcion);
}

Fecha conObtengoFecha(DatosConsulta Con)
{
    return Con.fecha;
}

EVALUACION conObtengoEvaluacion(DatosConsulta Con)
{
    return Con.Evaluacion;
}

long int conObtengoCedula(DatosConsulta Con)
{
    return Con.Cedula;
}
