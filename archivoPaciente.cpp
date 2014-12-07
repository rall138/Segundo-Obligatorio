#include "archivoPaciente.h"

Paciente arcPacLevantarPaciente(FILE * archivo)
{
    Paciente paciente;
    strCrear(paciente.Nombre);
    strCrear(paciente.Apellido);
    strCrear(paciente.Domicilio);
    arcLevantarString(archivo, paciente.Nombre);
    arcLevantarString(archivo, paciente.Apellido);
    arcLevantarString(archivo, paciente.Domicilio);
    paciente.Cedula    = arcLevantarLong(archivo);
    paciente.Telefono  = arcLevantarLong(archivo);
    return paciente;
}

void arcPacBajarPaciente(Paciente pac)
{
    FILE * archivo;
    arcAbrirArchivo("Pacientes.dat", "a", archivo);
    arcBajarString(archivo, pac.Nombre);
    arcBajarString(archivo, pac.Apellido);
    arcBajarString(archivo, pac.Domicilio);
    arcBajarLong(archivo, pac.Cedula);
    arcBajarLong(archivo, pac.Telefono);
    arcCerrarArchivo(archivo);
}
