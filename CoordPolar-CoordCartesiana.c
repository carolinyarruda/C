/*Escreva um programa que converta coordenadas polares (raio r e ângulo a) em coordenadas cartesianas (abscissa x e ordenada y), 
de acordo com as fórmulas: x = r cos(a) / y = r sin(a)
O programa deve capturar os valores em coordenadas polares e exibir as coordenadas cartesianas correspondentes. 
As funções sin e cos estão disponíveis na biblioteca matemática padrão.*/

#include <stdio.h>
#include <math.h>

int main(void){
    double x=0, y=0, raio, angulo;

    printf("RAIO: ");
    scanf("%lf", &raio);
    printf("ANGULO: ");
    scanf("%lf", &angulo);

    x = raio * cos(angulo);
    y = raio * sin(angulo);

    printf("(%.1lf, %.1lf)", x, y);

    return 0;
}