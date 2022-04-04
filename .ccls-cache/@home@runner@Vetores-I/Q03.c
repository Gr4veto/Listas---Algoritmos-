/*
Matéria: ALGORITMOS E LOGICA DE PROGRAMACAO - T01
Prof: MARCIONILO JOSE DA SILVA
Aluno: Wesley Costa da Silva
Matrícula: 20210064582

Unidade II
Lista - vetores I - Q3
*/

#include <stdio.h>

int main(void) {

  float vetor[4] = {4.5, 5, 5.5, 10}, soma = 0, media = 0;
  int ler = 0;
  
  printf("BOLETIM:\n");
  for(ler = 0; ler<4; ler++){
    printf("Nota %d = %.1f\n", ler+1, vetor[ler]);
    soma = soma+vetor[ler];
  }
  
  media = soma/4;
  
  printf("\nMédia = %.1f", media);
  
}