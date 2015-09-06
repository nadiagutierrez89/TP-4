/*
============================================================================
* TP#4: Promediar.c dado como Caso de estudio 1- Promedio de lineas
* Autor: Nadia E. Gutierrez
* Fecha: 29/05/2015
 ============================================================================
 */

#include <stdio.h> /* getchar EOF feof perror printf */
#include <stdlib.h> /* EXIT_SUCCESS */

int main(void) {
	int nl; /* la cantidad de lineas */
	int nc; /* la cantidad de caracteres */
	int c; /* el caracter leido */
	for(nl = 0, nc = 0; ( c = getchar()) != EOF; ++nc)
		if(c == '\n')
			++nl;
	if( !feof(stdin) )
		perror("No se pudo seguir leyendo de la entrada debido a un error");
	printf("Longitud promedio: %.1f\n", nc / (float)nl );
	return EXIT_SUCCESS;
}
	