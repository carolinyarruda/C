/* Escreva um programa em C que receba três números inteiros como entrada e imprima, como saída, o maior número recebido. */

#include <stdio.h>

int main(void){
    int num1, num2, num3, maior;

    printf("Numero 1: ");
    scanf("%d", &num1);
    printf("Numero 2: ");
    scanf("%d", &num2);
    printf("Numero 3: ");
    scanf("%d", &num3);

    if(num1>num2 & num1>num3){
        maior = num1;
    }
    if(num2>num1 & num2>num3){
        maior = num2;
    }
    if(num3>num1 & num3>num2){
        maior = num3;
    }

    printf("Maior numero: %d", maior);

    return 0;
}