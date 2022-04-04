/*
Matéria: ALGORITMOS E LOGICA DE PROGRAMACAO - T01
Prof: MARCIONILO JOSE DA SILVA
Aluno: Wesley Costa da Silva
Matrícula: 20210064582

Unidade II
Lista - vetores I - Q5
*/

#include <stdio.h>

int main(void) {

int vetor[20] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20}, par[20], impar[20], v = 0, p = 0, i = 0;

printf("Vetor = ");
for(v = 0; v<20; v++){
  printf("|%d|", vetor[v]);
  if(vetor[v]%2 == 0){
    par[p]=vetor[v];
    p++;
  }
  else{
    impar[i]=vetor[v];
    i++;    
  }
}

v = p;

printf("\nPares = ");
for(p = 0; p<v; p++){
  printf("|%d|", par[p]);
}

v = i;

printf("\nImpares = ");
for(i = 0; i<v; i++){
  printf("|%d|", impar[i]);
}

}