#include<stdio.h>

/*Q3:Escreva um programa que recebe um número real referente a uma medida
em metros e imprima esta medida em: polegadas, pés, jardas e milhas.*/
int main(){
  float n, polegadas, pes, jardas, milhas, quilometro;

  printf("informe o numero: ");
  scanf("%f",&n);

  polegadas = n*0.0254;
  jardas = n*0.9144;
  pes = n*0.3048;
  milhas = n*1852;
  quilometro = n*1000;

  printf("convertido...........::: \n\n");
  printf("Polegada:     %.2f\n", polegadas);
  printf("Pes:          %.2f\n", pes);
  printf("Jardas:       %.2f\n", jardas);
  printf("Milhas:       %.2f\n", milhas);
  printf("Quilometro:   %.2f\n", quilometro);


}