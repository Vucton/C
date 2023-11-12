#include<stdio.h>
#define TAM 20

/*Q10: Leia um conjunto com n(n<= 100), OS numeros DO **INDICE** que forem par eleve ao quadrado,
todos os numeros que forem  impares multiplique por -1.*/
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