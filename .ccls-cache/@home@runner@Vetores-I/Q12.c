/*
Matéria: ALGORITMOS E LOGICA DE PROGRAMACAO - T01
Prof: MARCIONILO JOSE DA SILVA
Aluno: Wesley Costa da Silva
Matrícula: 20210064582

Unidade II
Lista - vetores I - Q12
*/

#include <stdio.h>

int main(void) {

unsigned int i = 0;
int idade[30]={9, 17, 14, 9, 13, 12, 10, 8, 11, 9, 16, 12, 13, 14, 15, 14, 15, 17, 10, 10, 13, 12, 15, 14, 12, 13, 10, 16, 17, 15}, cont=0;
float altura[30]={1.30, 1.78, 1.65, 1.60, 1.60, 1.60, 1.50, 1.35, 1.54, 1.55, 1.70, 1.58, 1.55, 1.68, 1.69,1.60, 1.79, 1.85, 1.52, 1.53, 1.62, 1.55, 1.69, 1.68, 1.60, 1.68, 1.52, 1.48, 1.69, 1.50}, media = 0, soma = 0;

for(i=0;i<30;i++){
  soma = soma+altura[i];
}
media = soma/30;

for(i=0;i<30;i++){
      if(idade[i]>=13 && altura[i]<media){
    cont++;
  }
  
}

printf("O total de alunos com idade maior ou igual a 13 anos abaixo da media de altura(%.2fm) e de: %d", media, cont);
}