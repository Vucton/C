#include<stdio.h>

/*Q4:Escreva um programa que recebe a altura em metros e a massa em quilos
de uma pessoa e calcula seu Índice de Massa Corporal (IMC).*/
int main(){
    float h, p, imc;

    printf("informe sua altura: ");
    scanf("%f", &h);
    printf("informe sua peso: ");
    scanf("%f", &p);


    imc=p/(h*h);

    printf("IMC:   %.2f", imc);

}