#include <stdio.h>
#include <stdlib.h>

void linha(int **m, int r, int c, int n, int linha){
	for(int i = 0; i < c; i++){
		m[linha][i] *= n;
	}
}

void coluna(int **m, int r, int c, int n, int coluna){
	for(int i = 0; i < r; i++){
		m[i][coluna] *= n;
	}
}

int main(){
	int **t = (int**)calloc(2, sizeof(int*));
	for(int i = 0; i < 2; i++){
		t[i] = (int*)calloc(2, sizeof(int));
	}
	t[0][0] = 1;
	t[0][1] = 2;
	t[1][0] = 3;
	t[1][1] = 4;
	linha(t, 2, 2, 3, 1);
	for(int i = 0; i < 2; i++){
		for(int j = 0; j < 2; j++){
			printf("\nt[%d][%d] = %d", i, j, t[i][j]);
		}
	}
	coluna(t, 2, 2, 3, 1);
	for(int i = 0; i < 2; i++){
		for(int j = 0; j < 2; j++){
			printf("\nt[%d][%d] = %d", i, j, t[i][j]);
		}
	}
	return 0;
}
