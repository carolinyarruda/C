/*Escreva um programa em C que receba três números inteiros como entrada e imprima, como saída, os números em ordem crescente.*/

#include <stdio.h>

int main(void){
    int num1, num2, num3, troca;

    printf("Numero 1: ");
    scanf("%d", &num1);
    printf("Numero 2: ");
    scanf("%d", &num2);
    printf("Numero 3: ");
    scanf("%d", &num3);

    if(num1<num2 & num1<num3){
        if(num2>num3){
            troca = num2;
            num2 = num3;
            num3 = troca;
        }
    }
    if(num2<num1 & num2<num3){
        troca = num1;
        num1 = num2;
        num2 = troca;
        if(num2>num3){
            troca = num2;
            num2 = num3;
            num3 = troca;
        }
    }
    if(num3<num1 & num3<num1){
        troca = num1;
        num1 = num3;
        num3 = troca;
        if(num2>num3){
            troca = num2;
            num2 = num3;
            num3 = troca;
        }
    }

    printf("%d  %d  %d", num1, num2, num3);

    return 0;
}