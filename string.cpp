#include "string.h"

void strCrear(STRING &str)
{
    str = new char[TAM];
    str[0] ='\0';
}

void strDestruir(STRING &str)
{
    delete[]str;
    str = NULL;
}

void strMostrar(STRING str)
{
    int index = 0;
    while (str[index] !='\0')
    {
        printf("%c",str[index]);
        index++;
    }
}

void strCargar(STRING &str)
{
    STRING aux;
    strCrear(aux);
    int i=0;
    char c;
    fflush(stdin);
    scanf(" %c",&c);
    while ((c!='\n') && (i<TAM))
    {
        aux[i]=c;
        i++;
        scanf("%c",&c);
    }
    aux[i]='\0';

    strCop(str,aux);
    strDestruir(aux);
}

void strCop(STRING &str1, STRING str2)
{
    int i = 0;
    int largo = strlar(str2) + 1;
    while (str2[i] != '\0')
    {
        str1[i] = str2[i];
        i++;
    }

    str1[i] = '\0';

}

BOOLEAN strEq(STRING str1,STRING str2)
{
    int i=0;
    BOOLEAN iguales = TRUE;
    while (iguales && (str1[i]!='\0') && (str2[i]!='\0'))
    {
        if (str1[i]!=str2[i])
            iguales = FALSE;
        i++;
    }

    if ((str1[i]!='\0') || (str2[i]!='\0'))
        iguales = FALSE;

    return iguales;
}

int strlar(STRING s)
{
    int i=0;
    while (s[i] != '\0')
        i++;
    return i;
}
