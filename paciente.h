#ifndef PACIENTE_H_INCLUDED
#define PACIENTE_H_INCLUDED
#include "string.h"

typedef struct
{

    long int Cedula;
    STRING Nombre;
    STRING Apellido;
    STRING Domicilio;
    long int Telefono;

}Paciente;


Paciente pacCrear();
long int pacObtengoCedula(Paciente Pac);
void pacObtengoNombre(Paciente Pac, STRING &Nombre);
void pacObtengoApellido(Paciente Pac, STRING &Apellido);
void pacObtengoDomicilio(Paciente Pac, STRING &Domicilio);
long int pacObtengoTelefono(Paciente Pac);
void pacMostrarPaciente(Paciente Pac);

#endif
