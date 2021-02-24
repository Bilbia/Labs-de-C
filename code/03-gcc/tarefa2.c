#include <stdio.h>

int main(int argc, char *argv[]) {

    int n1, n2;
    printf("Digite um numero: ");
    scanf("%d", &n1);
    printf("\nDigite outro: ");
    scanf("%d", &n2);

    if(n2 == 0){
        printf("\nO segundo numero nao pode ser zero");
    }
    else if (n1%n2==0){
        printf("\nO primeiro numero e multiplo do segundo");
    }
    else{
        printf("\nO primeiro numero nao e multiplo do segundo");
    }

    return 0;
}
