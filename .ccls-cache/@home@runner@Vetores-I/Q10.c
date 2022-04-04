/*
Matéria: ALGORITMOS E LOGICA DE PROGRAMACAO - T01
Prof: MARCIONILO JOSE DA SILVA
Aluno: Wesley Costa da Silva
Matrícula: 20210064582

Unidade II
Lista - vetores I - Q10
*/

#include <stdio.h>

int main(void) {

unsigned int i = 0;
int vetor1[10]={9,2,1,9,2,7,9,8,9,9}, vetor2[10]={8,1,3,1,4,2,7,7,1,9}, vetor3[20];

//preenchendo as posições pares:
for(i = 0; i <10; i++){
  vetor3[i*2] = vetor1[i];
}
//preenchendo as posições impares:
for(i = 0; i <10; i++){
  vetor3[i*2+1] = vetor2[i];
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
for(i = 0; i < 20; i++){
  printf("|%d|", vetor3[i]);
}

}