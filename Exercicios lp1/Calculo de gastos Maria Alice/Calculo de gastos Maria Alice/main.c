#include<stdio.h>
int main(){
    float salario, faculdade, cartaotio, tia, camila, celular, despesasfixas, restante, quinzena1, quinzena2, dinheiromae, outros;
    printf("quanto voce recebe na 1 quinzena?\n");
    scanf("%f", &quinzena1);
    printf("quanto voce recebe na 2 quinzena?\n");
    scanf("%f", &quinzena2);
    printf("quanto voce recebe da sua mae?\n");
    scanf("%f", &dinheiromae);
    salario = (quinzena1 + quinzena2 + dinheiromae);
    printf("quanto voce paga de faculdade?\n");
    scanf("%f", &faculdade);
    printf("quanto voce paga do cartao do tio?\n");
    scanf("%f", &cartaotio);
    printf("quanto voce paga a tia?\n");
    scanf("%f", &tia);
    printf("quanto voce paga a camila?\n");
    scanf("%f", &camila);
    printf("quanto voce paga do seu celular?\n");
    scanf("%f", &celular);
    printf("quanto voce paga em outros?\n");
    scanf("%f", &outros);
    
    despesasfixas = cartaotio + faculdade + tia + camila + celular + outros;
    
    restante = (salario - despesasfixas);
    
    printf("voce recebe %.2f e sua despesas fixas somam %.2f, o que sobra disso é %.2f\n", salario, despesasfixas, restante);
    
    
}
