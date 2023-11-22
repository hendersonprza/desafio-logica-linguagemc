#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Entrada: Inserir o nome do her�i e a quantidade de xp;
   Processamento: Utilizar uma estrutura de decis�o para definir a classe do her�i dependendo da quantidade de XP;
   Sa�da: Exibir uma mensagem com o nome do her�i e o n�vel em que ele est�. */ 


int main() {
	
	setlocale(LC_ALL, "");
	/* declara��o de vari�veis */
	char nome[30]; 
	int xp;
	char classes[7][25];
	int l;
	
	/* entrada de dados */ 
	for(l = 0; l <= 7; l++){ // Inser��o das classes
		printf("Por favor, digite o nome das classes de forma ascendente:\n", l);
		scanf("%25[^\n]", classes[l]);
		scanf("%c");
	}
	
	printf("Her�i, por favor, insira seu nome:\n"); // Nome do her�i
	scanf("%s", nome);
	printf("Her�i, %s. Insira a quantidade de XP:\n", nome); // Quantidade de XP
	scanf("%d", &xp);
	
	/* processamento de dados */ 
	
	if(xp <= 1000){
		printf("O her�i de nome %s, est� no n�vel: %s.", nome, classes[0]);
		}else{
		 	if(xp > 1000 && xp <= 2000){
				printf("O her�i de nome %s, est� no n�vel: %s.", nome, classes[1]);
			}else{
				if(xp > 2000 && xp <= 5999){
					printf("O her�i de nome %s, est� no n�vel: %s.", nome, classes[2]);
				}else{
					if(xp > 6000 && xp <= 7000){
						printf("O her�i de nome %s, est� no n�vel: %s.", nome, classes[3]);
					}else{
						if(xp > 7000 && xp <= 8000){
							printf("O her�i de nome %s, est� no n�vel: %s.", nome, classes[4]);
						}else{
							if(xp > 8000 && xp <= 9000){
								printf("O her�i de nome %s, est� no n�vel: %s.", nome, classes[5]);
							}else{
								if(xp > 9000 && xp  <= 10000){
									printf("O her�i de nome %s, est� no n�vel: %s.", nome, classes[6]);
								}else{
									if(xp > 10000){
										printf("O her�i de nome %s, est� no n�vel: %s.", nome, classes[7]);
										}else{
										printf("XP Inv�lido ou n�o reconhecido.");
										}
									}
								}
							}
						}
					}
				}
			}
	
	return 0;
}
