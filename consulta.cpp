#include "consulta.h"

/*BOOLEAN vacia(ListaConsultas Cons)
{
    if(Cons==NULL)
        return TRUE;
    else
        return FALSE;
}

int conCantidadConsultasMayoresAFecha(ListaConsultas Cons, Fecha fecha)
{
    int cantCons=0;
    while (Cons!=NULL)
    {
        if(fecha.anio>Cons->info.fecha.anio)
            cantCons++;
        if(fecha.anio == Cons->info.fecha.anio)
        {
            if (fecha.mes>=Cons->info.fecha.mes)
                cantCons++;
            if (fecha.mes == Cons->info.fecha.mes)
                if (fecha.dia>=Cons->info.fecha.dia)
                    cantCons++;
        }

        Cons=Cons->sig;
    }

    return cantCons;
}

void conCantidadDeConsultasDeCadaTipo(ListaConsultas Cons)
{
    int cantSaludable=0,cantEnTratamiento=0,cantNecesitaProtesis=0;
    while(Cons!=NULL)
    {
       if(Cons->info.Evaluacion=SALUDABLE)
            cantSaludable++;
       if(Cons->info.Evaluacion=EN_TRATAMIENTO)
            cantEnTratamiento++;
       if(Cons->info.Evaluacion=NECESITA_PROTESIS)
            cantNecesitaProtesis++;
        Cons=Cons->sig;

    }
}

*/
