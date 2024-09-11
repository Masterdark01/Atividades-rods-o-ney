/*nome:.....nickolas
  data..: 10/09/2024
  exercicio....: 5*/

#include <stdio.h>

int main(){

float media_consu;
float preco_combus = 5.24 ;
float odrometro_ini;
float odrometro_fim;
float lucro_pass;
float lucro_liq;
int combus_gasto;

printf("quanto marca o odrometro inicial\n");
scanf("%f", &odrometro_ini);
printf("quanto marca o odrometro final\n");
scanf("%f", &odrometro_fim);
printf("quanto gastou de combustivel\n");
scanf("%d", &combus_gasto);
printf("quanto arrecadou no dia\n");
scanf("%f", &lucro_pass);

media_consu = (odrometro_fim - odrometro_ini)/combus_gasto;
lucro_liq = lucro_pass - (combus_gasto*preco_combus);

printf("a marcacao do odometro inicial e de:%.2f\n", odrometro_ini);
printf("a marcacao do odometro final e de:%.2f\n", odrometro_fim);
printf("voce percorreu em km:%.2f\n", odrometro_fim);
printf("voce lucrou:%.2f\n", lucro_liq);
printf("a media de consumo de km/l foi de :%.2f\n", media_consu);

return 0;
}