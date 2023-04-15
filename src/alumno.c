/*---  Code Information ------------------------------------------------------------------------ */
// Autor: Jassan, Joel
// Date: 
//
/*---------------------------------------------------------------------------------------------- */



/*---  Includes  ------------------------------------------------------------------------------- */
#include "alumno.h"

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

static int SerializarCadena() {

    //coment
    return 0;
}


static int SerializarNumero() {
    //coment
    return 0;
}

/*---  Public Function Implementation  --------------------------------------------------------- */

int Serializar(const alumno_t * alumno, char *cadena, uint32_t espacio) {
    int disponibles = espacio;
    int resultado;
    int largo = 0;

    *cadena = '{';   //cadena[0] = '{';  equivalentemente 

    disponibles--;
    resultado = SerializarCadena("apellido",&alumno->apellido, cadena, disponibles);

    if (resultado > 0){
        disponibles -= resultado;   //queda 1 espacio menos
        cadena += resultado;    //desplaza 1 posicion de memoria
        largo += resultado;
        resultado = SerializarCadena("nombre",&alumno->nombre, cadena, disponibles);
    }
    if (resultado > 0){
        disponibles -= resultado; 
        cadena += resultado;
        resultado = SerializarCadena("documento",alumno->documento, cadena, disponibles);
    }
    if(resultado > 0){
        cadena += resultado;
        *cadena = '}';  //cadena[espacio_total-espacio] = '}';  equivalentemente
        resultado = espacio - disponibles;  //esto es posible, porque se hacen todos los 'if' si en algun punto 'SerializarCadena' = -1
    }

    return resultado;
}   //Esta funcion hace {"apellido":apellido,"nombre":nombre,"documento":12345678}


/*---  End of File  ---------------------------------------------------------------------------- */
