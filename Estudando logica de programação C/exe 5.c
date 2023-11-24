#include <stdio.h>
#include<math.h>

int main (){
    float salarioMin= 1293.20, salarioUser, resultado;

    printf("Informe seu Salario: ");
    scanf("%f",&salarioUser);

    //resultado = salarioUser / salarioMin;

    resultado = salarioUser +(salarioUser * 0.05);
    //printf("\nUsuario rebece %2.f Salarios Minimos...",resultado);
    printf("Reajuste de no salario: %.f", resultado);
}
