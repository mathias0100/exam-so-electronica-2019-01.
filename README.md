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




## [Pregunta 3](pregunta3.c)




## [Pregunta 4](process-run.py)
1. Run process-run.py with the following flags: -l 5:100,5:100. What should the CPU utilization be (e.g., the percent of time the CPU is in use?) Why do you know this? Use the -c and -p flags to see if you were right.

El uso de la CPU se encuentra al 100%, dado que ninguno de los dos procesos ejecutados tienen redireccionamiento; por lo que la CPU nunca estará en espera. 


2. Now run with these flags: ./process-run.py -l 4:100,1:0. These flags specify one process with 4 instructions (all to use the CPU), and one that simply issues an I/O and waits for it to be done. How long does it take to complete both processes? Use -c and -p to find out if you were right.

En total se completara en 10 ticks, el primer proceso se hara en 4 ticks y el segundo en 1 ticks, pero se agregaran ticks vacios al final de cada uno; esto porque la longitud predeterminada es de 5 ticks. 




## [Pregunta 5](pregunta5.c)


