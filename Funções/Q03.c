/*
Matéria: ALGORITMOS E LOGICA DE PROGRAMACAO - T01
Prof: MARCIONILO JOSE DA SILVA
Aluno: Wesley Costa da Silva
Matrícula: 20210064582

Unidade II - Lista - Funções - Q03 
Linguagem C


*/

#include<stdio.h>
#include<locale.h>

//marcadores das funções:
void contVogal (char *str);

int main(void){
setlocale(LC_ALL,"");
	
char string[30];
printf("Digite uma string: ");
gets(string);

contVogal(string);	
	
	
}

//contar vogais de uma string:
void contVogal (char *str){
	char vogal[11] = "aeiouAEIOU";
	int i = 0, j = 0, tam = 0, vogais = 0;
	
	while(str[tam]!='\0'){
        tam++;}

  	for(i = 0; i<tam; i++){
    for(j = 0; j<10; j++){

      if(str[i]==vogal[j]){
      vogais++;

      } 
   }
   }
printf("--------------------------------\n");	
printf("Quantidade de vogais: %d", vogais);	
}
