#include <stdio.h>
#include <math.h>

float DesvioPadrao(int n){

    int vetor[n];
    int i = 0;
    float soma = 0, media, desvio;

    for(i = 0; i < n; i++){
        printf("Insira valor para a posicao %d do array: ", i + 1);
        scanf("%d", &vetor[i]);
        soma += vetor[i];
    }

    media = (soma/n);

    for(i = 0; i < n; i++){
        soma = soma + (media - vetor[i]) * (media - vetor[i]);
        
    }

desvio = sqrt(soma/n);

    return desvio;
}


void main(){

int num = 0;

    printf("Insira numero de elementos: ");
     scanf("%d", &num);

    printf("\nDesvio padrao = %.4f\n", DesvioPadrao(num));
}