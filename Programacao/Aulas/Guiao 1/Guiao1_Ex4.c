#include <stdio.h>

void f(int *t, int tam, int *np, int *ni, int *maior, int *pos){

int i;

for(i=0;i<tam;i++){

    if(*(t+i)%2==0)
        (*np)++;
    else
        (*ni)++;

    if(*(t+i)>*maior){

        *maior=*(t+i);
        *pos=i;
  }
 }
}

void main(){

int n=10, npares=0, nimpares=0, maior, pos=0;
int tab[10]={1,3,7,5,2,10,9,7,7,1};
maior=tab[0];
f(tab,n,&npares,&nimpares,&maior,&pos);
printf("A tabela tem %d numeros pares e %d numeros impares\n",npares, nimpares);
printf("O maior valor e %d e esta na posicao %d\n",maior, pos);
}