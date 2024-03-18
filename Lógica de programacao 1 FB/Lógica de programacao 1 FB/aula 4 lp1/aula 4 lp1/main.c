#include <stdio.h>
#include<locale.h>
int main(){
    setlocale(LC_ALL, "portuguese");
    int grau;
    printf("Digite o seu grau de conhecimento:\n");
    printf("(1) para nível médio\n");
    printf("(2) para nível graduado\n");
    printf("(3) para nível pós-graduado\n");
    scanf("%d", &grau);
    
    switch (grau) {
        case 1:
            printf("Seu grau é: Nível médio.\n");
            break;
        case 2:
            printf("Seu grau é: Nível graduado.\n");
            break;
        case 3:
            printf("Seu grau é: Pós-graduado.\n");
            break;
            
        default:
            printf("nao informado.\n");
            
    }
}
