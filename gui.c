#include <gtk/gtk.h>
#include "gui.h"
#include "menu.h"
#include <stdio.h>

GtkWidget *create_main_window()
{
    GtkWidget *window;
    GtkWidget *vbox;
    GtkWidget *menubar;

    window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
    gtk_window_set_title(GTK_WINDOW(window), "Restaurante");

    vbox = gtk_vbox_new(FALSE, 0);
    gtk_container_add(GTK_CONTAINER(window), vbox);

    menubar = create_menu_bar();

    gtk_box_pack_start(GTK_BOX(vbox), menubar, FALSE, FALSE, 0);

    g_signal_connect(window, "destroy", G_CALLBACK(gtk_main_quit), NULL);

    return window;
}


void open_crear_reserva()
{
    printf("Abriendo crear reserva.\n");
}

void open_editar_reserva()
{
    printf("Abriendo editar reserva.\n");
}

void open_eliminar_reserva()
{
    printf("Abriendo eliminar reserva.\n");
}
