/*nome: nickolas
data: 15/09/2024
exercicio: 5*/

#include <stdio.h>

int main(){
    
    int numero;

    printf("digite um numero:\n");
    scanf("%d", &numero);

    if (numero % 2 == 0){
        printf("numero e par\n");
    } else{
        printf("numero e impar\n");
}
    return 0;
}