/*
Matéria: ALGORITMOS E LOGICA DE PROGRAMACAO - T01
Prof: MARCIONILO JOSE DA SILVA
Aluno: Wesley Costa da Silva
Matrícula: 20210064582

Unidade II - Testes 
Linguagem C

Files - Arquivos

*/

/*
Explicações:

--------ABRIR ARQUIVO:

 - Função fopen(): Permite abrir um arquivo em modo de leitura ou gravação.
 	Forma geral: FILE *fopen(char *nome, char *modo);
		EXEMPLO:
			FILE *F;
			F = fopen("arquivo.txt","w");

	***Verificando se o arquivo foi aberto:
	
		if (f == NULL){
		printf("erro");
		exit(1); -- aborta programa
		}

	***Caminhos para o nome do arquivo:
	
	ABSOLUTO:
		f = fopen("C:\\Project\\arq.txt","w"); -- nesse caso, conseguimos encontrar o arquivo em qualquer pasta
	RELATIVO:
		f = fopen("arquivo.txt","w"); -- nesse caso, só encontraremos o arquivo se ele estiver na pasta do programa
		f = fopen("..\\Novo\\arq2.txt","w") -- nesse caso, volta uma pasta e procura o arquivo na pasta "Novo"
	
	***Modos de abrir arquivo:
	
	-- leitura de arquivo texto:
		f = fopen("arquivo.txt","r");
	-- escrita de arquivo texto:
		f = fopen("arquivo.txt","w");
		
	-- leitura de arquivo binário:
		f = fopen("arquivo.txt","rb");
	-- escrita de arquivo binário:
		f = fopen("arquivo.txt","wb");
		
--------FECHAR ARQUIVO:

 - Função fclose(); -- Utilizada para fechar o arquivo quando terminar de usar
 	Forma geral:
		int fclose (FILE *f); -- retorna ZERO no caso de sucesso
		EXEMPLO:
			fclose(f);
			
--------GRAVAR ARQUIVO (caractere):

 - Função fputc, forma geral:
 	int fputc(char c, FILE *FP);
 
 	Utilizada para gravar um caractere no arquivo, em caso de erro, ela retorna EOF (end of file).
 	em sucesso ela retorna no caractere.
 
 	EXEMPLO COMPLETO DE GRAVAÇÃO:
 	
********************************************************	
	#include<stdio.h>
	#include<locale.h>	
	
 	int main(void){
 		setlocale(LC_ALL,"");
 		
 		char frase[30] = "Testando pra ver se funfa :)";
		int i, tamanho = 0;
		
		FILE *f;
		f = fopen("arq.txt", "w");
		
		if(f == NULL){
			printf("erro na abertura do arquivo\n");
		}
		
		// Gravar caractere a caractere
		while(frase[tamanho]!='\0'){
		tamanho++;}

	 	for(i = 0; i<30; i++){
			fputc(frase[i], f);
		 }
	 	fclose(f);
	 	
	 }	
********************************************************

--------LER ARQUIVO (fscan):
	- Função fscan
		Forma geral: 
		fscan(nome_do_arquivo,"%x", &variável onde será guardada o ponteiro);
		
		Essa função guarda um caractere na variável escolhida, caso haja um loop, o ponteiro se movo do inicio do arquivo até o fim.
		Quando o arquvio chega a seu fim, a função fscan retorna EOF.
		
		EXEMPLO COMPLETO DE LEITURA(fscan):
		
********************************************************	
	
#include<stdio.h>
#include<locale.h>	
	
 	int main(void){
 		setlocale(LC_ALL,"");
 		
 		FILE *arq; //definindo ponteiro para percorrer o arquivo
 		char aux, nome[30];// definindo variável para guardar o ponteiro e outra variável para receber o nome do arquivo do teclado
 		
 		printf("Digite o nome do arquivo:\n");
 		scanf("%s", &nome);
 		
 		arq = fopen(nome, "r");// abrindo arquivo no modo leitura utilizando o ponteiro arq
 		
 		if(arq == NULL){ //verificando se o arquivo foi aberto
			printf("erro na abertura do arquivo\n");
		}
		else{
			printf("\n-----Dados do arquivo:\n\n");
			
			while(fscanf(arq,"%c",&aux) != EOF){ //percorrendo o arquivo caractere por caractere até o fim
				printf("%c", aux);
			}
		
		}
		fclose(arq);	
	}
	
********************************************************
	
--------LER ARQUIVO (caractere - fgetc):
	- Função fgetc
		Forma geral: 
		int fgetc(FILE *F)
		
		Em caso de erro, retorna EOF.
		Em suma, essa função funciona assim como a fscanf.
		
		EXEMPLO COMPLETO DE LEITURA(fgetc):	
		
********************************************************	
	
#include<stdio.h>
#include<locale.h>	
	
 	int main(void){
 		setlocale(LC_ALL,"");
 		
 		FILE *f; //definindo ponteiro para percorrer o arquivo
 		char c, nome[30];// definindo variável para guardar o ponteiro e outra variável para receber o nome do arquivo do teclado
 		int i;
 		
 		printf("Digite o nome do arquivo:\n");
 		scanf("%s", &nome);
 		
 		f = fopen(nome, "r");// abrindo arquivo no modo leitura utilizando o ponteiro arq
 		
 		if(f == NULL){ //verificando se o arquivo foi aberto
			printf("erro na abertura do arquivo\n");
		}
		else{
			printf("\n-----Dados do arquivo:\n\n");
		
			c = fgetc(f); // a variável c vai receber o primeiro ponteiro do arquivo, cada vez que o loop rodar, o ponteiro avança
			while(c != EOF){ //imprimir o arquivo até o fim
				printf("%c", c);
				c = fgetc(f);
			}
		
		}
		fclose(f);	
	}

********************************************************

--------EXERCÍCIO: Ler um arquivo todo em minúsculo e gravá-lo em outro arquivo, mas em maiúsculo

********************************************************
#include<stdio.h>
#include<ctype.h> //biblioteca onde se encontra funções para mudar maiúsculo-minúsculo e o inverso
#include<locale.h>	
	
 	int main(void){
 		setlocale(LC_ALL,"");
		
		FILE *f1, *f2;
		f1 = fopen("teste.txt","r");
		f2 = fopen("testeok.txt","w");
		
		char c;
		
		if(f1 == NULL || f2 == NULL){
			printf("erro ao abrir arquivo");
		}
		
		c = fgetc(f1);
		while(c != EOF){
		
			fputc(toupper(c), f2); //função de gravação. "toupper" é uma função para tranformar minusculo em maiusculo
			c = fgetc(f1);
		
		}

		fclose(f1);
		fclose(f2);
		
	}
********************************************************

--------EOF:

O EOF é bastante útil quando trabalhamos com textos, mas para o binário é um problema,
tendo em vista que EOF nos retorna uma constante do tipo inteira.

Para solucionar esse problema, podemos contar com a seguinte função.

--- Função feof()

A função feof sempre nos retorna '0', em caso contrário, significa que o arquivo chegou ao final.
Diferente do EOF, a função foef se bem em todas situações, tanto para binario quanto para texto.

Podemos fáciomente subistituir: 

	******************
	c = fgetc(f);
	while( c != EOF){}
	******************
	
Por:
	
	******************
	c = fgetc(f);
	while(!feof(f)){} // enquanto a função feof retornar '0', o laço é verdadeiro
	******************	
	
--------GRAVAR ARQUIVO (string):

 - Função fputs, forma geral:
 	int fputs(char *str, FILE *fp);
 	
 	Essa função grava a string inteira, ou seja, sem utilizar o "for" para percorrer caractere a caractere.
 	
 	a função recebe como parametro uma string e o arquivo onde ela será gravada ex.: (string, arq)
 	
 	Em caso de erro, a função nos retorna a constante EOF, 
 	em caso de sucesso ela nos retorna um valor diferente de zero.
 	
 			
		EXEMPLO COMPLETO DE GRAVAÇÃO(fputs):	
		
********************************************************	
	
#include<stdio.h>
#include<locale.h>	
	
 	int main(void){
 		setlocale(LC_ALL,"");
 		
 		char texto[30], aux; //string para receber o conteúdo a ser guardado, caractere para receber variável de decisão
 		int retorno; // retorno inteiro que verifica se o arquivo foi gravado a partir da constante EOF 
 		
 		printf("Digite o conteúdo do arquivo: ");
 		gets(texto); // Usando gets ao invés de scanf, porque o scanf utiliza o espaço como separador
 		
 		FILE *f; //Declarando ponteiro
 		f = fopen("fputs.txt", "w");//Criando e abrindo o arquivo no modo leitura
 		
 		if (f == NULL){ //Verifica se o arquivo foi aberto
			printf("erro na abertura do arquivo\n");	
		}
		
		retorno = fputs(texto, f); //Atribui o retorno da função de gravação a variável retorno
		if(retorno == EOF){ //se o retorno for EOF, deu erro, se não, ok
			printf("erro na gravação do arquivo\n");	
		}
		
		printf("Deseja adicionar mais(s/n)? "); //Testando se dá para gravar mais no documento
 		scanf("%c",&aux);
 		
 		switch (aux){//verifica a resposta
 			case 's':
 				fflush(stdin);//limpa o teclado
				fputc(' ', f);//da um espaço entre o conteúdo gravado e o conteúdo a ser gravado
				printf("Digite: ");//solicita conteúdo
 				gets(texto);
 		
 				retorno = fputs(texto, f);//faz verificação da gravação
				if(retorno == EOF){
				printf("erro na gravação do arquivo\n");
				}
				
			break;
			
		 	default:

				fclose(f);// fecha o arquivo caso não deseje guardar mais nada 
	}
	fclose(f);//fecha o arquivo após gravar tudo
	}
********************************************************

--------LER ARQUIVO (string - fgets):	

		
	
	*/
	
		
