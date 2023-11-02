#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>

long n = 1000000;
int amount = 4;
pthread_mutex_t mutex = PTHREAD_MUTEX_INITIALIZER;

long double sum = 0;

void *Thread_sum(void *rank) {
  long my_rank = (long)rank;
  double factor;
  long long i;
  long long my_n = n / amount;
  long long my_first_i = my_n * my_rank;
  long long my_last_i = my_first_i + my_n;

  if (my_first_i % 2 == 0) {
    factor = 1.0;
  } else {
    factor = -1.0;
  }
  for (i = my_first_i; i < my_last_i; i++, factor = -factor) {
    pthread_mutex_lock(&mutex);
    sum += factor / (2 * i + 1);
    pthread_mutex_unlock(&mutex);
  }
  return NULL;
}

int main(){
  pthread_t *threads;
  threads = (pthread_t *)malloc(amount * sizeof(pthread_t));
  for (long i = 0; i < amount; i++) {
    pthread_create(&threads[i], NULL, Thread_sum, (void *)i);
  }
  for (long i = 0; i < amount; i++) {
    pthread_join(threads[i], NULL);
  }
  printf("Quantidade de threads: %d\n", amount);
  printf("pi = %Lf\n", sum * 4);
  return 0;
}
