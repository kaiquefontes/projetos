#include <stdio.h>

int main(){
    float km, litro, media;
    printf("quantos km o veiculo percorreu?\n");
    scanf("%f", &km);
    printf("quantos litros o veiculo consumiu?\n");
    scanf("%f", &litro);
    media = km/litro;
    printf("o consumo medio do veiculo e %.2f km/l\n", media);
}
