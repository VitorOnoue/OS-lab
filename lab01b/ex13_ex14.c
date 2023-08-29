#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//funcao exercicio 13
void rem(char *s, int pos){
	int length = strlen(s);
	for(int i = pos; i < length; i++){
		s[i] = s[i + 1];
	}
}

//funcao exercicio 14
void ins(char *s, int pos, char x){
	int length = strlen(s);
	int i;
	for(i = length; i >= pos; i--){
		s[i + 1] = s[i];
	}
	s[i + 1] = x;
}
int main(){
	char Str[100] = "qwertyuiopasdfghjklzxcvbnm";
	printf("%s", Str);
	rem(Str, 3);
	printf("\n%s", Str);
	ins(Str, 3, 'r');
	printf("\n%s", Str);
	return 0;
}
