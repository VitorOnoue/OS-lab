#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
#define m 4
#define n 3

int amount; // quantidade de threads

int a[m][n] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {10, 11, 12}};

int x[n] = {2, 1, 3}, y[m];

void *Pth_math_vect(void *rank) {
  long my_rank = (long)rank;
  printf("thread %ld\n", my_rank);
  int i, j;
  int local_m = m / amount;
  int my_first_row = my_rank * local_m;
  int my_last_row = (my_rank + 1) * local_m - 1;

  for (i = my_first_row; i <= my_last_row; i++) {
    for (j = 0; j < n; j++) {
      y[i] += a[i][j] * x[j];
    }
  }
  return NULL;
}

int main() {
  pthread_t *threads;
  amount = m; // quantidade de threads igual a quantidade de linhas, cada thread cuida de uma linha
  threads = (pthread_t *)malloc(amount * sizeof(pthread_t)); // alocando memoria pras threads

  for (long i = 0; i < amount; i++) { // cria uma thread para cada linha e chama a funcao
    pthread_create(&threads[i], NULL, Pth_math_vect, (void *)i);
  }
  for (long i = 0; i < amount; i++) { // espera todas as threads terminarem
    pthread_join(threads[i], NULL);
  }
  free(threads); // libera as threads
  // print vetor
  printf("\nVetor y: ");
  int i;
  for (i = 0; i < m - 1; i++) {
    printf("%d, ", y[i]);
  }
  printf("%d\n", y[i]);
  return 0;
}

