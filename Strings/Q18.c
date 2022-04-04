/*
Matéria: ALGORITMOS E LOGICA DE PROGRAMACAO - T01
Prof: MARCIONILO JOSE DA SILVA
Aluno: Wesley Costa da Silva
Matrícula: 20210064582

Unidade II - Lista - Strings - Q18
Linguagem C


*/

#include<stdio.h>
#include<locale.h>

int main (void){
	setlocale(LC_ALL,"");
	
	char frase1[50], frase2[50];
	int  i = 0, tam = 0;
	
	printf("digite uma frase: ");
	gets(frase1);

	printf("digite uma frase: ");
	gets(frase2);
	
	while(frase1[i] != '\0'){ // verifica quantos caracteres tem a frase
		tam++;
		i++;
	}

		for(i =  0; i < tam; i++){ //contando os A's
		if((frase1[i]=='a')||(frase1[i]=='A')){
			frase1[i]='*';
		}
	}
	tam = 0;
	i = 0;
		while(frase2[i] != '\0'){ // verifica quantos caracteres tem a frase
		tam++;
		i++;
	}

		for(i =  0; i < tam; i++){ //contando os A's
		if((frase2[i]=='a')||(frase2[i]=='A')){
			frase2[i]='*';
		}
	}
	
	printf("--------------------------------\n");
	
	printf("De trás para frente:\nFrase 01: ");
	for(i =  tam-1; i >= 0; i--){ //imprimindo a palavra de trás para frente
		printf("%c", frase1[i]);
	}
	printf("\nFrase 02: ");
	for(i =  tam-1; i >= 0; i--){ //imprimindo a palavra de trás para frente
	printf("%c", frase2[i]);
	}
}