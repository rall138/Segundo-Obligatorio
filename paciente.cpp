#include "paciente.h"

Paciente pacCrear()
{
    printf("\n== Formulario de paciente ==");
    Paciente pac;
    printf("\nNombre: ");
    strCrear(pac.Nombre);
    strCargar(pac.Nombre);
    printf("Apellido: ");
    strCrear(pac.Apellido);
    strCargar(pac.Apellido);
    printf("Domicilio: ");
    strCrear(pac.Domicilio);
    strCargar(pac.Domicilio);
    printf("Cedula: ");
    scanf("%ld", &pac.Cedula);
    printf("Telefono: ");
    scanf("%ld", &pac.Telefono);
    return pac;
}

void pacMostrarPaciente(Paciente Pac)
{
    printf("\n== Datos de paciente ==");
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
