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

typedef struct _Plato Plato; // Representa los platos del menu.
typedef struct _Menu Menu; // Representa el menu del restaurante por día
typedef struct _Mesa Mesa; // Representa una mesa del restaurante
typedef struct _Restaurante Restaurante; // Representa el restaurante
typedef struct _Orden Orden;

enum EstadoMesa { DISPONIBLE = 1, RESERVADA, OCUPADA } ;

struct _Plato {
    GString *nombre; // Nombre del plato
    GdkPixbuf *imagen; // Imagen del plato
};

struct _Menu {
    gushort dia; // Dáa en que se va a servir el menu
    GList *platos; // Lista de platos del dáa
};

struct _Mesa {
    GList *platos; // Platos ordenados en la mesa
    gboolean reservada;
    gboolean ocupada;
};

struct _Restaurante {
    GList *mesas;
    GString *nombre;
    GString *direccion;
    gushort estrellas;
    gushort numeroMesas;
};

#endif // __TYPES_H__
