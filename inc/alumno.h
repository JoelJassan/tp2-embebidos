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

/**
 * @brief Define el tamaño de los campos de texto 
 * 
 * Se define el tamaño de los campos de texto de la estructura alumno_t @ref.
 */
#define FIELD_SIZE 50


/*---  Definitions  ---------------------------------------------------------------------------- */

/**
 * @brief Se define un tipo de dato nuevo, que es una estructura, "alumno_t".
 * Recibe apellido y nombre como 'char'. Recibe documento como 'uint32_t'.
 */
typedef struct {
    char     apellido[FIELD_SIZE];  //!< Almacena apellido del alumno
    char     nombre[FIELD_SIZE];    //!< Almacena nombre del alumno
    uint32_t documento;             //!< Almacena documento del aumno
} alumno_t;


/*---  Public Data Declaration  ---------------------------------------------------------------- */

/*---  Public Function Declaration  ------------------------------------------------------------ */

/**
* @brief Funcion para serializar los datos del alumno.
* Queda con formato "{"apellido":apellido,"nombre":nombre,"documento":1234567}"
* 
* @param alumno    puntero a alumno_t. 'const' para no editar el 'struct'
* @param cadena    puntero a la cadena
* @param espacio   espacio disponible en la cadena
* @return int      retorna -1 porque responde al if dentro de main
* @see             SerializarCadena() SerializarNumero()
*/
int Serializar(const alumno_t * alumno, char cadena[], uint32_t espacio);


/*---  End of File  ---------------------------------------------------------------------------- */
#endif