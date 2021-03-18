#include <stdio.h>

void roda_variavel(float *primeira, float *segunda, float *terceira){

    float temp;
    temp = *segunda;
    *segunda = *primeira;
    *primeira = *terceira;
    *terceira = temp;
}


void main(){
float x=1.0, y=2.5, z=3.7;
    printf("ANTES DA ROTACAO: ");
    printf("\n%.1f\t%.1f\t%.1f",x,y,z);
    roda_variavel(&x, &y, &z);
    printf("\nDEPOIS DA ROTACAO COM PONTEIROS: ");
    printf("\n%.1f\t%.1f\t%.1f",x,y,z);

}