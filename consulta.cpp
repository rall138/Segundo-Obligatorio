#include "consulta.h"


void consCrear(ListaConsultas &Cons)
{
    Cons=NULL;
}

DatosConsulta consDevolverPrimero(ListaConsultas Cons)
{
    return Cons->datosConsulta;
}

BOOLEAN consVacia(ListaConsultas Cons)
{
    if(Cons==NULL)
        return TRUE;
    else
        return FALSE;
}


void consBorrarPrimero(ListaConsultas &Cons)
{
    ListaConsultas aux;
    aux=Cons;
    Cons=Cons->Sig;
    delete aux;
}

void consInsPrimero(ListaConsultas &Cons, DatosConsulta Con)
{
    ListaConsultas aux;
    aux=new Consulta;
    aux->datosConsulta=Con;
    aux->Sig=Cons;
    Cons=aux;
}
int conCantidadConsultasMayoresAFecha(ListaConsultas Cons, Fecha fecha)
{
    int cantCons=0;
    while (Cons!=NULL)
    {
        if(fecha.anio>Cons->datosConsulta.fecha.anio)
            cantCons++;
        if(fecha.anio == Cons->datosConsulta.fecha.anio)
        {
            if (fecha.mes>=Cons->datosConsulta.fecha.mes)
                cantCons++;
            if (fecha.mes == Cons->datosConsulta.fecha.mes)
                if (fecha.dia>=Cons->datosConsulta.fecha.dia)
                    cantCons++;
        }

        Cons=Cons->Sig;
    }

    return cantCons;
}

void conCantidadDeConsultasDeCadaTipo(ListaConsultas Cons)
{
    int cantSaludable=0,cantEnTratamiento=0,cantNecesitaProtesis=0;
    while(Cons!=NULL)
    {
       if(Cons->datosConsulta.Evaluacion=SALUDABLE)
            cantSaludable++;
       if(Cons->datosConsulta.Evaluacion=EN_TRATAMIENTO)
            cantEnTratamiento++;
       if(Cons->datosConsulta.Evaluacion=NECESITA_PROTESIS)
            cantNecesitaProtesis++;
        Cons=Cons->Sig;

    }
    printf("\nHay %d consultas tipo Saludable en el sistema",cantSaludable);
    printf("\nHay %d consultas tipo En Tratamiento en el sistema",cantEnTratamiento);
    printf("\nHay %d consultas tipo Necesita Protesis en el sistema",cantNecesitaProtesis);
}

/*

        4-12-14

*/
void consMostrarConsultas(ListaConsultas Cons)
{
   if (Cons != NULL)
   {
        printf("\nCedula: %ld", conObtengoCedula(Cons->datosConsulta));
        STRING descripcion;
        conObtengoDescripcion(Cons->datosConsulta, descripcion);
        strMostrar(descripcion);
        evalMostrar(conObtengoEvaluacion(Cons->datosConsulta));
        conObtengoFecha(Cons->datosConsulta);
        consMostrarConsultas(Cons->Sig);
    }
}

void Bajar_Consulta (ListaConsultas Cons , STRING nomArch)
{
    FILE * f = fopen (nomArch,"wb");
    while (Cons != NULL)
    {
        Bajar_DatosConsulta(Cons->datosConsulta, f);
        Cons = Cons->Sig;
    }
    fclose(f);
}

void Levantar_Consulta (ListaConsultas &Cons, STRING nomArch)
{
    FILE * f = fopen (nomArch,"rb");
    DatosConsulta buffer;
    Levantar_DatosConsulta (buffer, f);
    while (!feof(f))
        Levantar_DatosConsulta (Cons->datosConsulta, f);
    fclose(f);
}
