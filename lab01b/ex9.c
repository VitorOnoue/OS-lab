#include <stdio.h>
#include <stdlib.h>

void mod(int **m, int r, int c){
	for(int i = 0; i < r; i++){
		for(int j = 0; j < c; j++){
			if(m[i][j] < 0){
				m[i][j] *= -1;
			}
		}
	}
}

int main(){
	int **t = (int**)calloc(2, sizeof(int*));
	for(int i = 0; i < 2; i++){
		t[i] = (int*)calloc(2, sizeof(int));
	}
	t[0][0] = 2;
	t[0][1] = -2;
	t[1][0] = -3;
	t[1][1] = 3;
	mod(t, 2, 2);
	for(int i = 0; i < 2; i++){
		for(int j = 0; j < 2; j++){
			printf("\n%d", t[i][j]);
		}
	}
	return 0;
}
