#include <stdio.h>
#include <stdlib.h>
 
void ordem_crescente(float *p, int tamanho){ // Função para ordenar os números em ordem crescente
float aux;
int i,j;
for(i = 0; i<tamanho; i++){
  for(j = i+1; j<tamanho; j++){
      if(p[i]>p[j]){
        aux = p[i];
        p[i] = p[j];
        p[j] = aux;
      }
  }
}
}
 
int main(){
   int tamanho,i;
   float *vet;
 
   printf("Informe o tamanho do vetor: ");
   scanf("%d", &tamanho);
 
   vet = malloc(tamanho * sizeof(float));
 
   if(vet){
       for(i = 0; i < tamanho; i++){
          printf("Digite número: ");
           scanf("%f", (vet + i));
       }
 
       ordem_crescente(vet, tamanho);
 
       for(i = 0; i < tamanho; i++){
           printf("%f ", *(vet + i));
       }
     
   }
   free(vet);
   return 0;
}
