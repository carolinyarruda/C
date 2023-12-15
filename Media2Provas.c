/*Considere uma disciplina que adota o seguinte critério de aprovação: os alunos fazem duas provas (P1 e P2) iniciais; 
se a média nas duas provas for maior ou igual a 5.0, e se nenhuma das duas notas for inferior a 3.0, o aluno passa direto. 
Caso contrário, o aluno faz uma terceira prova (P3) e a média é calculada considerandose a terceira nota e a maior das notas entre P1 e P2. 
Neste caso, o aluno é aprovado se a média final for maior ou igual a 5.0.
Escreva um programa completo que leia inicialmente as duas notas de um aluno, fornecidas pelo usuário via teclado. 
Se as notas não forem suficientes para o aluno passar direto, o programa deve capturar a nota da terceira prova, também fornecida via teclado. 
Como saída, o programa deve imprimir a média final do aluno, seguida da mensagem “Aprovado” ou “Reprovado”, conforme o critério descrito aqui.*/

#include <stdio.h>

int main(void){
    float nota1, nota2, nota3, media=0;

    printf("NOTA 1: ");
    scanf("%f", &nota1);
    printf("NOTA 2: ");
    scanf("%f", &nota2);

    media = (nota1 + nota2)/2;

    if(media>= 5 & nota1>=3 & nota2>=3){
        printf("Media final: %.1f\n", media);
        printf("Aprovado direto");
    } else{
        printf("NOTA 3: ");
        scanf("%f", &nota3);

        if(nota1>nota2){
            media = (nota1 + nota3)/2;
        } else{
            media = (nota2 + nota3)/2;
        }

        if(media>=5){
            printf("Media final: %.1f\n", media);
            printf("Aprovado");
        } else{
            printf("Media final: %.1f\n", media);
            printf("Reprovado");
        }
        }

    return 0;
}