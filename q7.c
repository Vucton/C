#include<stdio.h>

/*Q7:Leia o salário de um funcionário e exiba com resultado o
valor do salário reajustado em 12%.*/
int main(){
   float n,total, soma, salario, rj;

   printf("informe o salario: ");
   scanf("%f", &salario);
   printf("informe o valor do reajusti: ");
   scanf("%f", &n);


   rj= n/100;
   soma= rj*salario;
   total=salario+soma;

   printf("\nValor reajustado: %.2f\n", total);
   printf("valor do reajusti: %.2f\n\n", soma);


}