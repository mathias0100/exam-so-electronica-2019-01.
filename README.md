# Primer examen parcial del curso de Sistemas Operativos - Universidad del Valle
## Autor Mathias Alberto Castillo - 201745502

## [Pregunta 1A](pregunta1A.c)   [Pregunta 1B](pregunta1B.c)
Forma compilación:
-> gcc pregunta1A.c -o 1A -pthread

Forma Ejecución:
-> time ./1A "Valor"

Argumento usado para la medición de los tiempos:6891624 

Tiempo de ejecución 1A: 0,064s   0,059s   0,060s

Tiempo de ejecución 1B: 2,684s   2,881s   2,840s


El programa "B" se demora mas en tiempo en ejecución debido a que se debe abrir y cerrar el hilo cada vez que aumenta la variable compartida, mientras que en el programa "A" solo presenta un ciclo de apertura. 


## [Pregunta 2](pregunta2.c)

Este programa contiene 2 hilos y estos hilos ejecutan una operación matematica con variables privadas en cada uno de los hilos, el primer hilo se encarga de la operación de división y el segundo hilo se encarga de la multiplicación. Todo el programa se trabaja con variables tipo float. 

Forma compilación:
-> gcc pregunta2.c -o 2 -pthread

Forma Ejecución:
-> ./2

## [Pregunta 3](pregunta3.c)
En este programa se garantiza que el proceso hijo siempre espere que su padre termine la ejecucion para finalizarse a si mismo. Lo probe con los comandos que estan comentados "//" para escribir: Sistemas Operativos, donde Sistemas es la palabra del padre y Operativos es la palabra del hijo. 

Forma compilación:
-> gcc pregunta3.c -o 3

Forma Ejecución:
-> ./3


## [Pregunta 4](process-run.py)
1. Run process-run.py with the following flags: -l 5:100,5:100. What should the CPU utilization be (e.g., the percent of time the CPU is in use?) Why do you know this? Use the -c and -p flags to see if you were right.

El uso de la CPU se encuentra al 100%, dado que ninguno de los dos procesos ejecutados tienen redireccionamiento; por lo que la CPU nunca estará en espera. 


2. Now run with these flags: ./process-run.py -l 4:100,1:0. These flags specify one process with 4 instructions (all to use the CPU), and one that simply issues an I/O and waits for it to be done. How long does it take to complete both processes? Use -c and -p to find out if you were right.

En total se completara en 10 ticks, el primer proceso se hara en 4 ticks y el segundo en 1 ticks, pero se agregaran ticks vacios al final de cada uno; esto porque la longitud predeterminada es de 5 ticks. 




## [Pregunta 5](pregunta5.c)


