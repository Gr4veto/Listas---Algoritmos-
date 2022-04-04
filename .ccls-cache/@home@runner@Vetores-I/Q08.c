/*
Matéria: ALGORITMOS E LOGICA DE PROGRAMACAO - T01
Prof: MARCIONILO JOSE DA SILVA
Aluno: Wesley Costa da Silva
Matrícula: 20210064582

Unidade II
Lista - vetores I - Q8
*/

#include <stdio.h>

int main(void) {

int vetor[20]={1,5,9,8,5,2,4,3,6,9,7,8,4,3,2,1,4,5,8,0}, i = 0, N = 0, cont = 0;

printf("Escolha um valor para N: ");
scanf("%d", &N);

for(i = 0; i<20; i++){
  if(N==vetor[i]){
    cont++;
  }
}

printf("O valor N = %d, teve um total de aparicoes igual a: %d", N, cont);

}