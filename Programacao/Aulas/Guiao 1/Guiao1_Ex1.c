#include <stdio.h>

void main(){

int a, b, total, *p = &a, *q = &b, *r = &total;

printf("Introduza o valor de a: ");
scanf("%d", &a);

printf("Introduza o valor de b: ");
scanf("%d", q);

*r = *q + *p;
total = a + b;

printf("a=%d \t b= %d \t total= %d\n", *p, *q, *r);
printf("a=%d \t b= %d \t total= %d\n", a, b, total);
}