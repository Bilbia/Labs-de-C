// Configurações do mutirão. Não mexer.
#include "../macros_correcoes.h"
#define LABNUM "lab2-"
#define SOLUTIONFILE "tarefa7.c"


#include <stdio.h>

int main() {
    int n;
    printf("Digite um numero: ");
    scanf("%d", &n);
    

    for (int i=1; i<=n; i++){
        for(int space = i; space<n; space++){
            printf(" ");
        }
        for(int esq = 1; esq < i; esq++){
            printf("/");
        }
        printf("|");
        for(int dir = 1; dir < i; dir++){
            printf("\\");
        }
        printf("\n");
    }



    // Configurações do mutirão. Não mexer.
    #include "../telemetry.c"

    return 0;
}