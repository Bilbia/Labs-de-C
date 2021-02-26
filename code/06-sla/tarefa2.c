#include <stdio.h>

void per_area(int a, int b, int *pper, int *parea){
    *pper = 2*a + 2*b;
    *parea = a*b;
}

int main() {
    int n1, n2;
    printf("Digite dois numeros: \n");
    scanf("%d", &n1);
    scanf("%d", &n2);

    int per, area;
    int *pper = &per, *parea = &area;

    per_area(n1, n2, pper, parea);
    printf("Perimetro: %d\n", per);
    printf("Area: %d\n", area);

    return 0;
}