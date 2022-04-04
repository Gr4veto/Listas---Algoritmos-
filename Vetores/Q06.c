/*
Matéria: ALGORITMOS E LOGICA DE PROGRAMACAO - T01
Prof: MARCIONILO JOSE DA SILVA
Aluno: Wesley Costa da Silva
Matrícula: 20210064582

Unidade II
Lista - vetores I - Q6
*/

#include <stdio.h>

int main(void) {

float alunos[10], media, nota[4];
int ler, i = 0;

while(i<10){

printf("Digite as notas do Aluno %d\n", i+1);
printf("Nota 01: ");
scanf("%f", &nota[0]);
printf("Nota 02: ");
scanf("%f", &nota[1]);
printf("Nota 03: ");
scanf("%f", &nota[2]);
printf("Nota 04: ");
scanf("%f", &nota[3]);

media = (nota[0]+nota[1]+nota[2]+nota[3])/4;
alunos[i] = media;

i++;
}

printf("Medias maiores ou iguais a 7.0:\n");
for(ler = 0; ler<10; ler++){
  if(alunos[ler]>=7){
    printf("Aluno %d: %.1f\n", ler+1, alunos[ler]);
  }
}
}