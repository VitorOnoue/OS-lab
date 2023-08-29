#include <stdio.h>
#include <stdlib.h>

void soma(int **a, int r, int c){
	if(r < 2){
		printf("Não há duas linhas");
	}
	else{
		for(int i = 0; i < c; i++){
			a[1][i] += a[0][i];
		}
	}
}

void mult(int **a, int r, int c){
	if(r < 2){
		printf("Não há duas linhas");
	}
	else{
		for(int i = 0; i < c; i++){
			a[1][i] *= a[0][i];
		}
	}
}

int main(){
	int **t = (int**)calloc(2, sizeof(int*));
  	for(int i = 0; i < 2; i++){
    		t[i] = (int*)calloc(3, sizeof(int));
  	}
	t[0][0] = 2;
	t[0][1] = 3;
	t[1][0] = 1;
	t[1][1] = 4;
	soma(t, 2, 2);
	mult(t, 2, 2);
	for(int i = 0; i < 2; i++){
		for(int j = 0; j < 2; j++){
			printf("\na[%d][%d] = %d", i, j, t[i][j]);
		}
	}
	return 0;
} 
