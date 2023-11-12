#include<stdio.h>

/*Q2:Escreva um programa que recebe um número inteiro de horas e imprime o
número equivalente em dias. Ex.: 60 horas = 2,5 dias*/
int main(){
    float hora, dia;

    printf("informe o numero de horas: ");
    scanf("%f", &hora);

    dia=hora/24;

    printf("%.2f horas = %.2f dias ", hora, dia);


}