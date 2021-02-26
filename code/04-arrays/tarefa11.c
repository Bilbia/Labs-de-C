#include <stdio.h>

int MAXW = 512, MAXH = 512;

void le_imagem(int mat[MAXH][MAXW], int w, int h){
    for (int col = 0; col<h; col++){
        for (int lin = 0; lin<w; lin++){
            scanf("%d", &mat[col][lin]);
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

    le_imagem(mat, w, h);

    printf("Dimensoes da imagem: %d x %d", w, h);


    return 0;
}