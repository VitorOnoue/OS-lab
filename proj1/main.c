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
  int j = *i;
  if(j == 0 && from.saldo >= valor){
    pthread_mutex_lock(&mutex); // mutex impede que outras threads acessem essa área
    from.saldo -= valor;
    to.saldo += valor;
  }
  else if(j == 1 && to.saldo >= valor){
    pthread_mutex_lock(&mutex); // mutex impede que outras threads acessem essa área
    to.saldo -= valor;
    from.saldo += valor;
  }
  else{
    printf("Saldo insuficiente para transferir.\n");
    exit(1);
  }
  pthread_mutex_unlock(&mutex); // mutex libera as áreas críticas para as outras threads
  printf("Transferência concluída com sucesso!\n");
  printf("Saldo de from: %d\n", from.saldo);
  printf("Saldo de to: %d\n", to.saldo);
  return 0;
}

int main() {
  int i, fromv, tov, p, d, vt; //fromv = from valor, tov = to valor, p = pthread, d = destination, vt = valor transferencia
  printf("\nValor da conta from: ");
  if (scanf("%d", &fromv) != 1) {
    printf("Valor inválido.\n");
    exit(1);
  }
  printf("\nValor da conta to: ");
  if (scanf("%d", &tov) != 1) {
    printf("Valor inválido.\n");
    exit(1);
  }
  from.saldo = fromv;
  to.saldo = tov;
  
  printf("\nQuantidade de transferências simultâneas (até 100): ");
  if (scanf("%d", &p) != 1) {
    printf("Valor inválido.\n");
    exit(1);
  }
  else if(p <= 0 || p > 100){
    printf("Quantidade de threads menor que 1 ou maior que 100.\n");
    exit(1);
  }
  printf("\nValor a ser transferido: ");
  if (scanf("%d", &vt) != 1){
    printf("Valor inválido.\n");
    exit(1);
  }
  printf("\nTransferir para to (0) ou para from (1): ");
  if (scanf("%d", &d) != 1){
    printf("Valor inválido.\n");
    exit(1);
  }
  else if(d != 0 && d != 1){
    printf("0 ou 1.\n");
    exit(1);
  }
  valor = vt/p;
  int e;
  pthread_t thread[p]; // declara array de ids de pthreads
  for (i = 0; i < p; i++) {
    printf("Criando thread %d\n", i);
    e = pthread_create(&thread[i], NULL, transferencia, &d); // cria threads no array definido anteriormente, passando a funcao como a subrotina a ser executada, e passando o seu "numero"
    if (e != 0) {
      perror("pthread error");
      exit(1);
    }
  }
  for (i = 0; i < p; i++) {
    pthread_join(thread[i], NULL); // espera a thread no endereço do parametro terminar
  }
  pthread_mutex_destroy(&mutex);
  printf("\nTransferências concluídas e memória liberada.\n");
  return 0;
}                                                                                                                      
