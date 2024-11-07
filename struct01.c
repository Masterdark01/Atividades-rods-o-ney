/*Autor....: Vitor Hugo  
  Data.....: 05/09/2024
Objetivo...: Utilização de Variaveis*/
#include <stdio.h>
#include <windows.h>

typedef struct {
  int codigo;
  char nome[30];
  float salario;
  char cargo[30];
  char setor[30];
} registro;

void gotoxy(int x, int y){
COORD coord;
coord.X = x;
coord.Y = y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

int main()
{
  int x;
  registro colaborador[17];
  
  for(x=0;x<17;x++){
  gotoxy(10,10);
  printf("digite o codigo do colaborador..:");
  gotoxy(10,12);
  printf("digite o nome do colaborador....:");
  gotoxy(10,14);
  printf("digite o salario do colaborador.:");
  gotoxy(10,16);
  printf("digite o cargo do colaborador...:");
  gotoxy(10,18);
  printf("digite o setor do colaborador...:");
  
  gotoxy(43,10);
  scanf("%d", &colaborador[x].codigo);
  gotoxy(43,12);
  fflush(stdin);
  fgets(colaborador[x].nome, 30, stdin);
  gotoxy(43,14);
  scanf("%f", &colaborador[x].salario);
  gotoxy(43,16);
  fflush(stdin);
  fgets(colaborador[x].cargo, 30, stdin);
  gotoxy(43,18);
  fflush(stdin);
  fgets(colaborador[x].setor, 30, stdin);  
  }
  return 0;

}
