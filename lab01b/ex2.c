#include <stdio.h>

int main(){
	float n1, n2, n3, me, ma;
	printf("n1: ");
	scanf("%f", &n1);
	printf("n2: ");
        scanf("%f", &n2);
	printf("n3: ");
	scanf("%f", &n3);
	printf("me: ");
	scanf("%f", &me);
	ma = (n1 + (n2*2) + (n3*3) + me)/7;
	printf("\nMédia: %f", ma);
	if(ma >= 9){
		printf("\nA");
	}
	else if(ma >= 7.5 && ma < 9){
		printf("\nB");
	}
	else if(ma >= 6 && ma < 7.5){
		printf("\nC");
	}
	else if(ma >= 4 && ma < 6){
		printf("\nD");
	}
	else{
		printf("\nE");
	}
}
