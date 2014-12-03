#include <gtk/gtk.h>
#include "events.h"
#include "gui.h"
#include <stdio.h>

void guardar_reserva(GtkWidget *widget, WindowReserva *wr)
{
    printf("Guardando reserva\n");
    char *nombre = gtk_entry_get_text(GTK_ENTRY(wr->txt_nombre));
    printf("Nombre: %s\n", nombre);
}
