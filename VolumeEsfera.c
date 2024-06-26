/*
Escreva um programa que, dado o valor do raio via teclado, 
calcule e imprima o volume da esfera correspondente. 
Sabe-se que o volume da esfera é dado por 4/3πr3, onde r representa o raio da esfera. 
Note que a linguagem C não disponibiliza um operador de exponenciação (potenciação). 
Para calcular o valor de r3 podemos multiplicar o valor do raio por si mesmo duas vezes ou 
fazer uso da função pow da biblioteca padrão matemática (# include < math .h>)
*/

#include <stdio.h>
#include <math.h>

int main(void){
    double raio, volume;

    printf("Valor do raio: ");
    scanf("%lf", &raio);

    volume = (4 * 3.14 * (pow(raio,3)) / 3);

    printf("Volume: %.2lf", volume);

    return 0;
}