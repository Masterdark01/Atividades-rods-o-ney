#include <stdio.h>  
#include <windows.h>

int main(){
    
    int vetor [10];
    int i;
    system("color 0a");

    for (i = 0; i < 10; i++){
        system("cls");
        printf("digite um valor: ");
        scanf("%d", &vetor[i]);
    }

    for(i = 0; i < 10; i++){
        printf("vet[%d] = %d\n", i , vetor[i]);
    }

    return 0;
}
