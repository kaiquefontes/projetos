//3. Escrever um algoritmo para calcular a média de 3 números dados lidos pelo teclado.#include <stdio.h>
int main(){
    int x, y, z, media;
    printf("insira um numero:\n");
    scanf("%d", &x);
    printf("insira mais um numero:\n");
    scanf("%d", &y);
    printf("insira mais um numero:\n");
    scanf("%d", &z);
    media = (x+y+z)/3;
    
    printf("a media entre %d, %d e %d é %d\n", x, y, z, media);
    
}
