#include <stdio.h>
#include <string.h>
#define TAM 100

void VerificaIgualdade(char string1[],char string2[],char string3[]){

int tamanho1 = strlen(string1), tamanho2 = strlen(string2), i;

if(strcmp(string1,string2)==0){

    string3[TAM]='Conteudo Igual!';
    puts(string3);

}else if(tamanho1 == tamanho2){

        string3[TAM]='Tamanho Igual!';
        puts(string3);

 }else
    strcpy(string3, strcat(string1, string2));
    puts(string3);
}

void main(){

char string1[TAM], string2[TAM], string3[TAM];

printf("String 1: ");
gets(string1);
printf("String 2: ");
gets(string2);

VerificaIgualdade(string1,string2,string3);
}