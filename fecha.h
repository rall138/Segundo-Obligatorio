#ifndef FECHAS_H_INCLUDED
#define FECHAS_H_INCLUDED
#include "boolean.h"

 typedef struct
 {

   int dia;
   int mes;
   int anio;

 }Fecha;

void fchMostrar(Fecha f);
void fchCargar(Fecha &f);
int fchObtenerMes(Fecha f);
int fchObtenerDia(Fecha f);
int fchObtenerAnio(Fecha f);
BOOLEAN fchEsValida(Fecha f);
BOOLEAN fchEsValidaAnioBisiesto(Fecha f);

#endif // FECHAS_H_INCLUDED
