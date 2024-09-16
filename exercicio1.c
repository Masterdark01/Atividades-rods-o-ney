/*nome: nickolas
data: 15/09/2024
exercicio: 1*/

#include <stdio.h>

int main(){
    int numero;

    printf("digite um numero:\n");
    scanf("%d", &numero);

    if (numero > 0){
        numero = numero + 5;
        printf("o valor e:%d", numero);
    } else {
        numero = numero + 8;
        printf("o valor e: %d", numero);
    }
    return 0;
}