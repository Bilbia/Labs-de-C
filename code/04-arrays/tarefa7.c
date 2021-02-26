#include <stdio.h>

double avg(double arr[], int n){
    double soma, media;
    for(int i=0; i<n; i++){
        soma += arr[i];
    }
    media = soma/n;
    return media;
}

int main(){
    int n;
    printf("Quantos elementos tem o vetor? : ");
    scanf("%d", &n);
    double arr[n];

    printf("Escreva valores para o vetor: ");
    for(int i = 0; i<n; i++){
        scanf("%lf", &arr[i]);
    }
    printf("Media do vetor: %f", avg(arr, n));

    return 0;
}