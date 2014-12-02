#include "fecha.h"

void fchMostrar(Fecha f)
{
    printf("%d", f.dia);
    printf("%d", f.mes);
    printf("%d\n", f.anio);
}

void fchCargar(Fecha &f)
{
    printf("Ingrese el dia");
    scanf("%d",&f.dia);
    printf("Ingrese el mes:");
    scanf("%d", &f.mes);
    printf("Ingrese el anio");
    scanf("%d", &f.anio);
}

int fchObtenerMes(Fecha f)
{
    return f.mes;
}

int fchObtenerDia(Fecha f)
{
    return f.dia;
}

int fchObtenerAnio(Fecha f)
{
    return f.anio;
}

BOOLEAN fchEsValida(Fecha f)
{
    BOOLEAN valida = FALSE;
    switch(f.mes)
    {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
          if(f.dia <= 31)
            valida = TRUE;
          break;
        case 4:
        case 6:
        case 9:
        case 11:
            if(f.dia <= 30)
                valida = TRUE;
            break;
        case 2:
            valida = fchEsValidaAnioBisiesto(f);
            break;
        default:
            valida = FALSE;
            break;
    }

    return valida;
}

BOOLEAN fchEsValidaAnioBisiesto(Fecha f)
{
    BOOLEAN valida = FALSE;
    switch(f.mes)
    {
        if(f.dia <= 29 && f.anio %4 == 0)
            valida=TRUE;
        else if (f.dia <=28)
            valida=TRUE;
    }
    return valida;
}
