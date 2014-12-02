#include "pacienteABB.h"

Arbol arbCrear()
{
    Arbol arb = NULL;
    return arb;
}

void arbDestruir(Arbol &arb)
{
    delete arb;
    arb = NULL;
}

int arbContarNodos(Arbol arb)
{
    if (arb == NULL)
        return 0;
    else
        return 1 + (arbContarNodos(arb->hizq) + arbContarNodos(arb->hder));
}

BOOLEAN arbEsArbolVacio(Arbol arb)
{
    if (arb == NULL)
        return TRUE;
    return FALSE;
}

/* Pre-condicion nodo debe encontrarse cargado
    y Arbol no debe ser nulo
*/
void arbInsertarNodo(Arbol &arb, Paciente Pac)
{
    if(arb == NULL)
    {
        arb = new Nodo;
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


/*int conCantidadPacientesConApellido(Arbol arb,STRING apellido)
{
    if(arb==NULL)
        return 0;
    else if (streq((pacObtengoApellido(arb->Pac, Apellido)),apellido))
        return (1+ conCantidadPacientesConApellido(arb->hizq,apellido)+ conCantidadPacientesConApellido(arb->hder,apellido));
}

*/
