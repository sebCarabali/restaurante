/**
 * >  En este archivo se incluiran las structuras globales de la aplicacion.
 *
 * > Autor: Sebastián Carabali(sebastiancc@unicauca.edu.co)
 * > Fecha: 27 de Noviembre de 2014
 */

#ifndef __TYPES_H__
#define __TYPES_H__

#include <gtk/gtk.h>
#include <glib.h>

typedef struct _Reserva Reserva;

struct _Reserva {
    char nombre_cliente[30];
    char identificacion_cliente[30];
    unsigned short numero_mesa;
    /** TODO añadir fecha. */
};

#endif // __TYPES_H__
