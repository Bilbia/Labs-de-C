#include <stdio.h>

int main(){
    int MAXW = 512, MAXH = 512;
    char str[2];
    int w, h, grey;

    fgets(str, 3, stdin);
    scanf("%d", &w);
    scanf("%d", &h);
    scanf("%d", &grey);

    printf("Dimensoes da imagem: %d x %d", w, h);


    return 0;
}