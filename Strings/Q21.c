/*
Matéria: ALGORITMOS E LOGICA DE PROGRAMACAO - T01
Prof: MARCIONILO JOSE DA SILVA
Aluno: Wesley Costa da Silva
Matrícula: 20210064582

Unidade II - Lista - Strings - Q21
Linguagem C


*/

#include<stdio.h>
#include<locale.h>
#include<string.h>

int main (void){
	setlocale(LC_ALL,"");
	
	int i, tam = 0;
	char palavra[2][20];
	
	for(i = 0; i<2; i++){
		printf("Palavra 0%d: ", i+1);
		gets(palavra[i]);
	}
	
	while((palavra[0][tam] != '\0')||(palavra[1][tam] != '\0')){
		tam++;
	}
	
	printf("--------------------------------\n");
	for(i = 0; i < tam; i++){
		if(strcmp(palavra[0], palavra[1])< 0){ //comparando qual palavra vem antes
			printf("\"%s\" vem primeiro", palavra[0]);
			break;
		}
		if(strcmp(palavra[0], palavra[1])> 0){
			printf("\"%s\" vem primeiro", palavra[1]);
			break;
		}
		if(strcmp(palavra[0], palavra[1])> 0){
		printf("As palavras são iguais");
		break;
		}
	}
}