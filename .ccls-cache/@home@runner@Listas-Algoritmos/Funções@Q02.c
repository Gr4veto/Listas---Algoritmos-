/*
Matéria: ALGORITMOS E LOGICA DE PROGRAMACAO - T01
Prof: MARCIONILO JOSE DA SILVA
Aluno: Wesley Costa da Silva
Matrícula: 20210064582

Unidade II - Lista - Funções - Q02 
Linguagem C


*/

#include<stdio.h>
#include<locale.h>

//marcadores das funções:
void mediaVet (int tam, float *vt);

int main(void){
setlocale(LC_ALL,"");
	
float valores[3];
	
	
mediaVet(3, valores);
	
	
}

//Função para média de um vetor:
void mediaVet (int tam, float *vt){
	unsigned int i = 0;
	float media = 0;
	
	for(i = 0; i < tam; i++){
		printf("Valor 0%d: ", i+1);
		scanf("%f", &vt[i]);
		media = media+vt[i];
	}
	printf("--------------------------------\n");
	media = media/3;
	printf("Média: %.2f", media);	
}
