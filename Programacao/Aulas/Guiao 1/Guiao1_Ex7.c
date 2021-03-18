#include <stdio.h>

void procura_dupla(int *tab, int tam, int *prim, int *seg){

int i;

for(i=1;i<tam;i++){

   if(*(tab+i)>*prim){
        
        *seg=*prim;
        *prim=*(tab+i);
   
    }else if((*(tab+i)>*seg) && (*(tab+i)!=*prim))
        *seg=*(tab+i);
 }
}

void main(){

int n=10, tab[10]={1,9,7,5,2,10,9,7,10,10}, primeiro=tab[0], segundo=tab[1];
procura_dupla(tab,n,&primeiro,&segundo);
printf("O maior elemento da tabela e %d\n",primeiro);
printf("O segundo maior elemento da tabela e %d\n",segundo);
}