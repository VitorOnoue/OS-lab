#include <stdio.h>
#include <stdlib.h>

struct pessoa {
  int chegada;
  int direcao;
};

void escada(int n) {
  struct pessoa array[n];
  for (int i = 0; i < n; i++) {
    scanf("%d %d", &array[i].chegada, &array[i].direcao);
  }

  int fim = array[0].chegada + 10;
  int has, direcaoescada = array[0].direcao;
  for (int i = 1; i < n; i++) {
    if (array[i].chegada <= fim) {
      if(array[i].direcao == direcaoescada) {
        fim = array[i].chegada + 10;
      }
      else {
        has = 1;
      }
    } else {
      if (has) {
        fim += 10;
        direcaoescada = direcaoescada == 1 ? 0 : 1;
        i--;
      } else {
        fim = array[i].chegada + 10;
        direcaoescada = array[i].direcao;
      }
      has = 0;
    }
  }
  if (has) {
    fim += 10;
  }
  printf("Resultado = %d", fim);
}

int main() {
  int n;
  scanf("%d", &n);
  escada(n);
  return 0;
}

