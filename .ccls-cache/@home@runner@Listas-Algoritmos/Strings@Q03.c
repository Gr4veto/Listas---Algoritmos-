/*
Matéria: ALGORITMOS E LOGICA DE PROGRAMACAO - T01
Prof: MARCIONILO JOSE DA SILVA
Aluno: Wesley Costa da Silva
Matrícula: 20210064582

Unidade II - Lista - Strings - Q03
Linguagem C


*/

#include<stdio.h>
#include<locale.h>

int main (void){
	setlocale(LC_ALL,"");
	
	char nome[20];
	unsigned int i;
	
	printf("Digite um nome: ");
	scanf("%s", nome);
	
	printf("As quatro primeiras letras do nome são: ");
	for(i = 0; i < 4; i++){
		printf("%c", nome[i]);
	}
}