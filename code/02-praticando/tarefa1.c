// Configurações do mutirão. Não mexer.
#include "../macros_correcoes.h"
#define LABNUM "lab2-"
#define SOLUTIONFILE "tarefa1.c"


#include <stdio.h>

int main() {
    int s = 0;
    int i;

    i = 1;
    while(i <= 10) {
        s += i;
        i++;
    }

    printf("Resultado: %d\n", s);

    // Configurações do mutirão. Não mexer.
    #include "../telemetry.c"

    return 0;
}