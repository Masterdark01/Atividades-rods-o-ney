/*nome: nickolas
data: 15/09/2024
exercicio: 3*/

#include <stdio.h>

int main(){
    int A;
    int B;
    int Y;

    printf("digite o valor A\n");
    scanf("%d", &A);
    printf("digite o valor B\n");
    scanf("%d", &B);

    if (A < B){
        Y = B - A;
        printf("o valor de a e: %d\n", A);
        printf("o valor de b e : %d\n", B);
        printf("o valor de y e: %d\n", Y);
    
    }else if(B < A){
        Y = A - B;
        printf("o valor de a e: %d\n", A);
        printf("o valor de b e %d\n", B);
        printf("o valor de y e %d\n", Y);
    }else if(A == B){
        Y = A + B;
        printf("o valor de a e: %d\n", A);
        printf("o valor de b e: %d\n", B);
        printf("o valor de y e: %d\n", Y);
        
    }

    

    return 0;
}