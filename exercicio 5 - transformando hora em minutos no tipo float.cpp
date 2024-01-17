#include<stdio.h>
//Elabore um algoritmo que leia como entrada um valor inteiro representando a hora 
//(1,2,3…24) de um relógio. Em seguida o algoritmo de converter a hora lida em 
//minutos utilizando a formula Minutos = hora * 60. Por fim o algoritmo deve
//mostrar no vídeo a hora lida e a hora convertida em minutos. 
int main (){
	float hora, minutos;
	printf ("diga o numero de horas que deseja converter em minutos:");
	scanf ("%f", &hora);
	minutos = (hora * 60);
	printf("o numero de horas e %f e o numero de minutos e %f", hora, minutos );
	return 0;
}