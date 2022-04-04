/*
Matéria: ALGORITMOS E LOGICA DE PROGRAMACAO - T01
Prof: MARCIONILO JOSE DA SILVA
Aluno: Wesley Costa da Silva
Matrícula: 20210064582

Unidade II
Lista - vetores I - Q2
*/

#include <stdio.h>

int main(void) {

  float vetor[10] = {1, 1.5, 2, 2.5, 3, 3.5, 4, 4.5, 5, 5.5};
  int ler = 0;
  
  printf("vetor =");
  for(ler = 0; ler<10; ler++){
    printf("|%.1f|", vetor[ler]);
  }
  
  printf("\nvetor invertido =");
  for(ler = 9; ler>=0; ler--){
    printf("|%.1f|", vetor[ler]);
  }
  
}