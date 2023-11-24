#include<stdio.h>

int main(){
    int n,verificar;

    printf("Digite um numero: ");
    scanf("%i", &n);

    verificar =n -1;

    printf("Numero antecessor de %i: %i", n, verificar);

    verificar = n + 1;

    printf("\nNumero sucessor de %i: %i", n, verificar);
}
