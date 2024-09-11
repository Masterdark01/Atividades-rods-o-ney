/*nome:.....nickolas
  data..: 10/09/2024
  exercicio....: 6*/

#include <stdio.h>

int main(){

char nome[30];
int horas_trab;
int depend_func;
float salario_bruto;
float valor_inss;
float valor_ir;
float salario_liquido;

printf("digite o seu nome\n");
scanf("%s", nome);
printf("digite suas horas trabalhadas\n");
scanf("%d", &horas_trab);
printf("digite o numero de dependentes\n");
scanf("%d", &depend_func);

salario_bruto = 12*horas_trab + (40*depend_func);
valor_inss = salario_bruto * 0.085;
valor_ir = salario_bruto * 0.05;
salario_liquido = (salario_bruto - valor_inss) - valor_ir;


printf("seu nome e %s\n", nome);
printf("seu salario bruto e de: %.2f\n", salario_bruto);
printf("o desconto do inss e de: %.2f\n", valor_inss);
printf("o desconto do ir e de: %.2f\n", valor_ir);
printf("seu salario liquido e de: %.2f\n", salario_liquido);

return 0;
}