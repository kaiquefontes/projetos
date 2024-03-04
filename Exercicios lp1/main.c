//1. Fazer um algoritmo para somar 2 números inteiros lidos pelo teclado.
#include <stdio.h>
int main (){
    int x,y, resultado;
    printf ("escolha um numero:\n");
    scanf("%d", &x);
    printf("escolha outro numero:\n");
    scanf("%d", &y);
    resultado = x + y;
    printf("o resultado de %d + %d e %d \n", x, y, resultado);
    
    
}
