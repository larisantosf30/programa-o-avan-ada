#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int ordem_crescente(float *a, float *b){
 if ( *(float*)a == *(float*)b ){
      return 0;
    }else if (*(float*)a < *(float*)b ){
      return -1;
    }else{
      return 1;
    }
}

int main(void) {
  float *vet;
  int tamanho;

  printf("Informe o tamanho do vetor:\n");
  scanf("%d",&tamanho);

  vet = malloc(tamanho*sizeof(float));


  for(int i=0;i<tamanho;i++){
    printf("Digite o numero: ");
    scanf("%f",&vet[i]);
  }

  qsort(vet,tamanho,sizeof(float),(void *)ordem_crescente);
        for(int i=0;i<tamanho;i++){
          printf("%f ",vet[i]);
        }
  free(vet);

  return 0;
}