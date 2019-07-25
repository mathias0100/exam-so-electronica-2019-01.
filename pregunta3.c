//Este codigo esta basado en "figura 5.1: calling fork()" del texto guia del curso Ostep 2019-1.Pagina 2, capitulo 5.

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main (int argc, char *argv[]) {
	printf("Prueba que el hijo se ejecuta luego del padre\n");
	int variable = fork();
	if (variable == 0) {
		//proceso hijo
		printf("Soy el proceso hijo, mi pid es: %d \n", (int) getpid());
//		printf(" Operativos\n");
	} else {
		//proceso padre
		printf("soy el proceso padre de %d, mi pid es: %d \n",variable, (int) getpid());
//		printf("Sistemas");
	}
	return 0;
}

