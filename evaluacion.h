#ifndef EVALUACION_H_INCLUDED
#define EVALUACION_H_INCLUDED
#include "string.h"

typedef enum {SALUDABLE, EN_TRATAMIENTO, NECESITA_PROTESIS} EVALUACION;

void evalMostrar(EVALUACION eval);
void evalCargar(EVALUACION &eval, int evalValue);

#endif
