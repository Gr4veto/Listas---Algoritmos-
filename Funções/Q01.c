/*
Matéria: ALGORITMOS E LOGICA DE PROGRAMACAO - T01
Prof: MARCIONILO JOSE DA SILVA
Aluno: Wesley Costa da Silva
Matrícula: 20210064582

Unidade II - Lista - Funções - Q01 
Linguagem C


*/

#include<stdio.h>
#include<locale.h>

//marcadores das funções:
void vectorWrite (int tam, int *vt);
void comparadorVet (int tam, int *vt);

int main(void){
setlocale(LC_ALL,"");
	
int valores[3];

vectorWrite(3, valores);	
printf("--------------------------------\n");	
comparadorVet(3, valores);
	
	
}

//Função para gravação vetorial:
void vectorWrite (int tam, int *vt){
	unsigned int i = 0;
	
	for(i = 0; i < tam; i++){
		printf("Valor 0%d: ", i+1);
		scanf("%d", &vt[i]);
	}	
}

//Função para comparar valores:
void comparadorVet (int tam, int *vt){
	unsigned int i = 0;
	int menor = vt[0];
	
	for(i = 0; i < tam; i++){
		if(vt[i] < menor){
			menor = vt[i];
		}
	}
	printf("Menor valor digitado: %d", menor);
}