#include <stdio.h>
#include <stdlib.h>

struct pessoa {
  int chegada;
  int direcao;
};

void escada(int n) {
  struct pessoa array[n]; // array de pessoas
  for (int i = 0; i < n; i++) { // pra cada pessoa, setar o tempo de chegada e a direcao
    scanf("%d %d", &array[i].chegada, &array[i].direcao);
  }

  int fim = array[0].chegada + 10; // primeira pessoa ja entra na escada direto, tempo que acaba é o momento que chega + 10
  int esperando, direcaoescada = array[0].direcao; // direcaoescada vai ter a direcao atual
  for (int i = 1; i < n; i++) { // passa por todas as outras pessoas
    if (array[i].chegada <= fim) { // se a pessoa chegar antes do ultimo que entrou terminar de usar a escada
      if(array[i].direcao == direcaoescada) {  // ve se a direcao é a mesma
        fim = array[i].chegada + 10; // atualiza o tempo
      }
      else { // se for diferente, nao pode entrar
          esperando = 1;
      }
    } else { // se for maior, veja se tem alguem esperando
      if (esperando) { // se tiver, aumenta 10 do tempo, pois a pessoa entrou assim que deu (momento em que o ultimo saiu)
        fim += 10;
        direcaoescada = direcaoescada == 1 ? 0 : 1; // muda a direcao da escada
        i--; // decrementa o i para passar pela pessoa novamente
      } else { // se nao tem ninguem esperando, é so entrar
        fim = array[i].chegada + 10; // muda o tempo para o momento em que chegou + 10
        direcaoescada = array[i].direcao; // muda a direcao da escada
      }
        esperando = 0; // se tinha alguem esperando anteriormente, o mesmo ja entrou
    }
  }
  if (esperando) { // depois de passar por todos, ainda é possivel ter alguem esperando, se tiver, aumenta 10 do tempo
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

