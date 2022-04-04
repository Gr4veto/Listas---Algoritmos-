/*
Matéria: ALGORITMOS E LOGICA DE PROGRAMACAO - T01
Prof: MARCIONILO JOSE DA SILVA
Aluno: Wesley Costa da Silva
Matrícula: 20210064582

Unidade II - Lista - Strings - Q17
Linguagem C


*/

#include<stdio.h>
#include<locale.h>

int main (void){
	setlocale(LC_ALL,"");
	
	char marcas[5][10];
	int  i = 0, cont = 0;
	float km_porL[5], eco = 0;
	
	printf("Entre com 5 marcas de veículos automotivos:\n");
	for(i = 0; i < 5; i++){
		gets(marcas[i]);
	}
	
	printf("Digite quantos Km/L faz um veículo automotivo da marca: \n");
	for(i = 0; i < 5; i++){
		printf("- %s: ", marcas[i]);
		scanf("%f", &km_porL[i]);
	}
	
	for(i = 0; i < 5; i++){//VERIFICANDO QUAL MODELO FAZ MAIS KM POR LITRO
		if(i == 0){
			eco = km_porL[i];//INICIALMENTE NOSSA VARÍAVEL DE ANALISE ASSUME O VALOR DA PRIMEIRA POSIÇÃO DO VETOR
		}
		if(km_porL[i] > eco){//VERIFICA-SE QUAL POSIÇÃO TEM O MAIOR VALOR E ATRIBUI ESSE VALOR A NOSSA VARIÁVEL
			eco = km_porL[i];
			cont = i;//SALVA A POSIÇÃO DO VETOR, PARA SABER QUAL MARCA É A MAIS ECONOMICA ATÉ O PRESENTE MOMENTO
		}
	}	
	
	//RESULTADOS:
	printf("--------------------------------\n");
	printf("%s tem o modelo mais economico, \nfazendo %.2fKm por litro\n\n", marcas[cont], eco);
	
	printf("Segue quantos litros cada modelo\nconsome para fazer 1000Km:\n\n");
	for(i = 0; i < 5; i++){
		km_porL[i] = 1000/km_porL[i];
		printf("-%s: %.2fL\n", marcas[i], km_porL[i]);
	}
	
	
	
}