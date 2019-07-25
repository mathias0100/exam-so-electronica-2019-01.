//codigo tomado de la actividad desarrollada en la clase del 06/06/2019 y posteriormente utilizado en la tarea 1//

#include <stdio.h>
#include <stdlib.h>
#include "common.h"
#include "common_threads.h"
#include "mycommon.h"
#include <pthread.h>
#include <unistd.h>

volatile float v = 0;
pthread_mutex_t puerta;

void *division() {
    float z = 25;
    float y = 350;
    cerrar_puerta(puerta);
    v=(z/y);
    abrir_puerta(puerta);
    return 0;
}

void *multiplicacion() {
    float x = 1250;
    cerrar_puerta(puerta);
    sleep(2);
    v=(x*v);
    abrir_puerta(puerta);
    return 0;
}

int main() {
    crear_puerta(puerta);
    pthread_t p1, p2;
    Pthread_create(&p1, NULL, division, NULL);
    Pthread_create(&p2, NULL, multiplicacion, NULL);
    Pthread_join(p1, NULL);
    Pthread_join(p2, NULL);
    printf("Resultado de la operación   : %.6f\n", v);

    destruir_puerta(puerta);

    return 0;


}

