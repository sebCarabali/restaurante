#ifndef __GUI__
#define __GUI__

typedef struct _WindowReserva WindowReserva;

struct _WindowReserva
{
    GtkWidget *window;
    GtkWidget *lbl_nombre;
    GtkWidget *lbl_identificacion;
    GtkWidget *lbl_mesa;
    GtkWidget *txt_nombre;
    GtkWidget *txt_identificacion;
    GtkWidget *txt_mesa;
};

/*
 * Function:  create_main_window
 * -----------------------------
 * crea la ventana principal de la aplicacion.
 *
 * returns: objeto de la ventana principal GtkWindow
 */
GtkWidget *create_main_window();

/*
 * Function:  create_popup_window
 * -----------------------------
 * crea una ventana emergente.
 *
 * @param char* titulo de la ventana.
 * @author Sebastian Carabali (sebastiancc@unicauca.edu.co)
 * @date 2 de Diciembre de 2014.
 * returns: objeto de la ventana principal GtkWindow
 */
GtkWidget *create_popup_window(char *);

/* Menu de reserva */

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
