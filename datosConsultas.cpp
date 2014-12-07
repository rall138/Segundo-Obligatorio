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
    strCop(Descripcion, Con.Descripcion);
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

void Bajar_DatosConsulta (DatosConsulta Con, FILE * f )
{
//    Bajar_String (Con.Descripcion, f);
    fwrite (&Con.fecha, sizeof(Fecha), 1, f);
    fwrite (&Con.Evaluacion, sizeof(EVALUACION), 1, f);
    fwrite (&Con.Cedula, sizeof(long int), 1, f);
}


void Levantar_DatosConsulta(DatosConsulta &Con, FILE * f )
{
    strCrear(Con.Descripcion);
//    Levantar_String (Con.Descripcion, f);
    fread(&Con.fecha, sizeof(Fecha), 1, f);
    fread(&Con.Evaluacion, sizeof(EVALUACION), 1, f);
    fread(&Con.Cedula, sizeof(long int), 1, f);
}
