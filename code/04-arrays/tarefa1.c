// Configurações do mutirão. Não mexer.
#include "../macros_correcoes.h"
#define LABNUM "lab4-"
#define SOLUTIONFILE "tarefa1.c"


#include <stdio.h>

int main(int argc, char *argv[]) {

    /* TODO: conserte o código abaixo */
	long vetor[5];

	for (int i = 0; i < 5; i++) {
		scanf("%ld", &vetor[i]);
	}
	
	for(int i = 0; i < 5; i++) {
		if (vetor[i] % 2 == 0) {
			printf("Par! ");
		}
		printf("i: %d, vetor[i]: %ld\n", i, vetor[i]);
	}

    // Configurações do mutirão. Não mexer.
    #include "../telemetry.c"
	
	return 0;	
}
