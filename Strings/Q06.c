/*
Matéria: ALGORITMOS E LOGICA DE PROGRAMACAO - T01
Prof: MARCIONILO JOSE DA SILVA
Aluno: Wesley Costa da Silva
Matrícula: 20210064582

Unidade II - Lista - Strings - Q06
Linguagem C
*/

#include<stdio.h>
#include<locale.h>

int main (void){
	setlocale(LC_ALL,"");
	
	char str1[20];
	int  i = 0, cont = 0;
	
	printf("String 01: ");
	gets(str1);

	printf("--------------------------------\n");
	
	for(i = 0; i < 20; i++){ //verificar quantos 1's foram digitados
		if(str1[i]=='1'){
			cont++;
		}
	}
//Resultado:
	
		printf("O numero de 1's na string é igual a: %d", cont);

}