#include <stdio.h>
#define TAM 10

int pesquisa_valor(int v[], int n, int val){

int i;

for(i=0;i<n;i++)
    if(v[i]==val)
        return 1;
    
return 0; 
}

void main(){

int vetor[]={1,5,8,10,14,15,19,22,27,30}, valor, resposta;

printf("Valor -> ");
scanf("%d", &valor);

resposta=pesquisa_valor(vetor,TAM,valor);

if(resposta==1){

printf("O valor esta na tabela!!!\n");

}else{

    printf("O valor nao esta na tabela!!!\n");

}
}