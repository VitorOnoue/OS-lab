#include <stdio.h>
#include <stdlib.h>

struct pessoa {
  int chegada;
  int direcao;
};
void escada(FILE *f, int n, int i) {
  struct pessoa array[n];
  for (int i = 0; i < n; i++) {
    fscanf(f, "%d %d", &array[i].chegada, &array[i].direcao);
  }

  int fim = array[0].chegada + 10;
  int esperando, direcaoescada = array[0].direcao;
  for (int i = 1; i < n; i++) {
    if (array[i].chegada <= fim) {
      if (array[i].direcao == direcaoescada) {
        fim = array[i].chegada + 10;
      } else {
        esperando = 1;
      }
    } else {
      if (esperando) {
        fim += 10;
        direcaoescada ^= 1;
        i--;
      } else {
        fim = array[i].chegada + 10;
        direcaoescada = array[i].direcao;
      }
      esperando = 0;
    }
  }
  if (esperando) {
    fim += 10;
  }
  FILE *g;
  char saida[12];
  sprintf(saida, "output/S_%d", i);
  g = fopen(saida, "r");
  int esperado;
  fscanf(g, "%d", &esperado);
  printf("Resultado esperado = %d - Resultado obtido = %d\n", esperado, fim);
}

int main() {
  int n;
  FILE *f;
  char teste[11];
  for (int i = 1; i < 59; i++) {
    sprintf(teste, "input/E_%d", i);
    printf("%s - ", teste);
    f = fopen(teste, "r");
    fscanf(f, "%d", &n);
    escada(f, n, i);
    fclose(f);
  }
  return 0;
}

