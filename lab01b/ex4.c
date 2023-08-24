#include <stdio.h>
#include <string.h>

int main(){
	char n1[20], n2[20];
	scanf("%s", &n1);
	scanf("%s", &n2);
	if(strcmp(n1,n2) > 0){
		printf("%s, %s", n2, n1);
	}
	else{
		printf("%s, %s", n1, n2);
	}
}
