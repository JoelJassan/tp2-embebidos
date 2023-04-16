/*---  Code Information ------------------------------------------------------------------------ */
// Autor: Jassan, Joel
// Date: 15/04/2023
//
/*---------------------------------------------------------------------------------------------- */



/*---  Includes  ------------------------------------------------------------------------------- */
#include "alumno.h"
#include <stdio.h>

/*---  Macros and Definitions  ----------------------------------------------------------------- */

/*---  Private Data Declaration  --------------------------------------------------------------- */

/*---  Public Data Declaration  ---------------------------------------------------------------- */

/*---  Private Function Declaration  ----------------------------------------------------------- */

static int SerializarCadena();  

static int SerializarNumero(); 

/*---  Private Data Definition  ---------------------------------------------------------------- */

/*---  Public Data Definition  ----------------------------------------------------------------- */

/*---  Private Function Definition  ------------------------------------------------------------ */

/*---  Public Function Definition  ------------------------------------------------------------ */

/*---  Private Function Implementation  -------------------------------------------------------- */

static int SerializarCadena(const char *campo, const char *valor, char *cadena, int espacio) {
    return snprintf(cadena, espacio, "\"%s\":\"%s\",", campo, valor); 
        //sprintf escribe, pero en vez de en pantalla lo hace en una cadena
        //necesita el espacio. Y si se pasa, devuelve error
        //tambien pone un cero al final de la cadena
    //Por documentacion de funcion:
    //Devuelve la cantidad de caracteres (resultado), y valor negativo en caso de error
}


static int SerializarNumero(const char *campo, int valor, char *cadena, int espacio) {
    return snprintf(cadena, espacio, "\"%s\":\"%d\",", campo, valor); 
}

/*---  Public Function Implementation  --------------------------------------------------------- */

int Serializar(const alumno_t * alumno, char *cadena, uint32_t espacio) {
    int disponibles = espacio;
    int resultado;
    int largo = 0;

    *cadena = '{';   //cadena[0] = '{';  equivalentemente 
    cadena++;

    disponibles--;
    resultado = SerializarCadena("apellido",alumno->apellido, cadena, disponibles);

    if (resultado > 0){
        disponibles -= resultado;   //queda 1 espacio menos
        cadena += resultado;    //desplaza 1 posicion de memoria
        largo += resultado;
        resultado = SerializarCadena("nombre",alumno->nombre, cadena, disponibles);
    }
    if (resultado > 0){
        disponibles -= resultado; 
        cadena += resultado;
        resultado = SerializarNumero("documento",alumno->documento, cadena, disponibles);
    }
    if(resultado > 0){
        cadena += resultado;
        *(cadena - 1) = '}';  //cadena[resultado-1] = '}';  equivalentemente
        resultado = espacio - disponibles;  //esto es posible, porque se hacen todos los 'if' si en algun punto 'SerializarCadena' = -1
    }

    return resultado;
}   //Esta funcion hace {"apellido":apellido,"nombre":nombre,"documento":12345678}


/*---  End of File  ---------------------------------------------------------------------------- */
