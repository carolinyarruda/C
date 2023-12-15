/*
Escreva um programa, estruturado em diversas funções, para calcular o volume de uma peça formada 
por uma esfera com um furo cilíndrico. Sabe-se que o volume de uma calota esférica de altura h é dada por
1/3(πh2 (3R − h)), onde R representa o raio da esfera
*/

#include <stdio.h>

#define PI 3.14159F


float calcvol(int r, int h){
    float v;
    v= (PI * h * h * (3 * r - h)) / 3;
    return v;
}

int main(void){

    float altura=0, raio=0, volume=0;

    printf("Digite a altura: \n");
    scanf("%f", &altura);
    printf("Digite o raio: \n");
    scanf("%f", &raio);

    volume = calcvol(raio, altura);

    printf("Volume: %f", volume);

    return 0;
}