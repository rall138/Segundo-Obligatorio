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

long int arbMenorCi(Arbol arb)
{
    long int menorCedula;
    if(arb != NULL)
    {
        if(arb->hizq == NULL)
            menorCedula = pacObtengoCedula(arb->Pac);
        else
            arbMenorCi(arb->hizq);
    }

    return menorCedula;
}

long int arbMayorCi(Arbol arb)
{
    long int mayorCedula;

    if(arb != NULL)
    {
        if(arb->hder == NULL)
            mayorCedula = pacObtengoCedula(arb->Pac);
        else
            arbMayorCi(arb->hder);
    }

    return mayorCedula;
}

void arblistarPacienteMedianteCedula(Arbol arb, long int cedulaIdentidad)
{
    if(arb != NULL)
    {
        if(pacObtengoCedula(arb->Pac) == cedulaIdentidad)
            pacMostrarPaciente(arb->Pac);
        else
        {
            if(pacObtengoCedula(arb->Pac) > cedulaIdentidad)
                 arblistarPacienteMedianteCedula(arb->hizq , cedulaIdentidad);
            else
                arblistarPacienteMedianteCedula(arb->hder , cedulaIdentidad);
        }
    }
}

void arblistarPacientesOrdenadosPorCedula(Arbol arb)
{
    if (arb != NULL)
    {
        if (arb->hizq != NULL)
            arblistarPacientesOrdenadosPorCedula(arb->hizq);

        pacMostrarPaciente(arb->Pac);

        if (arb->hder != NULL)
            arblistarPacientesOrdenadosPorCedula(arb->hder);
    }
}

BOOLEAN arbExistePaciente(Arbol arb, long int cedula)
{
    if (arb != NULL)
    {
        if (pacObtengoCedula(arb->Pac) == cedula)
            return TRUE;
        else if (cedula < pacObtengoCedula(arb->Pac))
            arbExistePaciente(arb->hizq, cedula);
        else if (cedula > pacObtengoCedula(arb->Pac))
            arbExistePaciente(arb->hder, cedula);

        return FALSE;
    }
}

int arbCantidadPacientesConMismoApellido(Arbol arb,STRING apellido)
{
    if (arb != NULL)
    {
        STRING auxApellido;
        strCrear(auxApellido);
        pacObtengoApellido(arb->Pac, auxApellido);
        if (strEq(arb->Pac.Apellido, apellido))
            return 1 + arbCantidadPacientesConMismoApellido(arb->hizq, apellido) +
                            arbCantidadPacientesConMismoApellido(arb->hder, apellido);
        else
            return arbCantidadPacientesConMismoApellido(arb->hizq, apellido) +
                arbCantidadPacientesConMismoApellido(arb->hder, apellido);
        strDestruir(auxApellido);
    }
}
