# Primer examen parcial del curso de Sistemas Operativos - Universidad del Valle
## Autor Mathias Alberto Castillo - 201745502

## [Pregunta 1A](pregunta1A.c)   [Pregunta 1B](pregunta1B.c)
Forma compilación:
-> gcc pregunta1A.c -o 1A -pthread

Forma Ejecución:
-> time ./1A <Valor>

Tiempo de ejecución 1A: 0,064s   0,059s   XX0,065sXX   XX0,056sXX   0,060s

Tiempo de ejecución 1B: XX1,938sXX   2,684s   XX2,905sXX   2,881s   2,840s
XX""XX = tiempo eliminado

El programa "B" se demora mas en tiempo en ejecución debido a que se debe abrir y cerrar el hilo cada vez que aumenta la variable compartida, mientras que en el programa "A" solo presenta un ciclo de apertura. 


## [Pregunta 2](pregunta2.c)




## [Pregunta 3](pregunta3.c)




## [Pregunta 4](pregunta4.c)




## [Pregunta 5](pregunta5.c)


