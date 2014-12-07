#include "archivoPacientesABB.h"

Arbol arcPacLevantarPacientes()
{
    Arbol arb = arbCrear();
    Paciente paciente;

    FILE * archivo;
    arcAbrirArchivo("Pacientes.dat", "r", archivo);
    while (!feof(archivo))
    {
        paciente = arcPacLevantarPaciente(archivo);
        if (strlar(paciente.Nombre) > 0)
            arbInsertarNodo(arb, paciente);
    }

    arcCerrarArchivo(archivo);
    return arb;
}

void arcPacBajarPacientes(Arbol pacs)
{
    if(pacs != NULL)
    {
        arcPacBajarPaciente(pacs->Pac);

        if (pacs->hizq != NULL)
            arcPacBajarPacientes(pacs->hizq);

        if (pacs->hder != NULL)
            arcPacBajarPacientes(pacs->hder);

    }
}
