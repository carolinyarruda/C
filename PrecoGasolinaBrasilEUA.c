/*Escreva um programa que calcule o preço da gasolina por litro no Brasil 
se aqui fosse adotado o mesmo preço cobrado nos Estados Unidos. 
O programa deve capturar dois valores fornecidos via teclado: 
o preço do galão de gasolina praticado nos Estados Unidos (em dólares) 
e a taxa de conversão do dólar para o real. 
O programa então deve exibir o preço do litro de gasolina correspondente em reais. 
Sabe-se que um galão tem 3.7854 litros.*/

#include <stdio.h>

int main(void){

    float galaoEUA, dolar, litroEUA, litroBR;

    printf("Preco do galao: ");
    scanf("%f", &galaoEUA);

    printf("Dolar hoje: ");
    scanf("%f", &dolar);

    litroEUA = galaoEUA/3.7854;
    litroBR = litroEUA*dolar;

    printf("Preco da gasolina em reais nos EUA: %.3f", litroBR);

    return 0;
}