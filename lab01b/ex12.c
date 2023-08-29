#include <stdio.h>

int pos(char *a, char b, int size){
	for(int i = 0; i < size; i++){
		if(a[i] == b){
			return i;
		}
	}
	return -1;
}

int main(){
	char s[5] = "teste";
	printf("%d", pos(s, 's', 5));
	return 0;
}
