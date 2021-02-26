#include <stdio.h>

int MAXW = 512, MAXH = 512;

void le_imagem(int mat[MAXH][MAXW], int w, int h){
    for (int col = 0; col<h; col++){
        for (int lin = 0; lin<w; lin++){
            scanf("%d", &mat[col][lin]);
        }
    }
}

void escreve_imagem(int mat[MAXH][MAXW], int w, int h){
    for (int lin = 0; lin<h; lin++){
        for (int col = 0; col<w; col++){
            printf("%d\n", mat[lin][col]);
        }
    } 
}

void limiar(int mat[MAXH][MAXW], int w, int h, int lim){
    if (h > lim){
        for (int lin = lim; lin<h; lin++){
            for (int col = 0; col<w; col++){
                mat[lin][col] = 0;
            }
        }
    }
    if (w > lim){
        for (int lin = 0; lin<h; lin++){
            for (int col = lim; col<w; col++){
                mat[lin][col] = 0;
            }
        }
    }
}

int main(){
    
    char str[2];
    int w, h, grey;
    int mat[MAXH][MAXW];

    fgets(str, 3, stdin);
    scanf("%d", &w);
    scanf("%d", &h);
    scanf("%d", &grey);

    printf("%s\n", str);
    printf("%d %d\n", w, h);
    printf("%d\n", grey);

    le_imagem(mat, w, h);
    limiar(mat, w, h, 127);
    escreve_imagem(mat, w, h);


    return 0;
}