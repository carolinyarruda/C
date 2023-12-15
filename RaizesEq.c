/*
Escreva uma função que calcula as raízes da equação. 
A função deve preencher os endereços passados com os valores das raízes correspondentes, 
seguindo o protótipo: int raízes (double a, double b, double c, double * px1 , double * px2 );
A função main deve capturar os valores dos coeficientes, fornecidos via teclado, 
chamar a função e exibir os resultados
*/

#include <stdio.h>
#include <math.h>

int raizes(double a, double b, double c, double * px1 , double * px2){
    double delta=0;

    delta = ((b * b) - 4 * a * c);

    *px1 = ((- b + sqrt(delta))/ 2 * a);

    *px2 = ((- b - sqrt(delta))/ 2 * a);

}

int main(void){
    double coefA, coefB, coefC, raiz1, raiz2, contador=0;

    printf("Coeficiente(a): ");
    scanf("%lf", &coefA);
    printf("Coeficiente(b): ");
    scanf("%lf", &coefB);
    printf("Coeficiente(c): ");
    scanf("%lf", &coefC);

    raizes(coefA, coefB, coefC, &raiz1, &raiz2);

    printf("Raizes: %.0lf e %.0lf", raiz1, raiz2);

    return 0;
}