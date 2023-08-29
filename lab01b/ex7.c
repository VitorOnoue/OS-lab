#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct data{
	char nome[20];
	int idade;
	float peso;
	float altura;
};

int main(){
	struct data pessoas[3];
	struct data p1;
	strcpy(p1.nome, "Vitor");
	p1.idade = 19;
	p1.peso = 57.9;
	p1.altura = 1.65;
	pessoas[0] = p1;

	struct data p2;
	strcpy(p2.nome, "Kenzo");
	p2.idade = 23;
	p2.peso = 75.2;
	p2.altura = 1.8;
	pessoas[1] = p2;

	struct data p3;
	strcpy(p3.nome, "Koga");
	p3.idade = 74;
	p3.peso = 53;
	p3.altura = 1.55;
	pessoas[2] = p3;

	char x[20], y[20], z[20];
	printf("Pessoa 1: ");
	scanf("%s", &x);
	printf("Pessoa 2: ");
	scanf("%s", &y);
	printf("Pessoa 3: ");
	scanf("%s", &z);

	int size = sizeof(pessoas)/sizeof(pessoas[0]);
	for(int i = 0; i < size; i++){
		if(strcmp(x, pessoas[i].nome) != 0){
			if(i == size - 1){
				printf("\n\n%s não consta nos dados.", x);
			}
			continue;
		}
		else{
			printf("\n\nDados %s:\nIdade: %d\nPeso: %f\nAltura: %f", x, pessoas[i].idade, pessoas[i].peso, pessoas[i].altura);
			break;
		}
	}
	
	for(int i = 0; i < size; i++){
		if(strcmp(y, pessoas[i].nome) != 0){
			if(i == size - 1){
				printf("\n\n%s não consta nos dados.", y);
			}
			continue;
		}
		else{
			printf("\n\nDados %s:\nIdade: %d\nPeso: %f\nAltura: %f", y, pessoas[i].idade, pessoas[i].peso, pessoas[i].altura);
			break;
		}
	}

	for(int i = 0; i < size; i++){
		if(strcmp(z, pessoas[i].nome) != 0){
			if(i == size - 1){
				printf("\n\n%s não consta nos dados.", z);
			}
			continue;
		}
		else{
			printf("\n\nDados %s:\nIdade: %d\nPeso: %f\nAltura: %f", z, pessoas[i].idade, pessoas[i].peso, pessoas[i].altura);
			break;
		}
	}
	return 0;
}
