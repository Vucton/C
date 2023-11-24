#include<stdio.h>

int main (){
    int a , b, c;

    printf("digite dois valores: ");
    scanf("%i %i", &a, &b);

    if(a==b){

        c= a+b;
        printf("Resultado da soma de A e B: %i", c);
    }else{
        c= a* b;
        printf("Resultado da multiplicacao de A e B: %i", c);
    }
}
