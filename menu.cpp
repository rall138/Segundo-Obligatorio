#include "menu.h"
#include <stdio.h>
void desplegar_menu_principal(int &opcion)
{
      printf("\n\n"
             "*======================================*\n"
             "+ -- Sistema gestor de Consultorio --  +\n"
             "+                                      +\n"
             "+ 1 - Registro de datos                +\n"
             "+ 2 - Listados                         +\n"
             "+ 3 - Consultas                        +\n"
             "+ 4 - Salir del programa               +\n"
             "+                                      +\n"
             "*======================================*");
             fflush(stdin);
      printf("\n\nIngrese la opcion: ");
      scanf("%d", &opcion);
}

void desplegar_menu_secundario_registro_datos(int &opcion)
{
    printf( "\n\n"
            "*=======================================================================*\n"
            "+      -------------- Menu Registro de datos --------------             +\n"
            "+                                                                       +\n"
            "+ 1. Ingresar al sistema los datos de un nuevo paciente.                +\n"
            "+                                                                       +\n"
            "+ 2. Registrar en el sistema la realizacion de una nueva consulta.      +\n"
            "+                                                                       +\n"
            "+ 3. Salir del menu                                                     +\n"
            "+                                                                       +\n"
            "*=======================================================================*\n");
            fflush(stdin);
    printf("\n\nIngrese la opcion: ");
    scanf("%d", &opcion);
}

void desplegar_menu_secundario_listados(int &opcion)
{
    printf( "\n\n"
            "*=======================================================================*\n"
            "+      -------------- Menu de Listados --------------                   +\n"
            "+                                                                       +\n"
            "+ 1. Listar todos los pacientes registrados en el sistema,              +\n"
            "+    ordenados por codigo de menor a mayor.                             +\n"
            "+                                                                       +\n"
            "+ 2. Dadas dos fechas, listar todas las consultas realizadas en ese     +\n"
            "+    rango de fechas, ordenadas cronologicamente por fecha de < a >     +\n"
            "+                                                                       +\n"
            "+ 3. Dada la cedula de un paciente, listar su historial de consultas    +\n"
            "+    ordenado cronologicamente.                                         +\n"
            "+                                                                       +\n"
            "+ 4. Salir del menu                                                     +\n"
            "+                                                                       +\n"
            "*=======================================================================*\n");
            fflush(stdin);
    printf("\n\nIngrese la opcion: ");
    scanf("%d", &opcion);
}
void desplegar_menu_secundario_consultas(int &opcion)
{
    printf( "\n\n"
            "*=======================================================================*\n"
            "+      -------------- Menu de Consultas --------------                  +\n"
            "+                                                                       +\n"
            "+ 1. Dada una fecha, contar cuantas consultas realizadas luego de esa   +\n"
            "+    fecha hay en el sistema.                                           +\n"
            "+                                                                       +\n"
            "+ 2. Saber cuantas consultas de cada tipo hay registradas en el sistema.+\n"
            "+                                                                       +\n"
            "+ 3. Dado un apellido, contar cuantos pacientes registrados con dicho   +\n"
            "+    apellido hay en el sistema.                                        +\n"
            "+                                                                       +\n"
            "+ 4. Obtener la cedula del paciente con mayor cantidad de consultas     +\n"
            "+    realizadas.                                                        +\n"
            "+                                                                       +\n"
            "+ 5.Devolver los datos del paciente con mayor cedula y del paciente     +\n"
            "+   con menor cedula.                                                   +\n"
            "+                                                                       +\n"
            "+ 6. Salir del menu                                                     +\n"
            "+                                                                       +\n"
            "*=======================================================================*\n");
            fflush(stdin);
    printf("\n\nIngrese la opcion: ");
    scanf("%d", &opcion);
}
