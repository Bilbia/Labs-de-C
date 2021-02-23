// Configurações do mutirão. Não mexer.
#include "../macros_correcoes.h"
#define LABNUM "lab2-"
#define SOLUTIONFILE "tarefa2.c"

#include <stdio.h>

int main() {
    double s = 0;
    int i;
    i = 1;
    while (i <= 10) {
        s += i / 2.0;
        i++;
    }

    printf("Resultado: %lf", s);

    // Configurações do mutirão. Não mexer.
    #include "../telemetry.c"

    return 0;
}