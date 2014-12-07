#ifndef ARCHIVOPACIENTE_H_INCLUDED
#define ARCHIVOPACIENTE_H_INCLUDED
#include "archivo.h"
#include "pacienteABB.h"

Paciente arcPacLevantarPaciente(FILE * archivo);
void arcPacBajarPaciente(Paciente pac);


#endif // ARCHIVOPACIENTE_H_INCLUDED
