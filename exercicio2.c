/*nome: nickolas
data: 15/09/2024
exercicio: 2*/

#include <stdio.h>

int main(){

    int valor1;
    int valor2;
    int valor3;
    int valor4;
    int media;



    printf("digite o valor 1:\n");
    scanf("%d", &valor1);
    printf("digite o valor 2:\n");
    scanf("%d", &valor2);
    printf("digite o valor 3:\n");
    scanf("%d", &valor3);
    printf("digite o valor 4:\n");
    scanf("%d", &valor4);

    media = (valor1 + valor2 + valor3 + valor4)/4;


    if(media >= 7){
        printf("aprovado");
    }else{
        printf("reprovado");
    }
    return 0;
}