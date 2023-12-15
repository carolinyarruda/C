/*Escreva um programa que capture do teclado o número de segundos transcorridos num evento e 
imprima o tempo no formato hora-minuto-segundo: h:m:s, 
onde hora e minuto são exibidos com dois dígitos, preenchidos com zero à esquerda (" %02 d"), e
segundo exibido com duas casas decimais, também preenchido com zero à esquerda ( %05.2 f)*/

#include <stdio.h>
#include <stdlib.h>

int main(void){
    float segundosEvento, segundo=0;
    int hora=0, minuto=0;

    printf("Segundos do evento: ");
    scanf("%f", &segundosEvento);

    if(segundosEvento< 60){
        segundo = segundosEvento;
    }
    if(segundosEvento >= 60 & segundosEvento<=3600){
        segundo = (int) segundosEvento%60;
        minuto = segundosEvento/60;
    }
    if(segundosEvento > 3600 & segundosEvento <= 86400){
        hora = segundosEvento/3600;
        minuto = (int) (segundosEvento/60)%60;
        segundo = (int) segundosEvento%60;
    }

    if(hora >= 24){
        printf("Invalido");
        exit(0);
    }
    printf("%02d:%02d:%05.2f", hora, minuto, segundo);


    return 0;
}