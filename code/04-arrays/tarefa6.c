#include <stdio.h>

int main(){

    long mat[5][4] = {{1, 2, 3, 4}, {1, 2, 3, 4}, {1, 2, 3, 4}, {1, 2, 3, 4}, {1, 2, 3, 4}};
    // for (int i=0;i<5;i++){
    //     for (int o=0;o<4;o++){
    //         scanf("%ld", &mat[i][o]);
    //     }
    // }

    int maior_ind = 0;
    int maior_som = 0;
    for (int col=0;col<4;col++){    
        int soma=0;
        for (int lin=0;lin<5;lin++){
            soma+=mat[lin][col];
        }
        printf("Soma da coluna %d: %d\n", col+1, soma);
        if(soma>maior_som){
            maior_ind = col+1;
        }
    }
    printf("Coluna de maior valor: %d\n", maior_ind);
    
    return 0;
}