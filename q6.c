#include<stdio.h>

/*Q6:Modifique o programa da questão anterior para que a comissão do garçom
seja uma variável e não uma constante. O valor da comissão deve ser
informado pelo usuário.*/
int main(){
    float conta,comit, total, n, porcent;

    printf("informe o valor da conta: ");
    scanf("%f", &conta);

    printf("informe o valor da porcentagem: ");
    scanf("%f", &n);

    porcent=n/100;

    comit= porcent*conta;
    total= conta+comit;

    printf("\n\nValor da conta: %.2f\n", conta);
    printf("Valor da comissao do garcom: %.2f\n", comit);
    printf("Valor da porcentagem: %.2f\n", n);
    printf("valor total: %.2f\n\n", total);

}