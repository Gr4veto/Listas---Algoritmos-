/*
Matéria: ALGORITMOS E LOGICA DE PROGRAMACAO - T01
Prof: MARCIONILO JOSE DA SILVA
Aluno: Wesley Costa da Silva
Matrícula: 20210064582

Unidade II - Lista - Strings Q09
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
	for(i =  0; i < tam; i++){ //imprimindo a palavra de trás para frente
		if((str1[i]!='a')&&(str1[i]!='e')&&(str1[i]!='i')&&(str1[i]!='o')&&(str1[i]!='u')&&(str1[i]!='A')&&(str1[i]!='E')&&(str1[i]!='I')&&(str1[i]!='O')&&(str1[i]!='U')){
			printf("%c", str1[i]);
		}
	}

}