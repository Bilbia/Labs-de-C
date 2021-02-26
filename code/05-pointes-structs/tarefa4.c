#include <stdio.h>
#include <math.h>

typedef struct {
    int x;
    int y;
} ponto;

int manhattan(ponto a, ponto b){
    int x = 0, y = 0, sum;
    x = abs(a.x - b.x);
    y = abs(a.y - b.y);
    sum = x+y;
    return sum; 
}

int main(){
    ponto a, b;
    printf("Digite as coordenadas x e y de dois pontos: \n");
    scanf("%d", &a.x);
    scanf("%d", &a.y);
    scanf("%d", &b.x);
    scanf("%d", &b.y);

    printf("Distancia Manhattan entre eles: %d \n", manhattan(a,b));

    return 0;
}