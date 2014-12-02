#include "paciente.h"
#include "pacienteABB.h"

int main()
{
    //Crear paciente
    Paciente pac = pacCrear();
    pacMostrarPaciente(pac);
    Arbol arb = arbCrear();
    arbInsertarNodo(arb, pac);
    arbMostrar(arb);
    return 0;
}
