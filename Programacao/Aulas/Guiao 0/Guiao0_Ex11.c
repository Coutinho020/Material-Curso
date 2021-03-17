#include <stdio.h>
#include <string.h>
# define TAM 100

void InverterFrase(char frase[]){

int i, tamanho = strlen(frase);

for(i=tamanho-1;i>=0;i--){

    printf("%c",frase[i]);

 }
 printf("\n");
}


void main(){

char frase[TAM]="Hoje e Domingo!";
InverterFrase(frase);
}