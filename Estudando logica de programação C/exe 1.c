#include<stdio.h>
#include<math.h>

int main (){
    int a, b, c = 12, resultado;

    printf("Digite o primeiro valor: ");
    scanf("%i", &a);

    printf("Digite o segundo valor: ");
    scanf("%i", &b);

    resultado = a +b;

    printf("Resultado da soma: %i\n",resultado);

    if(a+b < c){
        printf("\nA soma dos numeros e menor que C (Valor de C =%i)\n\n", c);
    }

}
