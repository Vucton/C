#include<stdio.h>

/*Q8:Leia 2 notas, calcule e exiba a média ponderada dessas notas. Considere que a nota1 tem peso
6 e a nota2 tem peso 4.*/
int main(){

    float n1,n2, soma;
    int p1=6, p2=4;

    printf("nota 1: ");
    scanf("%f", &n1);
    printf("nota 2: ");
    scanf("%f", &n2);

    soma= ((n1*p1)+(n2*p2))/(p1+p2);

    printf("%.2f", soma);

}