#include "gc.h" // necessário utilizar em todos os programas que possuem GC
#include <stdio.h>

int main(){
    int tamanho, *a, *b, i;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);

    GC_INIT(); 
    a = (int*) GET_malloc(tam * sizeof(int)); // GET_MALLOC tem como função alocar a memória, mas ao contrário do malloc ele limpa os espaços reservados antes da utilização 

    if(a){
          for(int i = 0; i < tamanho; i++){
            printf("Digite número: ");
              scanf("%d", (a + i));
          }

          for(int i = 0; i < tamanho; i++){
              printf("%d ", *(a + i));
          }
        
      }
      
      b = (int*) GET_malloc_atomic(sizeof(int)); //Aloca um objeto de um determinado tamanho que não contém ponteiros.
      if(b){
        printf("Memória alocada com sucesso");
      }
      else{
        printf("Erro na alocação de memória");
      }
    
    return 0;
}