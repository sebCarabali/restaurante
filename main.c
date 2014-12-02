#include <stdlib.h>
#include <gtk/gtk.h>
#include "types.h"
#include "gui.h"

int main (int argc, char *argv[])
{
    GtkWidget *window;

    gtk_init(&argc, &argv);

    window = create_main_window();
    gtk_widget_show_all(window);

    gtk_main();
    return 0;
}
