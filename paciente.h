#ifndef PACIENTE_H_INCLUDED
#define PACIENTE_H_INCLUDED
#include "string.h"

typedef struct
{
    STRING Nombre;
    STRING Apellido;
    STRING Domicilio;
    long int Cedula;
    long int Telefono;

}Paciente;


Paciente pacCrear();
long int pacObtengoCedula(Paciente Pac);
void pacObtengoNombre(Paciente Pac, STRING &Nombre);
void pacObtengoApellido(Paciente Pac, STRING &Apellido);
void pacObtengoDomicilio(Paciente Pac, STRING &Domicilio);
long int pacObtengoTelefono(Paciente Pac);
void pacMostrarPaciente(Paciente Pac);
void Bajar_Paciente (Paciente Pac, FILE * f);
void Levantar_Paciente(Paciente &Pac);


#endif
