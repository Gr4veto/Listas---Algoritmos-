/*
Matéria: ALGORITMOS E LOGICA DE PROGRAMACAO - T01
Prof: MARCIONILO JOSE DA SILVA
Aluno: Wesley Costa da Silva
Matrícula: 20210064582

Unidade II - Lista - Strings - Q10
Linguagem C


*/

#include<stdio.h>
#include<locale.h>

int main (void){
	setlocale(LC_ALL,"");
	
	char str1[20], substituto;
	int  i = 0, tam = 0, cont = 0;
	
	printf("digite uma palavra: ");
	gets(str1);
	
	printf("digite um caractere para substituir as vogais: ");
	scanf("%c", &substituto);
	
	
	while(str1[i] != '\0'){ // verifica quantos caracteres tem a string
		tam++;
		i++;
	}

	printf("--------------------------------\n");
	
	for(i =  0; i < tam; i++){ //Verificando quantas vogais temos e substituindo pelo caractere
		if((str1[i]=='a')||(str1[i]=='e')||(str1[i]=='i')||(str1[i]=='o')||(str1[i]=='u')||(str1[i]=='A')||(str1[i]=='E')||(str1[i]=='I')||(str1[i]=='O')||(str1[i]=='U')){
			str1[i] = substituto;
			cont++;
		}
	}
	printf("A quantidade de vogais é igual a: %d\nsubstituindo...\n\nPalavra: %s", cont, str1);
}