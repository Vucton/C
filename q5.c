#include<stdio.h>

/*Q5:Escreva um programa que, dado o valor da conta de uma refeição realizada
em um restaurante, calcule a comissão do garçom (10% do valor da conta)
e exiba: o subtotal, a comissão do garçom e o total, todos em reais.*/
int main(){
    float conta,comit, total, , porcent=0.1;

    printf("informe o valor da conta: ");
    scanf("%f", &conta);

    comit= porcent*conta;
    total= conta+comit;

    printf("\n\nValor da conta: %.2f\n", conta);
    printf("Valor da comissao do garcom: %.2f\n", comit);
    printf("Valor da porcentagem: %.2f\n", porcent);
    printf("valor total: %.2f\n\n", total);

}