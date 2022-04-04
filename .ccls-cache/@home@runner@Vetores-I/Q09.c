/*
Matéria: ALGORITMOS E LOGICA DE PROGRAMACAO - T01
Prof: MARCIONILO JOSE DA SILVA
Aluno: Wesley Costa da Silva
Matrícula: 20210064582

Unidade II
Lista - vetores I - Q9
*/

#include <stdio.h>

int main(void) {

unsigned int i = 0, j = 0, n = 0, tam = 0, tam2 = 0, aux = 0;
int vetor1[10]={9,2,1,9,2,7,9,8,9,9}, vetor2[10]={8,1,3,1,4,2,7,7,1,9}, no_repet1[tam], no_repet2[tam2], cont = 0, semelhantes[cont];


//APRESENTANDO VETORES INDIVIDUALMENTE, CONTENDO ALGARISMOS REPETIDOS EM SUA COMPOSIÇÃO:
printf("Vetor 01: ");
for(i=0;i<10;i++){
	printf("|%d|", vetor1[i]);
}

printf("\nVetor 02: ");
for(i=0;i<10;i++){
	printf("|%d|", vetor2[i]);
}

//PERCORRENDO O PRIMEIRO VETOR PARA ISOLAR OS ALGARISMOS REPETIDOS:
for(i=0; i<10; i++){
	aux = 0;
	for(j = i+1; j<10; j++){
		if(vetor1[i]==vetor1[j]){
			aux = 1;
		}
	}
	if(aux==0){
		tam++;
		no_repet1[n]=vetor1[i]; // SALVANDO APENAS 1 ALGARISMO DOS REPETIDOS EM UM VETOR LIMPO, SEM REPETIÇÕES
		n++;
	}
}
//APRESENTANDO O VETOR 01 FILTRADO, SEM ALGARISMOS REPITODOS, PARA QUE HAJA MELHOR COMPARAÇÃO ENTRE OS VALORES SEMELHANTES RELACIONADOS AO SEGUNDO VETOR
printf("\n---Removendo os algarismos repetidos de cada vetor individualmente---\n");
printf("Vetor 01: ");
for(i=0;i<tam;i++){
	printf("|%d|",no_repet1[i]);
}
printf("\n");

//MESMO PROCESSO FEITO NO VETOR 01 SENDO FEITO NO VETOR 02 - INICIO:

n=0;
for(i=0; i<10; i++){
	aux = 0;
	for(j = i+1; j<10; j++){
		if(vetor2[i]==vetor2[j]){
			aux = 1;
		}
	}
	if(aux==0){
		tam2++;
		no_repet2[n]=vetor2[i];
		n++;
	}
}
//FIM, APRESENTAÇÃO DO VETOR 02 LIMPO:
printf("Vetor 02: ");
for(i=0;i<tam2;i++){
	printf("|%d|",no_repet2[i]);
}


if(tam>tam2){ //VERIFICANDO QUAL DOS DOIS VETORES FICOU COM MAIOR TAMANHO APÓS O NIVELAMENTO - VETOR 01
//PECORRENDO AMBOS VETORES EM BUSCA DE VALORES SEMELHANTES E REGISTRANDO CASO HAJA
for(i=0; i<tam; i++){
	for(j=0; j<tam2; j++){
		if(no_repet2[i]==no_repet1[j]){
			cont++;
		}
	}
	
}
}

if(tam<tam2){ //VERIFICANDO QUAL DOS DOIS VETORES FICOU COM MAIOR TAMANHO APÓS O NIVELAMENTO - VETOR 02
//PECORRENDO AMBOS VETORES EM BUSCA DE VALORES SEMELHANTES E REGISTRANDO CASO HAJA
for(i=0; i<tam2; i++){
	for(j=0; j<tam; j++){
		if(no_repet2[i]==no_repet1[j]){
			cont++;
		}
	}
}

}
//RESULTADO FINAL SOLICITADO PELA QUESTÃO 09 - LISTA - VETORES I:
printf("\nA quantidade de numeros semelhantes entre os dois vetores foi de: %d\n", cont);

}