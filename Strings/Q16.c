/*
Matéria: ALGORITMOS E LOGICA DE PROGRAMACAO - T01
Prof: MARCIONILO JOSE DA SILVA
Aluno: Wesley Costa da Silva
Matrícula: 20210064582

Unidade II - Lista - Strings - Q16
Linguagem C


*/

#include<stdio.h>
#include<locale.h>

int main (void){
	setlocale(LC_ALL,"");
	
	char str1[20], L1, L2;
	int  i = 0, tam = 0;
	
	printf("digite uma palavra: ");
	gets(str1);
	
	printf("digite L1 e L2(ex.: a e): ");
	scanf("%c %c", &L1, &L2);
	
	
	while(str1[i] != '\0'){ // verifica quantos caracteres tem a string
		tam++;
		i++;
	}

	printf("--------------------------------\n");
	
	for(i =  0; i < tam; i++){ //Verificando quantos L1 temos e substituindo pelo L2
		if(str1[i]==L1){
			str1[i] = L2;
		}
	}
	printf("Resultado: %s",  str1);
}