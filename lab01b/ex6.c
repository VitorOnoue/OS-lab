#include <stdio.h>
#include <stdlib.h>

int main(){
        int r, c;
        printf("Ls: ");
        scanf("%d", &r);
        printf("Cs: ");
        scanf("%d", &c);
        int m[r][c];
        for(int i = 0; i < r; i++){
                for(int j = 0; j < c; j++){
                        printf("\nm[%d][%d]: ", i, j);
                        scanf("%d", &m[i][j]);
                }
        }
	int n[c][r];
	int j, k;
	for(j = 0; j < c; j++){
		for(k = 0; k < r; k++){
			n[j][k] = m[k][j];
		}
	}
	for(int l = 0; l < c; l++){
		for(int o = 0; o < r; o++){
			printf("\nt[%d][%d] = %d", l, o, n[l][o]);
		}
	}
        return 0;
}
