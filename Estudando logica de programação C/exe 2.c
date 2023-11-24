#include <stdio.h>
#include<math.h>

int main (){
    int n;
    printf("Digite um numero: ");
    scanf("%i", &n);

    if(n < 0 && n %2 !=0 ){
        printf("Numero negativo impar!!");
    }else if(n<0 && n%2==0){
        printf("Numero negativo par");
    }else if(n>0 && n %2!=0){
        printf("numero positivo impar");
    }else{
        printf("Numero positivo par");
    }
}
