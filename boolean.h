#ifndef BOOLEAN_H_INCLUDED
#define BOOLEAN_H_INCLUDED

#include <stdio.h>

typedef enum {FALSE,TRUE} BOOLEAN;

void cargarBoolean(BOOLEAN &boolean, int intBool);
void mostrarBoolean(BOOLEAN boolean);

#endif // BOOLEAN_H_INCLUDED
