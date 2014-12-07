#include "archivoPacientesABB.h"
#include "consulta.h"
#include "menu.h"


/*== Registro de datos ==*/
void PrimerOpcionMenu(int &opcion, Arbol arbol)
{

    Paciente paciente;
    DatosConsulta datCons;

    while (opcion != 3)
    {
        desplegar_menu_secundario_registro_datos(opcion);
        switch (opcion)
        {
            case 1:
                // Creamos el paciente y verificamos la inserción de los datos para evitar duplicidad
                paciente = pacCrear();
                if (!arbExistePaciente(arbol, pacObtengoCedula(paciente)))
                {
                    arbInsertarNodo(arbol, paciente);
                    arcPacBajarPaciente(paciente);
                }
                else
                    printf("\nEl paciente que intenta ingresar ya existe");
                break;
            case 2:
                conCargarConsulta(datCons);
                break;
            case 3:
                break;
            default: printf("\nLa opcion ingresada no es correcta, intente nuevamente:");
                     desplegar_menu_secundario_registro_datos(opcion);
        }
    }

    desplegar_menu_principal(opcion);
}

void SegundaOpcionMenu(int &opcion, Arbol arbol)
{
    while (opcion != 4)
    {
        desplegar_menu_secundario_listados(opcion);
        switch (opcion)
        {
            case 1:
                arblistarPacientesOrdenadosPorCedula(arbol);
                break;
            case 2:
                break;
            case 3:
                break;
            case 4:
                break;
            default: printf("\nLa opcion ingresada no es correcta, intente nuevamente:");
                     desplegar_menu_secundario_listados(opcion);
                break;
        }
    }

    desplegar_menu_principal(opcion);
}

void TerceraOpcionMenu(int &opcion, Arbol arbol)
{
    STRING apellido;
     while (opcion != 6)
    {
        desplegar_menu_secundario_consultas(opcion);
        switch (opcion)
        {
            case 1:
                break;
            case 2:
                break;
            case 3:
                strCrear(apellido);
                printf("\nIngrese el apellido a verificar: ");
                strCargar(apellido);
                printf("\nCantidad de personas con mismo apellido: %d",
                    arbCantidadPacientesConMismoApellido(arbol, apellido));
                break;
            case 4:
                break;
            case 5:
                arblistarPacienteMedianteCedula(arbol, arbMayorCi(arbol));
                break;
            case 6:
                break;
            default: printf("\nLa opcion ingresada no es correcta, intente nuevamente:");
                     desplegar_menu_secundario_consultas(opcion);
        }
    }

    strDestruir(apellido);
    desplegar_menu_principal(opcion);
}

int main()
{
    if (!arcVerificarExistenciaArchivo("Pacientes.dat"))
        arcCrearArchivo("Pacientes.dat");

    if (!arcVerificarExistenciaArchivo("Consultas.dat"))
        arcCrearArchivo("Consultas.dat");

    Arbol arbol = arcPacLevantarPacientes();

    int opcion;
    desplegar_menu_principal(opcion);
    while (opcion != 4)
    {
        switch (opcion)
        {
            case 1:
                PrimerOpcionMenu(opcion, arbol);
                break;
            case 2:
                SegundaOpcionMenu(opcion, arbol);
                break;
            case 3:
                TerceraOpcionMenu(opcion, arbol);
                break;
            case 4:
                break;
            default: printf("\nLa opcion ingresada no es correcta, intente nuevamente");
                     desplegar_menu_principal(opcion);
        }
    }

    return 0;
}
