/*
Matéria: ALGORITMOS E LOGICA DE PROGRAMACAO - T01
Prof: MARCIONILO JOSE DA SILVA
Aluno: Wesley Costa da Silva
Matrícula: 20210064582

Unidade II - Lista - Strings - Q20
Linguagem C


*/

#include<stdio.h>
#include<locale.h>

int main (void){
	setlocale(LC_ALL,"");
	
	char S[20], C;
	int i, indice, tam = 0, j, ok = 0;
	
	printf("String S: ");
	gets(S);
	
	printf("Caractere para busca C: ");
	scanf("%c", &C);
	
	printf("Posição referencial i: ");
	scanf("%d", &i);
	
	printf("--------------------------------\n");
	
	while(S[tam] != '\0'){ //verifica-se o tamanho da string
		tam++;
	}
	
	for(j = i; j < tam; j++){ // busca o caractere a partir do referencial de forma crescente
		if(S[j] == C){
			i = j;// caso ache, guarda a posição para imprimi-la
			ok = 1;//confirma que achou o caractere
			break;
		}
	}
	
	if(ok==0){//caso não ache o caractere, busca o caractere a partir do referencial de forma decrescente
	for(j = i; j >= 0; j--){
		if(S[j] == C){
			i = j;
			ok = 1;
			break;
		}
	}
	if(ok==0){//caso não ache, o caractere não existe na string
		printf("O caractere digitado não existe na string S!");
	}else{//caso ache, imprimir sua posição
		printf("O caractere foi encontrado na posição %d da string", i);
	}
	}else{
		printf("O caractere foi encontrado na posição %d da string", i);
	}
	
	
}