#include <stdio.h>
#include "types.h"

void save_reserva_in_file(Reserva *reserva)
{
    FILE *f = fopen("user_data/reservas.dat", "ab+");
    if(!ferror(f)) {
        fseek(f, 0, SEEK_END);
        fwrite(reserva, sizeof(Reserva), 1, f);
        fclose(f);
    }
}
