/*---  Header Information ---------------------------------------------------------------------- */
// Autor: Jassan, Joel
// Date: 15/04/2023
//
/*---------------------------------------------------------------------------------------------- */


#ifndef ALUMNO_H
#define ALUMNO_H

/*---  Includes  ------------------------------------------------------------------------------- */
#include <stdint.h>

/*---  Macros  --------------------------------------------------------------------------------- */
#define FIELD_SIZE 50

/*---  Definitions  ---------------------------------------------------------------------------- */

typedef struct {
    char     apellido[FIELD_SIZE];
    char     nombre[FIELD_SIZE];
    uint32_t documento;
} alumno_t; // tipo de dato estructura sin nombre. El tipo de dato es alumno_t

/*---  Public Data Declaration  ---------------------------------------------------------------- */

/*---  Public Function Declaration  ------------------------------------------------------------ */

int Serializar(const alumno_t * alumno, char cadena[], uint32_t espacio);
// alumno: puntero al tipo de dato alumno_t (paso direccion de la estructura)
// uso const para asegurar que no se edite la estructura, porque solo tomo los datos
// espacio: para validar si es suficiente el espacio



/*---  End of File  ---------------------------------------------------------------------------- */
#endif