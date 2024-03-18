#include <stdio.h>
#include <locale.h>
int main(){
    float altura,raio,pi;
    float c_diario,cap_total,auton_reser;
    setlocale(LC_ALL, "portuguese");
    
    printf("\n Digite a altura em Cm:");
    scanf("%f", &altura);
    printf("\n Digite o raio em Cm:");
    scanf("%f", &raio);
    printf("\n Digite o valor para atribuir a pi em Cm:");
    scanf("%f", &pi);
    
    printf("\n Consumo médio diário (litros/dia)=");
    scanf("%f", &c_diario);
    
    cap_total=(altura*raio*raio*pi)/1000;
    
    auton_reser=cap_total/c_diario;
    
    printf("\n Capacidade do Reservatório= %.1f litros", cap_total);
    printf("\n Autonomia do reservatório= %.1f dias", auton_reser);
    
    
    if(auton_reser<2)
    {
        printf("\n Seu consumo é Elevado \n");
    }
    else if(auton_reser>2 && auton_reser<=7)
    {
        printf("\n Seu consumo é moderado \n");
    }
    else if(auton_reser>7)
    {
        printf("\n Seu consumo é baixo\n");
    }
} //Kaique Fontes
