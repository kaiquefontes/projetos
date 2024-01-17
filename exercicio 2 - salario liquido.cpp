#include<stdio.h> 
#include<locale.h>
//Elabore um algoritmo que receba como entrada o salário e o desconto do salário de
//um funcionário. Em seguida o algoritmo deve calcular o salário liquido do
//funcionário utilizando a formula Salário liquido = salário – desconto. Como saída,
//o algoritmo deve mostrar no vídeo o salário líquido. 
int main (){
	float salario, desconto, liquido;
	setlocale(LC_ALL,"portuguese");
	printf("Insira o valor do salário bruto:");
	scanf("%f", &salario);
	printf("\n insira a porcentagem de desconto em forma decimal:");
	scanf("%f", &desconto);
	liquido = salario - (salario * desconto);
	printf("valor liquido de seu salario é: %f\n", liquido);

	
return 0;


}