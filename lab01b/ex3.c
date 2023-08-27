#include <stdio.h>

int main(){
	int x, y = 1;
	printf("N: ");
	scanf("%d", &x);
	while (y <= x){
		printf("\n");
		for(int i = y; i <= x; i++){
			printf("%d  ", i);
		}
		y++;
		x--;
	}
	return 0;
}
