#include "string.h"
#include <stdio.h>

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
    int index = 0;
    scanf(" %c",&str[index]);
    while(str[index]!='\n' && index < TAM)
    {
        index++;
        scanf("%c",&str[index]);
    }

    str[index] ='\0';
}

void strcop(STRING &str1, STRING str2)
{
    int index = 0;
    while(str2[index] != '\0')
    {
        str1[index] = str2[index];
        index++;
    }

    str1[index - 1] = '\0';
}

BOOLEAN streq(STRING s1,STRING s2)
{
    int i=0;
    BOOLEAN iguales = TRUE;
    while (iguales && (s1[i]!='\0') && (s2[i]!='\0'))
    {
        if (s1[i]!=s2[i])
            iguales = FALSE;
        i++;
    }
    if ((s1[i]!='\0') || (s2[i]!='\0'))
        iguales = FALSE;

    return iguales;
}
