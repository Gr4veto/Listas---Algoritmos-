/*
Matéria: ALGORITMOS E LOGICA DE PROGRAMACAO - T01
Prof: MARCIONILO JOSE DA SILVA
Aluno: Wesley Costa da Silva
Matrícula: 20210064582

Unidade II
Lista - vetores I - Q7
*/

#include <stdio.h>

int main(void) {

int vetor[5]={1,2,3,4,5}, soma = 0, produto = 1, i;

printf("Vetor: ");
for(i = 0; i<5; i++){
soma = soma+vetor[i];
produto = produto*vetor[i];
printf("|%d|", vetor[i]);
}
printf("\nSoma = %d", soma);
printf("\nProduto = %d", produto);

}