#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>

struct c {
  int saldo;
};
typedef struct c conta;

conta from, to;
int valor;

pthread_mutex_t mutex = PTHREAD_MUTEX_INITIALIZER;

void *transferencia(void *arg) {
  int *i = (int *)arg;
  pthread_mutex_lock(&mutex);
  printf("lock\n");
  if (from.saldo >= valor) {
    from.saldo -= valor;
    to.saldo += valor;
  }
  pthread_mutex_unlock(&mutex);
  printf("unlock\n");
  printf("Transferência concluída com sucesso!\n");
  printf("Saldo de c1: %d\n", from.saldo);
  printf("Saldo de c2: %d\n", to.saldo);
  return 0;
}

int main() {
  int i, f, t, p;
  printf("\nValor da conta from: ");
  if (scanf("%d", &f) != 1) {
    printf("Valor inválido.\n");
    exit(1);
  }
  printf("\nValor da conta to: ");
  if (scanf("%d", &t) != 1) {
    printf("Valor inválido.\n");
    exit(1);
  }
  from.saldo = f;
  to.saldo = t;
  printf("\nQuantidade de transferências simultâneas (até 100): ");
  if (scanf("%d", &p) != 1) {
    printf("Valor inválido.\n");
    exit(1);
  }
  valor = f/p;
  printf("\nTransferindo %d para a conta to\n", f);
  int e;
  pthread_t thread[p];
  for (i = 0; i < p; i++) {
    printf("criando thread %d\n", i);
    e = pthread_create(&thread[i], NULL, transferencia, NULL);
    if (e != 0) {
      perror("error");
    }
  }
  for (i = 0; i < p; i++) {
    pthread_join(thread[i], NULL);
  }
  printf("\nTransferências concluídas e memória liberada.\n");
  return 0;
}
