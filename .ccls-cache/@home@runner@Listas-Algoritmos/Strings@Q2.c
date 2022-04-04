/*
Matéria: ALGORITMOS E LOGICA DE PROGRAMACAO - T01
Prof: MARCIONILO JOSE DA SILVA
Aluno: Wesley Costa da Silva
Matrícula: 20210064582

Unidade II - Lista - Strings 
Linguagem C


*/

#include<stdio.h>
#include<locale.h>

int main (void){
	setlocale(LC_ALL,"");
	
	char nome[20];
	
	printf("Digite um nome: ");
	scanf("%s", nome);
	
	if(nome[0]=='a' || nome[0]=='A'){
		printf("O nome escrito foi: %s", nome);
	}
}