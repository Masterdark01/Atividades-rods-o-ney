/*nome: nickolas
data: 15/09/2024
exercicio: 4*/

#include <stdio.h>

int main(){
    
    float salario;

    printf("digite seu salario:\n");
    scanf("%f", &salario);

    if (salario <= 1570.00){
        salario = salario * 0.08;
        printf("o valor do desconto e:%.2f", salario);
    } else if(salario > 1570.00) {
        salario = salario * 0.09;
        printf("o valor do desconto e:%.2f", salario);
    }
    return 0;
}