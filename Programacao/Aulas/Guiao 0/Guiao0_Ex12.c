#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAM 100

void Muda_Frase(char frase[]){

int i=0, tamanho=strlen(frase);

    while(frase[i]== ' ')
        i++;

    while(frase[i]!='\0'){

     if(frase[i]==' '){

         if(frase[i-1]!=' '){

             printf("\n");
             i++;

     }else
        i++;

  }else{

      printf("%c", frase[i]);
      i++;

  }   
 }
}

void main(){
   
char frase[TAM]="  Hoje e      Domingo!";
Muda_Frase(frase);
}
