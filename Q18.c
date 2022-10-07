#include <stdio.h>
#include <stdlib.h>

void m(int **m1, int **m2, int **m3, int LA, int CA, int CB){
  int aux;
  for(int i = 0; i < LA; i++) {
    for(int j = 0; j < CA; j++) {
      m1[i][j]=rand() % 20;
    }
  }
  for(int i = 0; i < CA; i++) {
    for(int j = 0; j < CB; j++) {
      m2[i][j]=rand() % 20;
    }
  }
  for(int i = 0; i < LA; i++) {
    for(int j = 0; j < CB; j++) {
      m3[i][j]=0;
    }
  }
  for(int i = 0; i < LA; i++) {
    for(int j = 0; j < CB; j++) {
      aux = 0;

      for(int k = 0; k < CA; k++){
        aux += m1[i][k] * m2[k][j];
      }
      m3[i][j] = aux;
    }
  }
}

int main() {
  int LA, CA, CB;
  int *m1,*m2, **m3;

  printf("Digite a quantidade de linhas da matriz A: \n");
  scanf("%d",&LA);
  printf("Digite a quantidade de colunas da matriz A: \n");
  scanf("%d",&CA);
  printf("Digite a quantidade de colunas da matriz B: \n");
  scanf("%d",&CB);

  m1 = malloc(LA * sizeof (int*));
  m2 = malloc(CA * sizeof (int*));
  m3 = malloc(LA * sizeof (int*));

  for(int i=0; i < LA; i++){
    m1[i] = malloc(CA * sizeof (int));
  }

  for(int i=0; i < CA; i++){
    m2[i] = malloc(CB*sizeof (int));
  }

  for(int i=0; i < LA; i++){
    m3[i] = malloc(CB*sizeof (int));
  }

  m(m1, m2, m3, LA, CA, CB);

  printf("Matriz A:\n");

  for(int i = 0; i < LA; i++) {
    for(int j = 0; j < CA; j++) {
      printf("%d ", m1[i][j]);
    }
    printf("\n");
  }
  printf("Matriz B:\n");
  for(int i = 0; i < CA; i++) {
    for(int j = 0; j < CB; j++) {
      printf("%d ", m2[i][j]);
    }
    printf("\n");
  }
  printf("Matriz C\n");

  for(int i = 0; i < LA; i++) {
    for(int j = 0; j < CB; j++) {
      printf("%d ", m3[i][j]);
    }
  }
  free(m1);
  free(m2);
  free(m3);

  return 0;
}