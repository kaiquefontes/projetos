//2. Elabore um algoritmo que receba como entrada o salário e o desconto do salário de um funcionário. Em seguida o algoritmo deve calcular o salário liquido do funcionário utilizando a formula Salário liquido = salário – desconto. Como saída, o algoritmo deve mostrar no vídeo o salário líquido.
#include <stdio.h>
int main (){
    float salarioliquido, salario, desconto;
    printf("qual o salario bruto do empregado?\n");
    scanf("%f", &salario);
    
    printf("qual o valor do desconto no salario?\n");
    scanf("%f", &desconto);
    
    salarioliquido = salario - desconto;
    
    printf("o valor do salario e %.2f porem apos o desconto de %.2f o salario liquido fica %.2f\n", salario, desconto, salarioliquido);
    
    
}
