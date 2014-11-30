#include "boolean.h"
#include <stdio.h>

void cargarBoolean(BOOLEAN &boolean, int intBool)
{
    switch(intBool)
    {
        case 1:
            boolean = TRUE;
            break;
        case 2:
            boolean = FALSE;
            break;
    }
}

void mostrarBoolean(BOOLEAN boolean)
{
    switch(boolean)
    {
        case TRUE:
            printf("TRUE");
            break;
        case FALSE:
            printf("FALSE");
            break;
    }
}
