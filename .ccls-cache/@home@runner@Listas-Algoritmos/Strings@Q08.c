/*
Matéria: ALGORITMOS E LOGICA DE PROGRAMACAO - T01
Prof: MARCIONILO JOSE DA SILVA
Aluno: Wesley Costa da Silva
Matrícula: 20210064582

Unidade II - Lista - Strings - Q08
Linguagem C


*/

#include<stdio.h>
#include<locale.h>

int main (void){
	setlocale(LC_ALL,"");
	
	char str1[20], str2[20];
	int  i = 0, tam = 0;
	
	printf("digite uma palavra: ");
	gets(str1);
	
	while(str1[i] != '\0'){ // verifica quantos caracteres tem a string
		tam++;
		i++;
	}

	printf("--------------------------------\n");
	
	printf("De trás para frente: ");
	for(i =  tam-1; i >= 0; i--){ //imprimindo a palavra de trás para frente
		printf("%c", str1[i]);
	}

}