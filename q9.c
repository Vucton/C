#include<stdio.h>
#define TAM 20

/*Q9: Leia um conjunto com n(n<= 100) numeros e eleve ao quadrado todos os numeros
que forem par e multiplique por -1 todos que forem impares.*/
int main(){
    int v[TAM];
    int n;

    printf("informe a quantidade de elementos: ");
    scanf("%i", &n);


    for(int i=0; i<n; i++){
        printf("digite o elemento no indice(%i): ", i);
        scanf("%i", &v[i]);
    }
    printf("\nVetor inicial\n");
    for(int i=0; i<n; i++){
        printf("%i ", v[i]);
    }

    for(int i=0; i<n; i++){
        if(v[i]%2==0){
            v[i]= v[i]*v[i];
        }else{
            v[i]= v[i]*(-1);
        }
    }
    printf("\n");
    printf("\nVetor Final\n");
    for(int i=0; i<n; i++){
        printf("%i ", v[i]);
    }
    printf("\n\n");

}