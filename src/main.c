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
 * Aqui se establece el loop infinito.
 * @return Nada relevante
 */ 
int main(void) {
    
    /**
     * @brief Definicion de alumno_1
     * @note Estructura global (static) pasada a flash (const)
     * @note El uso de comillas dobles pone un cero al final de la cadena
     */
    static const alumno_t alumno_1 = {
        .apellido = "Jassan",   //!< Establece apellido del alumno
        .nombre = "Joel",       //!< Establece nombre del alumno
        .documento = 41870435   //!< Establece documento del alumno
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
