/*
Implemente uma função que receba como parâmetro um vetor de números inteiros de tamanho n e 
inverta a ordem dos elementos armazenados nesse vetor. Essa função deve obedecer ao protótipo a seguir. 
void inverte (int n, int * vet);
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 10

void inverte (int n, int * vet){
    int temp;
    for (int i = 0; i < n/2; i++){
        temp = vet[i];
        vet[i] = vet[n-1-i];
        vet[n-1-i] = temp;
    }
    printf("\n Inverso: ");
    for (int i = 0; i < n; i++)
        printf("%d", vet[i]);
}

int main(void){
    int vet[N];

    srand(time(NULL));
    
    printf("Original: ");

    for (int i = 0; i < N; i++) {
		vet[i] = rand() % N;
		printf("%d", vet[i]);
	}

    inverte(N, vet);

    return 0;
}