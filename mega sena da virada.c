#include <stdio.h>  
#include <windows.h>
#include <conio.h>

int main(){
    
    int temperatura [10];
    int i;
    int pos;
    int flag = 1;
    system("color 0a");
    srand(time(NULL));
    for (i = 0; i < 10; i++){
        temperatura[i] = rand() % 100;

    }
   do{
    system("cls");  
    printf("digite a posicao do vetor\n");
    scanf("%d", &pos);
    
    for (i = 0; i < 10; i++){

        printf("a temperatura da posicao [%d] e %d\n", i, temperatura[i]);
        
        if (pos == temperatura[i]){
            printf("o numero [%d] existe no vetor = %d\n", temperatura[i], i);
            flag = 0;
        }
    }
    if (flag == 1){
        printf("o numero [%d] nao foi encontrado\n", pos);
    }
    getch(); // ou system("pause");
    }while (pos >= 0);  
    
    return 0;
}
