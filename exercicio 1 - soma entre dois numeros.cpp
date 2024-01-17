#include<stdio.h>
int soma(int num1, int num2){
	return num1 + num2;

	}
int main (){
	int n1, n2, s;
	printf("escreva um numero que deseja efetuar uma soma:");
	scanf ("%d", &n1);
	printf("escreva outro numero para somar com o primeiro:");
	scanf("%d", &n2);
	s = soma(n1, n2);
	printf("soma: %d", s);
}
