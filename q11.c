#include<stdio.h>
#define TAM 20

/*Q11: Dado dois vetores com n (n<=50) componentes cada um, calcular e imprimir
a soma deles (soma vetorial).*/
int main(){
    int n, v1[TAM], v2[TAM], soma[TAM];

    printf("quantos numeros: ");
    scanf("%i", &n);


    for(int i=0; i<n; i++){

        printf("digite o elemento do vetor 1: ");
        scanf("%i", &v1[i]);
    }

    printf("\n\n");

    for(int i=0; i<n; i++){

        printf("digite o elemento do vetor 2: ");
        scanf("%i", &v2[i]);
    }

    for(int i=0; i<n; i++){
        soma[i]= v1[i]+v2[i];
    }


    printf("\nVetor soma:\n");
    for(int i=0; i<n; i++){
        printf("%i ", soma[i]);
    }
}