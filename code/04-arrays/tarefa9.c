#include <stdio.h>

int main(){
    char str[200];
    printf("Escreva alguma coisa ai: ");
    fgets(str, 200, stdin);
    int i = 0, stop = 0;
    while(stop == 0){
        if (str[i] == '\0'){
            stop = 1;
        }
        else if (str[i]>=97 && str[i]<=122){
            
            str[i] -= 32;
        }
        i++;
    }

    printf("%s\n", str);

    return 0;
}