#include <stdio.h>
#include <stdlib.h>
int main() {
  int x;
  int y;
  printf("Digite o tamanho da matriz quadrada: ");
  scanf("%d", &x);
  printf("Digite o limite de números da matriz: ");
  scanf("%d", &y);
  int array[x][x];
  for (int i = 0; i < x; i++) {
    for (int j = 0; j < x; j++) {
      array[i][j] = rand() % y;
    }
  }
  int menor = array[0][0];
  int r = 0;
  for (int i = 0; i < x; i++) {
    for (int j = 0; j < x; j++) {
      if (array[i][j] < menor) {
        menor = array[i][j];
        r = i;
      }
    }
  }
  printf("\nNúmero da linha com o menor número: %d", r);
}
