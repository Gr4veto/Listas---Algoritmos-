/*
Matéria: ALGORITMOS E LOGICA DE PROGRAMACAO - T01
Prof: MARCIONILO JOSE DA SILVA
Aluno: Wesley Costa da Silva
Matrícula: 20210064582

Unidade II - Lista - Strings - Q07
Linguagem C
*/

#include<stdio.h>
#include<locale.h>

int main (void){
	setlocale(LC_ALL,"");
	
	char str1[20];
	int  i = 0;
	
	printf("String: ");
	gets(str1);

	printf("--------------------------------\n");
	
	for(i = 0; i < 20; i++){ //verificar quantos 0's foram digitados e substitui por 1's
		if(str1[i]=='0'){
			str1[i] = '1';
		}
	}
//Resultado:
	
	printf("Substituindo as ocorrencias de\n'0' por '1...\n--------------------------------\nstring: %s", str1);
	
}