#include <stdio.h>

void sum_sub(int a, int b, int *psum, int *psub){
    *psum = a+b;
    *psub = a-b;
}

int main(){
    int n1, n2;
    printf("Digite dois numeros: \n");
    scanf("%d", &n1);
    scanf("%d", &n2);

    int sum, sub;
    int *psum = &sum, *psub = &sub;

    sum_sub(n1, n2, psum, psub);
    printf("Soma: %d\n", sum);
    printf("Subtracao: %d\n", sub);

    return 0;
}