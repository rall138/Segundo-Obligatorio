#include "evaluacion.h"

void evalMostrar(EVALUACION eval)
{
    switch(eval)
    {
        case SALUDABLE:
            printf("\nSaludable");
            break;
        case EN_TRATAMIENTO:
            printf("\nEn tratamiento");
            break;
        case NECESITA_PROTESIS:
            printf("\nNecesita protesis");
            break;
    }
}

void evalCargar(EVALUACION &eval, int evalValue)
{
    switch(evalValue)
    {
        case 0:
            eval = SALUDABLE;
            break;
        case 1:
            eval = EN_TRATAMIENTO;
            break;
        case 2:
            eval = NECESITA_PROTESIS;
            break;
    }
}
