/*nome:.....nickolas
  data..: 10/09/2024
  exercicio....: 4*/

#include <stdio.h>

int main(){

int litros_gastos;
int km_percor;
int total_gasto;
int cons_medio;

printf("quantos litros de combustivel gastos:\n");
scanf("%d", &litros_gastos);
printf("km percorridos:\n");
scanf("%d", &km_percor);

total_gasto = litros_gastos*5.24;
cons_medio = km_percor/litros_gastos;


printf("voce gastou:%d\n", litros_gastos);
printf("voce percorreu:%d\n" ,km_percor);
printf("voce gastou em reais:%d\n", total_gasto);
printf("o consumo medio foi de:%d\n", cons_medio );

return 0;
}