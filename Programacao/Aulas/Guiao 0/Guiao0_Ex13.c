#include <stdio.h>
#include <string.h>
#define TAM 100

int VerificaIgualdade(char string1[],char string2[],char string3[]){

int tamanho1 = strlen(string1), tamanho2 = strlen(string2), i;

    if(strcmp(string1,string2) == 0) 
        strcpy(string3,"Conteudo Igual!"); 
    else if(tamanho1 == tamanho2)
        strcpy(string3,"Tamanho Igual!");
    else if(strcmp(string1,string2) < 0){
        strcpy(string3,string1);
        strcat(string3,string2);
    }
    else{
        strcpy(string3,string2);
        strcat(string3,string1);
    }

    printf("%s",string3);

    return 0;
}

void main(){

char string1[TAM], string2[TAM], string3[TAM];

printf("String 1: ");
gets(string1);
printf("String 2: ");
gets(string2);

VerificaIgualdade(string1,string2,string3);
}