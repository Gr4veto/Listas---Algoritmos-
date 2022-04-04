/*
Matéria: ALGORITMOS E LOGICA DE PROGRAMACAO - T01
Prof: MARCIONILO JOSE DA SILVA
Aluno: Wesley Costa da Silva
Matrícula: 20210064582

Unidade II - Lista - Strings - Q19
Linguagem C


*/

#include<stdio.h>
#include<locale.h>

int main (void){
	setlocale(LC_ALL,"");
	
	char produto[20];
	float valores[3]; //[0]: valor total, [1]: desconto, [2]: valor a ser pago
	
	printf("Digite o nome do produto e seu preço(ex: perfume 109,99): ");
	scanf("%s %f", produto, &valores[0]);
	
	valores[1] = valores[0]*0.1;
	valores[2] = valores[0]-valores[1];
	
	printf("--------------------------------\n");
	printf("Produto: %s\n", produto);
	printf("Total = R$%.2f\n\n", valores[0]);
	printf("Desconto(10%%) = R$%.2f\n", valores[1]);
	printf("A pagar (à vista) = R$%.2f", valores[2]);
}