#include<stdio.h>
#define TAM 20

/*Q12: Faça um programa que leia um vetor de N posições e, depois, um número inteiro. Se o
número for 1, mostre o vetor na ordem direta; se for 2, mostre o vetor na ordem inversa. Caso,
o número seja diferente de 1 e 2 escreva uma mensagem informando que o número é inválido.*/
int main(){
    int s, v1[TAM];


    for(int i=0; i<4; i++){

        printf("digite o elemento do vetor: ");
        scanf("%i", &v1[i]);
    }

    printf("informe um numero (1 || 2): ");
    scanf("%i", &s);


    if(s==1){
        printf("\nImprimindo Vetor:\n");
        for(int i=0; i<4; i++){
        printf("%i ", v1[i]);

        }

    }else if(s==2){
        printf("\nImprimindo Vetor:\n");
        for(int i=3; i>=0; i--){

        printf("%i ", v1[i]);
        }
    }else{
        printf("\n\n numero invalido........................");
    }
}