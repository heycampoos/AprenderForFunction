#include <stdio.h>

int main(){

int i, x;

printf("Por favor, insira X para\ncalcular a tabuada: ");
scanf("%d",&x);

printf("\nTabuada do %d \n",x);

i=0;

while (i<=10){
    printf("%d x %d = %d\n ", x, i, x*i);
    i++; }}