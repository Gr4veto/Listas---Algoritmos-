/*
Matéria: ALGORITMOS E LOGICA DE PROGRAMACAO - T01
Prof: MARCIONILO JOSE DA SILVA
Aluno: Wesley Costa da Silva
Matrícula: 20210064582

Unidade II - Lista - Strings - Q04
Linguagem C


*/

#include<stdio.h>
#include<locale.h>

int main (void){
	setlocale(LC_ALL,"");
	
	char nome[20], sexo[10], sex[9] = "feminino";
	int idade, i;
	
	printf("Digite seu primeiro nome: ");
	scanf("%s", nome);
	
	printf("Digite sua idade: ");
	scanf("%d", &idade);
	
	printf("Digite seu sexo: ");
	scanf("%s", sexo);
	
	printf("--------------------------------\n");
	
	for(i = 0; i < 9; i++){
		if(sexo[i]!=sex[i]){
			break;
		}
	}

	if(i == 9 && idade < 25){
		printf("%s - ACEITA", nome);
	}
	else{
		printf("%s - NÃO ACEITA", nome);	
	}
}