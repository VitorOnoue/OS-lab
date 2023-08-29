#include <stdio.h>
#include <stdlib.h>

int** transposta(int **m, int r, int c){
	int **t = (int**)calloc(c, sizeof(int*));
	for(int i = 0; i < c; i++){
		t[i] = (int*)calloc(r, sizeof(int));
	}
	for(int i = 0; i < c; i++){
		for(int j = 0; j < r; j++){
			t[i][j] = m[j][i];
		}
	}
	return t;
}

int main(){
	int **t = (int**)calloc(2, sizeof(int*));
	for(int i = 0; i < 2; i++){
		t[i] = (int*)calloc(3, sizeof(int));
	}
	t[0][0] = 1;
	t[0][1] = 2;
	t[0][2] = 3;
	t[1][0] = 4;
	t[1][1] = 5;
	t[1][2] = 6;
	int **u = transposta(t, 2, 3);
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 2; j++){
			printf("\na[%d][%d] = %d", i, j, u[i][j]);
		}
	}
	return 0;
}

