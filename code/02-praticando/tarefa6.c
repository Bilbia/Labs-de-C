// Configurações do mutirão. Não mexer.
#include "../macros_correcoes.h"
#define LABNUM "lab2-"
#define SOLUTIONFILE "tarefa6.c"


#include <stdio.h>



int main() {
    int n;
    printf("Digite um numero: ");
    scanf("%d", &n);
    int i;

    // versao for
    // for (i=1; i<=n; i++){
    //     if(i%3 == 0){
    //         if(i%5 == 0){
    //             printf("por tres e por cinco\n");
    //         }
    //         else{
    //             printf("apenas por tres\n");
    //         }
    //     }
    //     else if(i%5 == 0){
    //         printf("apenas por cinco\n");
    //     }
    //     else{
    //         printf("nenhum\n");
    //     }
    // }

    // versao while
    i = 1;
    while(i<=n){
        if(i%3 == 0){
            if(i%5 == 0){
                printf("por tres e por cinco\n");
            }
            else{
                printf("apenas por tres\n");
            }
        }
        else if(i%5 == 0){
            printf("apenas por cinco\n");
        }
        else{
            printf("nenhum\n");
        }
        i++;
    }

    // Configurações do mutirão. Não mexer.
    #include "../telemetry.c"

    return 0;
}