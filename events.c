#include <gtk/gtk.h>
#include <stdlib.h>
#include <stdio.h>
#include "events.h"
#include "gui.h"
#include "types.h"

void guardar_reserva(GtkWidget *widget, WindowReserva *wr)
{
    printf("Guardando reserva\n");
    /* creando el objeto de reserva */
    Reserva *re = malloc(sizeof(Reserva));

    /* obteniendo datos de los campos de texto */
    re->nombre_cliente = gtk_entry_get_text(GTK_ENTRY(wr->txt_nombre));
    re->identificacion_cliente = gtk_entry_get_text(GTK_ENTRY(wr->txt_identificacion));
    re->n_mesa = atoi(gtk_entry_get_text(GTK_ENTRY(wr->txt_mesa)));
    printf("Reserva exitosa: %s %s %d\n", re->nombre_cliente, re->identificacion_cliente, re->n_mesa);

    /* limpiando campos de texto */
    gtk_entry_set_text(GTK_ENTRY(wr->txt_nombre), "");
    gtk_entry_set_text(GTK_ENTRY(wr->txt_identificacion), "");
    gtk_entry_set_text(GTK_ENTRY(wr->txt_mesa), "");


    gtk_widget_destroy(wr->window);
    /* TODO guardar en archivo */
    free(wr);
    free(re);
    printf("Reserva guardada");
}
