/*
Matéria: ALGORITMOS E LOGICA DE PROGRAMACAO - T01
Prof: MARCIONILO JOSE DA SILVA
Aluno: Wesley Costa da Silva
Matrícula: 20210064582

Unidade II
Lista - vetores I - Q4
*/

#include <stdio.h>

int main(void) {

char frase[11], vogal[11] = "aeiouAEIOU";
int i = 0, j = 0, tamanho = 0, vogais = 0;

printf("Digite ate 10 letras para preencher a frase:\n");
scanf("%s", frase);

while(frase[tamanho]!='\0'){
        tamanho++;}

  for(i = 0; i<tamanho; i++){
    for(j = 0; j<10; j++){

      if(frase[i]==vogal[j]){
      vogais++;

      } 
  }
    }

tamanho = tamanho-vogais;
printf("O total de consoantes que aparecem na frase e igual a: %d\n", tamanho);

if(tamanho>0){
  printf("Consoantes digitadas:");
  i=0;
while(frase[i]!='\0'){

  if(frase[i]!='a'&&frase[i]!='e'&&frase[i]!='i'&&frase[i]!='o'&&frase[i]!='u'&&frase[i]!='A'&&frase[i]!='E'&&frase[i]!='I'&&frase[i]!='O'&&frase[i]!='U'){

    printf("%c", frase[i]);

  }
i++;
 
}

}
}