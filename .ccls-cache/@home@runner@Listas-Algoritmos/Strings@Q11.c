/*
Matéria: ALGORITMOS E LOGICA DE PROGRAMACAO - T01
Prof: MARCIONILO JOSE DA SILVA
Aluno: Wesley Costa da Silva
Matrícula: 20210064582

Unidade II - Lista - Strings - Q11
Linguagem C


*/

#include<stdio.h>
#include<locale.h>

int main (void){
	setlocale(LC_ALL,"");
	
	char str1[20];
	int  i = 0, tam = 0, cont = 0;
	
	printf("digite uma palavra: ");
	gets(str1);
	
	
	
	while(str1[i] != '\0'){ // verifica quantos caracteres tem a string
		tam++;
		i++;
	}

	printf("--------------------------------\n");
	
	for(i =  0; i < tam; i++){ //contando os espaços
		if(str1[i]==' '){
			cont++;
		}
	}
	printf("A frase tem %d espaços em branco", cont);
}