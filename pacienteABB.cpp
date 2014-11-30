#include "pacienteABB.h"

Arbol arbCrear()
{
    Arbol arb = new Nodo;
    return arb;
}

void arbDestruir(Arbol &arb);
int arbContarNodos(Arbol arb);

BOOLEAN arbEsArbolVacio(Arbol arb);
void arbMostrar(Arbol arb);

/* Pre-condicion nodo debe encontrarse cargado
    y Arbol no debe ser nulo
*/
void arbInsertarNodo(Arbol &arb, Paciente Pac)
{
    if(arb == NULL)
    {
        arb = arbCrear();
        arb->Pac = Pac;
        arb->hder = NULL;
        arb->hizq = NULL;
    }
    else if (Pac.Cedula < arb->Pac.Cedula)
        arbInsertarNodo(arb->hizq, Pac);
    else
        arbInsertarNodo(arb->hder, Pac);
}

BOOLEAN pacEsArbolVacio(Arbol arb)
{
    return arb == NULL ? TRUE : FALSE;
}

void arbMostrar(Arbol arb)
{
    if(arb != NULL)
    {
        pacMostrarPaciente(arb->Pac);

        if(arb->hizq != NULL)
            arbMostrar(arb->hizq);

        if(arb->hder != NULL)
            arbMostrar(arb->hder);
    }
}

