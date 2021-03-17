#include <stdio.h>

void calculaSoma(int tab[], int dim, int valor){

int i, j, k;

for(i=0;i<dim;i++){
    for(j=i+1;j<dim;j++){
        for(k=j+1;k<dim;k++){

if((tab[i]+tab[j]+tab[k])==valor)
    printf("%d %d %d\t",tab[i],tab[j],tab[k]);

   }
  } 
 }
}

void main(){

int vetor[]={1,-2,3,4,-5,6}, tam=6, val=8;
calculaSoma(vetor,tam,val);
}