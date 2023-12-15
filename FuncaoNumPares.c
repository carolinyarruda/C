/* Escreva uma função que receba como parâmetro um vetor de números inteiros de tamanho n 
e retorne quantos números pares estão armazenados nesse vetor. 
Essa função deve obedecer ao protótipo a seguir. Escreva um programa para testar sua função.
int pares (int n, int * vet);
*/

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define N 10

int pares (int n, int * vet){
    int np = 0;

	for (int i = 0; i < n; i++) {
		np += !(vet[i] % 2);
	}
	return np;
}

int main(void){
    int vet[N];

    srand(time(NULL));
    
	for (int i = 0; i < N; i++) {
		vet[i] = rand() % 2;
		printf("%d ", vet[N]);
	}
    
    printf("Pares: %d\n", pares (N, vet));

    return 0;
}