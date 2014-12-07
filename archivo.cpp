#include "archivo.h"

BOOLEAN arcVerificarExistenciaArchivo(STRING nomArch)
{
    FILE * archivo; BOOLEAN existe = FALSE;
    arcAbrirArchivo(nomArch, "rb", archivo);
    if (archivo != NULL)
        existe = TRUE;
    return existe;
}

void arcCrearArchivo(STRING nomArch)
{
    FILE * archivo;
    arcAbrirArchivo(nomArch, "wb", archivo);
    arcCerrarArchivo(archivo);
}
void arcAbrirArchivo(STRING nomArch, STRING mode, FILE * &archivo)
{
    archivo = fopen(nomArch, mode);
}
void arcCerrarArchivo(FILE * &archivo)
{
    fclose(archivo);
}

void arcBajarString(FILE * archivo, STRING str)
{
    int i = 0;
    while(str[i] != '\0')
    {
        fwrite(&str[i], sizeof(char), 1, archivo);
        i++;
    }

    fwrite(&str[i], sizeof(char), 1, archivo);
    strDestruir(str);
}

void arcLevantarString(FILE * archivo, STRING &str)
{
    int i = 0;
    STRING aux;strCrear(aux);
    fread (&aux[i], sizeof(char), 1, archivo);
    while (aux[i] != '\0')
    {
        i++;
        fread (&aux[i], sizeof(char), 1, archivo);
    }

    if(i > 0)
        strCop(str, aux);

    strDestruir(aux);
}

void arcBajarLong(FILE * archivo, int long value)
{
    fwrite(&value, sizeof(long int), 1, archivo);
}

int long arcLevantarLong(FILE * archivo)
{
    int long value;
    fread(&value, sizeof(int long), 1 ,archivo);
    return value;
}

BOOLEAN arcEsArchivoVacio(STRING nomArch)
{
    FILE * archivo; BOOLEAN esVacio = FALSE;
    arcAbrirArchivo(nomArch, "rb", archivo);
    fseek(archivo, 0, SEEK_END);
        if(ftell(archivo) != 0)
            esVacio = TRUE;
    arcCerrarArchivo(archivo);
    return esVacio;
}
