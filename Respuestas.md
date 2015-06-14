Caso de Estudio 1 - Promedio de líneas
Respuestas

1)La 1er expresión del FOR inicializa los contadores nueva linea y nuevo carácter en 0. La coma es un operador y dentro de la 1era expresión del FOR tiene un uso restringido permitiendo ejecutar más de operación en el mismo. Una expresión equivalente sería nl = nc = 0.

2)Se deben agregar los parentesis para definir la operación de asignación del "gecthar()" en "c". Ya que sino los agregamos, como la precedencia de "!=" es mayor a la de "=" primero compararía getchar() con EOF y eso lo asignaría a c.

3)

4)Definición de perror: void perror(const char *s)
perror(s) imprime s y un mensaje de error definido por la implantación, correspondiente al entero que esta en error, como si fuera:
	fprintf(stderr, "%s: %s\n", s, "mensaje de error")

