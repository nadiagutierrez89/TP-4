Caso de Estudio 1 - Promedio de l�neas
Respuestas

1)La 1er expresi�n del FOR inicializa los contadores nueva linea y nuevo car�cter en 0. La coma es un operador y dentro de la 1era expresi�n del FOR tiene un uso restringido permitiendo ejecutar m�s de operaci�n en el mismo. Una expresi�n equivalente ser�a nl = nc = 0.

2)Se deben agregar los parentesis para definir la operaci�n de asignaci�n del "gecthar()" en "c". Ya que sino los agregamos, como la precedencia de "!=" es mayor a la de "=" primero comparar�a getchar() con EOF y eso lo asignar�a a c.

3)

4)Definici�n de perror: void perror(const char *s)
perror(s) imprime s y un mensaje de error definido por la implantaci�n, correspondiente al entero que esta en error, como si fuera:
	fprintf(stderr, "%s: %s\n", s, "mensaje de error")

