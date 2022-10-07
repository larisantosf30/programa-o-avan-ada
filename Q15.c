#include <stdio.h>
#include <stdlib.h>
 
void ordenarvalores(float  (*pf)(float, float), float *vet, int tam){ //Função para ordenar os valores recebidos
float aux;
for(int i = 0; i<tam; i++){
  for(int j = i+1; j<tam; j++){
      if(pf(vet[i], vet[j])> 0){
        aux = vet[i];
        vet[i] = vet[j];
        vet[j] = aux;
      }
  }
}
}
 
float comparar(float x, float y){ //Função para comparar os valores
   return (x - y);
}
 
int main(){
   int tam; //  declaração do tamanho do vetor
   float *vet; // declaração do ponteiro que será o vetor
 
   printf("Digite o tamanho do vetor: ");
   scanf("%d", &tam); // recebendo a entrada do tamanho
 
   vet = malloc(tam * sizeof(float)); // alocando a memória de vet
 
   if(vet){
       for(int i = 0; i < tam; i++){
          printf("Digite número: ");
           scanf("%f", (vet + i)); // preenchendo as posições do vetor
       }
 
       ordenar(comparar, vet, tam); // chamando a função ordenar 
 
       for(int i = 0; i < tam; i++){
           printf("%f ", *(vet + i)); //imprimindo os valores do vetor em ordem
       }
     
   } 
   free(vet);
   return 0;
}
