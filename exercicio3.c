/*nome:.....nickolas
  data..: 10/09/2024
  exercicio....: 3*/
#include <stdio.h>

int main(){

char nome[30];
char cargo[30];
int idade;
float salario_bruto_ant;
float salario_bruto_cor;
float valor_grat;
float valor_dsct;
float salario_liq;

printf("digite o seu nome\n");
scanf("%s", nome);
printf("digite seu cargo:\n");
scanf("%s", cargo);
printf("digite sua idade:\n");
scanf("%d", &idade);
printf("digite o valor do seu salario:\n");
scanf("%f", &salario_bruto_ant);


salario_bruto_cor = salario_bruto_ant + salario_bruto_ant * 0.38;
valor_grat = salario_bruto_cor * 0.20;
valor_dsct = salario_bruto_cor * 0.15;
salario_liq = salario_bruto_cor + valor_grat - valor_dsct;

printf("seu nome e %s\n",nome);
printf("seu cargo e %s\n", cargo);
printf("sua idade e %d\n", idade);
printf("seu salario bruto era de :%.2f\n", salario_bruto_ant);
printf("seu salario passou a ser de com o reajuste :%.2f\n", salario_bruto_cor);
printf("o valor de gratificacao e :%.2f\n", valor_grat);
printf("o valor do imposto de renda e de :%.2f\n", valor_dsct);
printf("o valor do seu salario liquido e de :%.2f\n", salario_liq);

return 0;
}
