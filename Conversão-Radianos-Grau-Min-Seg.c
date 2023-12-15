/* Escreva um programa que converta um valor de ângulo dado em radianos para o valor correspondente expresso em graus, minutos e segundos. 
Sabe-se que 1 radiano equivale a 57.29578 graus. Escolha um formato de saída apropriado. */

#include <stdio.h>

int main(void){
    float radiano, grau, minuto, segundo;

    printf("Radianos: ");
    scanf("%f", &radiano);

    grau = 57.29578 * radiano;
    minuto = 60 * grau;
    segundo = 60 * minuto;

    printf(" %f graus, %f minutos, %f segundos", grau, minuto, segundo);

    return 0;
}