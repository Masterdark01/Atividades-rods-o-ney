/*nome:.....nickolas
  data..: 10/09/2024
  exercicio....: 1*/

#include <stdio.h>

int main(){

int tempo;
float valor; 
float taxa; 
float prestacao;

printf("digite o valor:\n");
scanf("%f", &valor);
printf("digite a taxa:\n");
scanf("%f", &taxa);
printf("digite o tempo:\n");
scanf("%d", &tempo);

taxa = taxa / 100;
prestacao = valor + (valor * taxa * tempo);

printf("o valor da prestacao atrasada e igual a: %.2f\n", prestacao);

return 0;
}