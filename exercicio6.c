/*nome: nickolas
data: 15/09/2024
exercicio: 6*/

#include <stdio.h>

int main() {
    
    char nome[30];
    int pecas;
    float valor;
    float salario;
    float salario_grat;

    printf("Digite o nome:\n");
    scanf("%s", nome);
    printf("Digite o numero de pecas:\n");
    scanf("%d", &pecas);
    printf("Digite o seu salario\n");
    scanf("%f", &salario);

    if (pecas == 30) {  
        
        printf("nenhuma bonificacao\n");
    
    } else if (pecas >= 31 && pecas <= 60){
        valor = salario * 0.10; 

    } else if (pecas >= 61 && pecas <= 100){
        valor = salario * 0.15; 
    
    } else if (pecas >= 101 && pecas <= 150){
        valor = salario * 0.20; 

    } else if (pecas > 150){
        valor = salario * 0.30; 
        
    }

    salario_grat = valor + salario;

    printf(" O nome do funcionario e: %s\n", nome);
    printf(" Teve uma gratificacao de: %.2f\n", valor);
    printf(" O salario total foi de : %.2f\n", salario_grat);
    
    return 0;
}
