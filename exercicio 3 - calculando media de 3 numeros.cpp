#include<stdio.h>
//Escrever um algoritmo para calcular a média de 3 números dados lidos pelo teclado. 
int main (){
	int num1, num2, num3, media;
	printf("insira tres numeros que deseja calcular a media!\n");
	printf("\n primeiro numero:");
	scanf("%d", &num1);
	printf("\n segundo numero:");
	scanf("%d", &num2);
	printf("\n terceiro numero:");
	scanf("%d", &num3);
	media = (num1 + num2 + num3)/3;
	printf("\n a media dos tres numeros e: %d", media);
}
