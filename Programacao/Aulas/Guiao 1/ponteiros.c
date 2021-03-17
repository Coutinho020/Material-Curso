#include <stdio.h>


int mainPtr(){
    
    int a = 10;
    
    int *p;     // 1. Declaração de um ponteiro
    
    p = &a;       // 2. Obter o endereco de uma variavel e guardar no ponteiro
    
    // 3. Podemos usar p para chegar à variavel a
    
    *p = 25;
    
    //a = 25;
     
    printf("A = %d\n", *p);
    return 0;
}






void troca(int *a, int *b){
    int temp;
    
    temp = *a;
    *a = *b;
    *b = temp;
    
    //printf("Dentro: %d %d\n", a, b);
}

int main(){

    int x=1, y=2;
    
    printf("Antes:\tX=%d\tY=%d\n", x, y);
    
    troca(&x, &y);
    
    printf("Depois:\tX=%d\tY=%d\n", x, y);
    return 0;
}




int mainEX2(){
    int a, b = 4;
    float x = 1.0;
    float* pf;
    int* p;

    pf = &x;
    *pf = *pf + 2.5;
    
    printf("%f\n", x);

    p = &a;
    *p = b * 10;
    p = &b;
    printf("%d  %d", *p, *p+a);
    return 0;
}






int mainEx2(){

    int i = 2, j = 3, *p = &i, *q = NULL;

    printf("Morada: %p\tValor: %d\n", p, *p);
    
    q = p;
    
    p = &j;
    
    *p = *q;
    
    (*q)++;
    
    printf("%d\t%d\n", i, j);
    return 0;
}