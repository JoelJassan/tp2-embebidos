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

/*---  Public Function Declaration  ------------------------------------------------------------ */

/*---  Private Data Definition  ---------------------------------------------------------------- */

/*---  Public Data Definition  ----------------------------------------------------------------- */

/*---  Private Function Definition  ------------------------------------------------------------ */

/*---  Public Function Definition  ------------------------------------------------------------ */

/*---  Private Function Implementation  -------------------------------------------------------- */

/*---  Public Function Implementation  --------------------------------------------------------- */


/**
 * @brief Funcion princial del codigo.
 * Serializa los datos del alumno_1 (datos en memoria), si es que puede.
 * @return Nada relevante. Se toma como resultado lo que se imprime en pantalla.
 */ 
int main(void) {

    static const alumno_t alumno_1 = {
        .apellido = "Jassan",
        .nombre = "Joel",    
        .documento = 41870435
    };
    char cadena[128];     

    // & representa la direccion de memoria de...
    if(Serializar(&alumno_1, cadena, sizeof(cadena)) >= 0) {
        printf("%s\n", cadena);
    }
    else{
        printf("Error al serializar\n");
    };
    
    return 0;
}


/*---  End of File  ---------------------------------------------------------------------------- */
