#include <stdio.h>
#include <stdlib.h>

// Função para somar as entradas das posições e gerar o vetor resultante
void soma_vetores(int *pa, int *pb, int *pc, int tamanho){ 
 for(int i=0; i<tamanho; i++){
   pc[i] = pa[i]+ pb[i];
 }
}
int main() {
 int *vetU, *vetV, *vetW, tamanho; 
  
 //Inserir o tamanho dos vetores para saber quantas entradas serão necessárias
 printf("Digite o tamanho dos vetores: ");
 scanf("%d", &tamanho);
 // Alocando os valores recebidos
 vetU = malloc(tamanho * sizeof(int));
 vetV = malloc(tamanho * sizeof(int));
 vetW = malloc(tamanho * sizeof(int));

// Solicitando as coordenadas dos vetores:
 for(int i=0; i<tamanho; i++){
   printf("Digite um número para posição %d do vetor U: ", i+1);
   scanf("%d", vetU+i);
 }
  printf("\n");
 for(int i=0; i<tamanho; i++){
   printf("Digite um número para posição %d do vetor V: ", i+1);
   scanf("%d", vetV+i);
 }
 // Chamando a função de soma dos vetores:
 soma_vetores(vetU, vetV, vetW, tamanho);
 // Mostrando o vetor resultante:
 printf("\nVetor Resultante da Soma: \n");
 for(int i=0; i<tamanho; i++){
   printf("%d\n", *(vetW+i));
 }
 free(vetW);
 free(vetV);
 free(vetU);
 return 0;
}
