#include <gtk/gtk.h>
#include "gui.h"
#include "menu.h"
#include "events.h"
#include <stdio.h>

GtkWidget *create_main_window() {
    GtkWidget *window;
    GtkWidget *vbox;
    GtkWidget *menubar;

    window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
    gtk_window_set_title(GTK_WINDOW(window), "Restaurante");
    gtk_window_set_position(GTK_WINDOW(window), GTK_WIN_POS_CENTER);

    vbox = gtk_vbox_new(FALSE, 0);
    gtk_container_add(GTK_CONTAINER(window), vbox);

    menubar = create_menu_bar();

    gtk_box_pack_start(GTK_BOX(vbox), menubar, FALSE, FALSE, 0);

    g_signal_connect(window, "destroy", G_CALLBACK(gtk_main_quit), NULL);

    return window;
}

GtkWidget *create_popup_window(char *title) {
    GtkWidget *window;
    window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
    gtk_window_set_title(GTK_WINDOW(window), title);
    gtk_container_set_border_width(GTK_CONTAINER(window), 10);
    return window;
}

void open_crear_reserva() {
    /*GtkWidget *window_reserva; */
    GtkWidget *table;
    /* etiquetas
    GtkWidget *lbl_nombre;
    GtkWidget *lbl_identificacion;
    GtkWidget *lbl_mesa;
    /* campos de texto
    GtkWidget *txt_nombre;
    GtkWidget *txt_identificacion;
    GtkWidget *txt_mesa;
    /* botones */
    GtkWidget *btn_ok;
    GtkWidget *btn_cancel;

    WindowReserva *wr = malloc(sizeof(WindowReserva));

    /* contruye ventana emergente */
    wr->window = create_popup_window("Crear Reserva");

    /* inicializa la tabla */
    table = gtk_table_new(4, 2, FALSE);

    /* inicializa etiquetas */
    wr->lbl_nombre = gtk_label_new("Nombre");
    wr->lbl_identificacion = gtk_label_new("Identificacion");
    wr->lbl_mesa = gtk_label_new("Numero de mesa");

    /* se agregan etiquetas a la tabla */
    gtk_table_attach(GTK_TABLE(table), wr->lbl_nombre, 0, 1, 0, 1,
                     GTK_FILL | GTK_SHRINK, GTK_FILL | GTK_SHRINK, 5, 5);
    gtk_table_attach(GTK_TABLE(table), wr->lbl_identificacion, 0, 1, 1, 2,
                     GTK_FILL | GTK_SHRINK, GTK_FILL | GTK_SHRINK, 5, 5);
    gtk_table_attach(GTK_TABLE(table), wr->lbl_mesa, 0, 1, 2, 3,
                     GTK_FILL | GTK_SHRINK, GTK_FILL | GTK_SHRINK, 5, 5);

    /* inicializa campos de texto */
    wr->txt_nombre = gtk_entry_new();
    wr->txt_identificacion = gtk_entry_new();
    wr->txt_mesa = gtk_entry_new();

    /* agrega campos de texto */
    gtk_table_attach(GTK_TABLE(table), wr->txt_nombre, 1, 2, 0, 1,
                     GTK_FILL | GTK_SHRINK, GTK_FILL | GTK_SHRINK, 5, 5);
    gtk_table_attach(GTK_TABLE(table), wr->txt_identificacion, 1, 2, 1, 2,
                     GTK_FILL | GTK_SHRINK, GTK_FILL | GTK_SHRINK, 5, 5);
    gtk_table_attach(GTK_TABLE(table), wr->txt_mesa, 1, 2, 2, 3,
                     GTK_FILL | GTK_SHRINK, GTK_FILL | GTK_SHRINK, 5, 5);

    /* inicializando botones */
    btn_ok = gtk_button_new_with_label("Guardar");
    btn_cancel = gtk_button_new_with_label("Cancelar");

    /* agregando botones */
    gtk_table_attach(GTK_TABLE(table), btn_ok, 2, 3, 0, 1,
                     GTK_FILL | GTK_SHRINK, GTK_FILL | GTK_SHRINK, 5, 5);
    gtk_table_attach(GTK_TABLE(table), btn_cancel, 2, 3, 1, 2,
                     GTK_FILL | GTK_SHRINK, GTK_FILL | GTK_SHRINK, 5, 5);

    /* eventos para los botones */
    g_signal_connect(G_OBJECT(btn_ok), "clicked", G_CALLBACK(guardar_reserva), wr);

    /* agrega la tabla a la ventana para mostrarla */
    gtk_container_add(GTK_CONTAINER(wr->window), table);

    gtk_widget_show_all(wr->window);
}

void open_editar_reserva() {
    printf("Abriendo editar reserva.\n");
}

void open_eliminar_reserva() {
    printf("Abriendo eliminar reserva.\n");
}
