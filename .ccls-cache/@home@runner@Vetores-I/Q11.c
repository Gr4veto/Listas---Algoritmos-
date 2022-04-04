/*
Matéria: ALGORITMOS E LOGICA DE PROGRAMACAO - T01
Prof: MARCIONILO JOSE DA SILVA
Aluno: Wesley Costa da Silva
Matrícula: 20210064582

Unidade II
Lista - vetores I - Q11
*/

#include <stdio.h>

int main(void) {

unsigned int i = 0;
int vetor1[10]={9,2,1,9,2,7,9,8,9,9}, vetor2[10]={8,1,3,1,4,2,7,7,1,9}, vetor3[20]={2,7,7,1,9,7,9,8,9,9}, vetor4[30];

//preenchendo as posições (0,3,6,9,12...):
for(i = 0; i <10; i++){
  vetor4[i*3] = vetor1[i];
}
//preenchendo as posições (1,4,7,1,13...):
for(i = 0; i <10; i++){
  vetor4[i*3+1] = vetor2[i];
}
//preenchendo as posições (2,5,8,11,14...):
for(i = 0; i <10; i++){
  vetor4[i*3+2] = vetor3[i];
}

//Exibindo vetores:
printf("Vetor 01: ");
for(i = 0; i < 10; i++){
  printf("|%d|", vetor1[i]);
}

printf("\nVetor 02: ");
for(i = 0; i < 10; i++){
  printf("|%d|", vetor2[i]);
}

printf("\nVetor 03: ");
for(i = 0; i < 10; i++){
  printf("|%d|", vetor3[i]);
}

printf("\nVetor 04: ");
for(i = 0; i < 30; i++){
  printf("|%d|", vetor4[i]);
}

}