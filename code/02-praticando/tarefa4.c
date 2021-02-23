// Configurações do mutirão. Não mexer.
#include "../macros_correcoes.h"
#define LABNUM "lab2-"
#define SOLUTIONFILE "tarefa4.c"


#include <stdio.h>
#include <math.h>


// TODO: declare função modulo aqui. Veja abaixo como ela será usada
int modulo(int num){
    // usando uma funcao do math
    // int mod = abs(num);

    // na marra mesmo
    int mod;
    if (num < 0){
        mod = num *(-1);
    }
    else{
        mod = num;
    }
    return mod;
}

int main() {
    
    // assertEquals é uma função do mutirão que confere
    // se o segundo argumento é igual ao terceiro.
    // Neste caso, se ele checa a chamada de modulo retorna o valor esperado. 
    assertEquals("mod(34) = 34", modulo(34), 34);
    assertEquals("mod(-34) = 34", modulo(-34), 34);
    assertEquals("mod(0) = 0", modulo(0), 0);
    assertEquals("mod(1) = 1", modulo(1), 1);
    assertEquals("mod(13) = 13", modulo(-13), 13);

    printSummary

    // Configurações do mutirão. Não mexer.
    #include "../telemetry.c"

    return 0;
}