#include "paciente.h"
#include "pacienteABB.h"

int main()
{
    /* Crear paciente */
    Paciente pac = pacCrear();
    Arbol arb = arbCrear();

    /* Insercion de nodo al arbol */
    arbInsertarNodo(arb, pac);

    /* Conteo de nodo existentes */
    printf("((Cantidad de nodos: %d))", arbContarNodos(arb));
    arbMostrar(arb);

    arbDestruir(arb);

    return 0;
}
