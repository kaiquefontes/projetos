//4. Elabore um algoritmo que leia como entrada um valor inteiro representando a hora (1,2,3...24) de um relógio. Em seguida o algoritmo de converter a hora lida em minutos utilizando a formula Minutos = hora * 60. Por fim o algoritmo deve mostrar no vídeo a hora lida e a hora convertida em minutos.
#include <stdio.h>
int main(){
    int horas, minutos;
    printf("quantas horas gostaria de transformar em minutos?\n");
    scanf("%d", &horas);
    minutos = horas * 60;
    printf("%d horas é igual a: %d minutos\n", horas, minutos);
}
