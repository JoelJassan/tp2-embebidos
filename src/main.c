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

int main(void) {    
    static const alumno_t alumno_1 = {
        .apellido = "Jassan",
        .nombre = "Joel",
        .documento = 41870435
    };  //static convierte la variable a global privada
        //const la pasa a flash, y no genera codigo
        //las comillas dobles ponen un CERO al final, las comillas simples no
    char cadena[128];     

    
    if(Serializar(& alumno_1,cadena, sizeof(cadena)) >= 0)  {
        printf("%s\n", cadena);
    }    //&: direccion de memoria de...
    else{
        printf("Error al serializar\n");
    };
    
    return 0;
}



/*---  End of File  ---------------------------------------------------------------------------- */
