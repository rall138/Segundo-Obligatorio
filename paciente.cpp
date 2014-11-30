#include "paciente.h"

Paciente pacCrear()
{
    Paciente pac;
    printf("\nIngrese el nombre:");
    strCargar(pac.Nombre);
    printf("\nIngrese el apellido:");
    strCargar(pac.Apellido);
    printf("\nIngrese el domicilio:");
    strCargar(pac.Domicilio);
    printf("\nIngrese cedula:");
    scanf("%ld", &pac.Cedula);
    printf("\nIngrese telefono:");
    scanf("%ld", &pac.Telefono);
    return pac;
}

void pacMostrarPaciente(Paciente Pac)
{
    printf("\nNombre: ");
    strMostrar(Pac.Nombre);
    printf("\nApellido: ");
    strMostrar(Pac.Apellido);
    printf("\nDomicilio: ");
    strMostrar(Pac.Domicilio);
    printf("\nCedula: %ld", Pac.Cedula);
    printf("\nTelefono: %ld", Pac.Telefono);
}

long int pacObtengoCedula(Paciente Pac)
{
    return Pac.Cedula;
}

void pacObtengoNombre(Paciente Pac, STRING &Nombre)
{
    strcop(Pac.Nombre, Nombre);
}

void pacObtengoApellido(Paciente Pac, STRING &Apellido)
{
    strcop(Pac.Apellido, Apellido);
}

void pacObtengoDomicilio(Paciente Pac, STRING &Domicilio)
{
    strcop(Pac.Domicilio, Domicilio);
}

long int pacObtengoTelefono(Paciente Pac)
{
    return Pac.Telefono;
}
