#ifndef __GUI__
#define __GUI__
/*
 * Function:  create_main_window
 * -----------------------------
 * crea la ventana principal de la aplicacion.
 *
 * returns: objeto de la ventana principal GtkWindow
 */
GtkWidget *create_main_window();

/*
 * Function:  open_crear_reserva
 * -----------------------------
 *
 * Abre una ventana donde el usuario puede reservar una mesa del restaurante.
 */
void open_crear_reserva();

/*
 * Function:  open_editar_reserva
 * -----------------------------
 *
 * Abre una ventana donde el usuario puede editar una reserva.
 */
void open_editar_reserva();

/*
 * Function:  open_eliminar_reserva
 * -----------------------------
 *
 * Abre una ventana donde el usuario puede editar una reserva.
 */
void open_eliminar_reserva();



#endif // __GUI__
