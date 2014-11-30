#include "string.h"
#include <stdio.h>

void strCrear(STRING &str)
{
    str = new char[0];
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
    char caracter;
    scanf("%c",&caracter);
    while(caracter !='\n' && index < TAM)
    {
        str[index] = caracter;
        index++;
        scanf("%c",&caracter);
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
