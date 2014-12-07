#ifndef ARCHIVO_H_INCLUDED
#define ARCHIVO_H_INCLUDED
#include "string.h"

void arcAbrirArchivo(STRING nomArch, STRING mode, FILE * &archivo);
void arcCerrarArchivo(FILE * &archivo);
BOOLEAN arcVerificarExistenciaArchivo(STRING nomArch);
void arcCrearArchivo(STRING nomArch);
void arcBajarString(FILE * archivo, STRING str);
void arcBajarLong(FILE * archivo, int long value);
void arcLevantarString(FILE * archivo, STRING &str);
int long arcLevantarLong(FILE * archivo);
BOOLEAN arcEsArchivoVacio(FILE * archivo);

#endif // ARCHIVO_H_INCLUDED
