/*
Matéria: ALGORITMOS E LOGICA DE PROGRAMACAO - T01
Prof: MARCIONILO JOSE DA SILVA
Aluno: Wesley Costa da Silva
Matrícula: 20210064582

Unidade II - Lista - Strings - Q12
Linguagem C


*/

#include<stdio.h>
#include<locale.h>

int main (void){
	setlocale(LC_ALL,"");
	
	char str1[51];
	int  i = 0, tam = 0;
	
	printf("digite uma palavra: ");
	gets(str1);
	
	
	
	while(str1[i] != '\0'){ // verifica quantos caracteres tem a string
		tam++;
		i++;
	}

	printf("--------------------------------\n");
	
	for(i =  0; i < tam; i++){ //percorrendo string e somando 1 ao valor ascii de cada caractere
		str1[i] += 1; 
		}
	
	printf("Resultado: %s", str1);
}