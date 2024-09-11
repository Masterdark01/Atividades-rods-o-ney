/*nome:.....nickolas
  data..: 10/09/2024
  exercicio....: 2*/

#include <stdio.h>

int main(){
int base;
int altura;

printf("digite o valor da base:\n");
scanf("%d", &base);
printf("digite a altura:\n");
scanf("%d", &altura);
int area = (base * altura)/2;

printf("a area do triangulo e igual a %d\n", area );

return 0;
}