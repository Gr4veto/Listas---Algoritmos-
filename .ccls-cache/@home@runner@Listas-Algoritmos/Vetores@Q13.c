/*
Matéria: ALGORITMOS E LOGICA DE PROGRAMACAO - T01
Prof: MARCIONILO JOSE DA SILVA
Aluno: Wesley Costa da Silva
Matrícula: 20210064582

Unidade II
Lista - vetores I - Q13
*/

#include <stdio.h>

int main(void) {

unsigned int i = 0;
int cont = 1;
float temperatura[12], soma = 0, media;
char mesI[13]={"JFMAMJJASOND"}, mesII[13]={"AEABAUUGEUOE"}, mesIII[13]={"NVRRINLOTTVZ"};

printf("Preencha com a média da temperatura mensal!\n");

for(i = 0; i < 12; i++){
    printf("%d - %c%c%c: ", i+1, mesI[i], mesII[i], mesIII[i]);
    scanf("%f", &temperatura[i]);
    soma = soma + temperatura[i];
}
    media = soma/12;

printf("\nMeses com a temperatura acima da media anual(%.1f graus):\n", media);   
for(i = 0; i < 12; i++){
    if(temperatura[i]>media){
        switch (i){
        case 0:
        printf("%d - Janeiro = %.1f graus\n", cont, temperatura[i]);
        cont++;
        break;
        case 1:
        printf("%d - Fevereiro = %.1f graus\n", cont, temperatura[i]);
        cont++;
        break;
        case 2:
        printf("%d - Março = %.1f graus\n", cont, temperatura[i]);
        cont++;
        break;
        case 3:
        printf("%d - Abril = %.1f graus\n", cont, temperatura[i]);
        cont++;
        break;
        case 4:
        printf("%d - Maio = %.1f graus\n", cont, temperatura[i]);
        cont++;
        break;
        case 5:
        printf("%d - Junho = %.1f graus\n", cont, temperatura[i]);
        cont++;
        break;
        case 6:
        printf("%d - Julho = %.1f graus\n", cont, temperatura[i]);
        cont++;
        break;
        case 7:
        printf("%d - Agosto = %.1f graus\n", cont, temperatura[i]);
        cont++;
        break;
        case 8:
        printf("%d - Setembro = %.1f graus\n", cont, temperatura[i]);
        cont++;
        break;
        case 9:
        printf("%d - Outubro = %.1f graus\n", cont, temperatura[i]);
        cont++;
        break;
        case 10:
        printf("%d - Novembro = %.1f graus\n", cont, temperatura[i]);
        cont++;
        break;
        case 11:
        printf("%d - Dezembro = %.1f graus\n", cont, temperatura[i]);
        cont++;
    }
    
}
}
}