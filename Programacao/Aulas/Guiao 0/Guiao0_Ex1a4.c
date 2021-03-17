#include <stdio.h>
#define TAM 10

int maior_elemento(int v[], int n){

int i, maior=0;

for(i=0;i<n;i++)
    if(v[i]>maior)
        maior=v[i];

return maior;
}

int pos_maior(int v[], int n){

int valor = maior_elemento(v,n), i, pos;

for(i=0;i<n;i++)
    if(v[i]==valor)
        pos=i;

return pos;
} 

int maior_vezes(int v[], int n){

int cont=0, i, valor=maior_elemento(v, n);

for(i=0;i<n;i++)
    if(valor==v[i])
        cont++;

return cont;        
}

int mais_vezes(int v[], int n){

int cont=0, i, j, maior=0, cont_mais=0;

for(i=0;i<n;i++){

for(j=0;j<n;j++){

if(v[i]==v[j])
    cont++;

}

if(cont>cont_mais){

    cont_mais=cont;
    maior=v[i];

}else if(cont==cont_mais && v[i]>maior){

    maior=v[i];
    cont_mais=cont;

}

cont=0;
} 

return  maior;
}

void main(){

int vetor[]={6,4,9,1,2,7,8,7,3,8};

printf("O maior elemento -> %d\n",maior_elemento(vetor,TAM));
printf("A posicao do maior elemento -> %d\n",pos_maior(vetor,TAM));
printf("Quantidade de vezes que o maior elemento surge -> %d\n",maior_vezes(vetor, TAM));
printf("O maior elemento que surge mais vezes -> %d\n", mais_vezes(vetor, TAM));
}