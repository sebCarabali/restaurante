#include <gtk/gtk.h>
#include "gui.h"
#include "menu.h"

GtkWidget *create_menu_reservas()
{
    GtkWidget *menu_reserva;
    GtkWidget *submenu_reserva;
    GtkWidget *crear_item, *eliminar_item, *editar_item;


    menu_reserva = gtk_menu_item_new_with_label("Reservas");

    /* submenu de reservas */
    submenu_reserva = gtk_menu_new();
    gtk_menu_item_set_submenu(GTK_MENU_ITEM(menu_reserva), submenu_reserva);

    /* crear reserva */
    crear_item = gtk_menu_item_new_with_label("Crear");
    editar_item = gtk_menu_item_new_with_label("Editar");
    eliminar_item = gtk_menu_item_new_with_label("Eliminar");

    /* Se añaden al submenu */
    gtk_menu_shell_append(GTK_MENU_SHELL(submenu_reserva), crear_item);
    gtk_menu_shell_append(GTK_MENU_SHELL(submenu_reserva), editar_item);
    gtk_menu_shell_append(GTK_MENU_SHELL(submenu_reserva), eliminar_item);

    /* signals */
    g_signal_connect(G_OBJECT(crear_item), "activate", G_CALLBACK(open_crear_reserva), NULL);
    g_signal_connect(G_OBJECT(editar_item), "activate", G_CALLBACK(open_editar_reserva), NULL);
    g_signal_connect(G_OBJECT(eliminar_item), "activate", G_CALLBACK(open_eliminar_reserva), NULL);

    return menu_reserva;
}

GtkWidget *create_menu_bar()
{
    GtkWidget *menubar;

    /* creamos la barra de menu */
    menubar = gtk_menu_bar_new();

    /* añade el menu de reservas */
    gtk_menu_shell_append(GTK_MENU_SHELL(menubar), create_menu_reservas());


    return menubar;
}
