#include <stdio.h>
int main(){
    float horas, minutos;
    printf("quantas horas gostaria de transformar em minutos?\n");
    scanf("%f", &horas);
    minutos = horas * 60;
    printf("%.2f horas é igual a: %.2f minutos\n", horas, minutos);
}
