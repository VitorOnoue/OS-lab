#include <stdio.h>

int main(){
	int x, y, z;
	printf("Ls: ");
	scanf("%d", &x);
	printf("Cs: ");
	scanf("%d", &y);
	int m[x][y];
	for(int i = 0; i < x; i++){
		for(int j = 0; j < y; j++){
			printf("\nm[%d][%d]: ", i, j);
			scanf("%d", &z);
			m[i][j] = z;
		}
	}
	int a,b,c;
	printf("\nNúmero para multiplicar: ");
	scanf("%d", &a);
	printf("Linha: ");
	scanf("%d", &b);
	for(int i = 0; i < y; i++){
		m[b][i] *= a;
	}
	printf("Coluna: ");
	scanf("%d", &c);
	for(int i = 0; i < x; i++){
		m[i][c] *= a;
	}
	for(int i = 0; i < x; i++){
		for(int j = 0; j < y; j++){
			printf("\nm[%d][%d] = %d", i, j, m[i][j]);
		}
	}
	return 0;
}
