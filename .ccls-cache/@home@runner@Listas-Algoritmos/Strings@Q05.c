/*
Matéria: ALGORITMOS E LOGICA DE PROGRAMACAO - T01
Prof: MARCIONILO JOSE DA SILVA
Aluno: Wesley Costa da Silva
Matrícula: 20210064582

Unidade II - Lista - Strings - Q05
Linguagem C


*/

#include<stdio.h>
#include<locale.h>

int main (void){
	setlocale(LC_ALL,"");
	
	char str1[20], str2[20];
	int  i = 0, tam = 0;
	
	printf("String 01: ");
	gets(str1);
	
	printf("String 02: ");
	gets(str2);
	
	while(str1[i] != '\0' && str2[i] != '\0'){ // verifica quantos caracteres tem as strings caso sejam iguais, ou quantos caracteres tem a menor string
		tam++;
		i++;
	}

	printf("--------------------------------\n");
	
	for(i = 0; i < tam; i++){ //verificar se as strings são iguais, caractere a caractere
		if(str1[i]!=str2[i]){
			break;
		}
	}
//Resultado:
	if(i != tam){
		printf("As strings são diferentes");
	}
	else{
		printf("As strings são iguais");	
	}
}