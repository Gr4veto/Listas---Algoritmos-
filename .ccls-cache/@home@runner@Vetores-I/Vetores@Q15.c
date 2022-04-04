/*
Matéria: ALGORITMOS E LOGICA DE PROGRAMACAO - T01
Prof: MARCIONILO JOSE DA SILVA
Aluno: Wesley Costa da Silva
Matrícula: 20210064582

Unidade II
Lista - vetores I - Q15
*/

//O CÓDIGO DA Q14 FOI APROVEITADO PARA ORDENAR O VETOR, POR FIM, SÓ FOI COLOCADO EM ORDEM DECRESCENTE
#include <stdio.h>

int main(void) {

int vetor[10]={9,6,4,2,8,1,3,5,7,0};
int i = 0;
    int save;
    int cont = 0;
    
    printf("Vetor desordenado: \n");
    for (i=0; i<10; i++){
    printf("|%d|", vetor[i]);
     }
     i=0;
    
    /*Aqui inicia um loop onde os elementos do vetor
    irão ser comparados 2 a 2, verificando de o anterior
    é maior que o atual, quando isso acontece, o código troca 
    o numero atual de posição com o anterior, isso se repete até 
    que seja encontrado seu "lugar" no vetor, esse processo repetirar 
    até o termino do laço*/
    while(i<10){
    
    if (i==0 || vetor[i-1] <= vetor[i]){ //Se você estiver no início do vetor, vá para o elemento(de vetor[0] a vetor[1]). Se o elemento atual for maior ou igual ao elemento anterior, dê um passo à direita
      i++;
    }
    else{// caso nao esteja no incio do vetor é feito o codigo onde vai trocar a ordem e vai decrementar o codigo e imprimir a ordem final correta
      save = vetor[i-1];
      vetor[i-1] = vetor[i];
      vetor[i] = save;
      i -= 1;
    }
    
  int i;

  printf("\nOrdenando: ");
    for (i=0; i<10; i++){
    printf("|%d|", vetor[i]);
     }
    cont++;
  }
  printf("\nForam realizadas %d interacoes para organizar o vetor: \n", cont);
      for (i=0; i<10; i++){
    printf("|%d|", vetor[i]);
     }
     
 // RESPOSTA DA QUESTÃO 15:
 
  printf("\nOrdem decrescente: \n"); 
      for (i=9; i>=0; i--){
    printf("|%d|", vetor[i]);
     }
  
}