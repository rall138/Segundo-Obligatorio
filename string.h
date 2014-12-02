#ifndef STRING_H_INCLUDED
#define STRING_H_INCLUDED
#include <stdio.h>
#include "boolean.h"

const int TAM = 80;

typedef char * STRING;

void strCrear(STRING &str);
void strDestruir(STRING &str);
void strMostrar(STRING str);
void strCargar(STRING &str);
void strcop(STRING &str1, STRING str2);
BOOLEAN streq(STRING s1,STRING s2);

#endif // STRING_H_INCLUDED
