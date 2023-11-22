#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Entrada: Inserir o nome do herói e a quantidade de xp;
   Processamento: Utilizar uma estrutura de decisão para definir a classe do herói dependendo da quantidade de XP;
   Saída: Exibir uma mensagem com o nome do herói e o nível em que ele está. */ 


int main() {
	
	setlocale(LC_ALL, "");
	/* declaração de variáveis */
	char nome[30]; 
	int xp;
	char classes[7][25];
	int l;
	
	/* entrada de dados */ 
	for(l = 0; l <= 7; l++){ // Inserção das classes
		printf("Por favor, digite o nome das classes de forma ascendente:\n", l);
		scanf("%25[^\n]", classes[l]);
		scanf("%c");
	}
	
	printf("Herói, por favor, insira seu nome:\n"); // Nome do herói
	scanf("%s", nome);
	printf("Herói, %s. Insira a quantidade de XP:\n", nome); // Quantidade de XP
	scanf("%d", &xp);
	
	/* processamento de dados */ 
	
	if(xp <= 1000){
		printf("O herói de nome %s, está no nível: %s.", nome, classes[0]);
		}else{
		 	if(xp > 1000 && xp <= 2000){
				printf("O herói de nome %s, está no nível: %s.", nome, classes[1]);
			}else{
				if(xp > 2000 && xp <= 5999){
					printf("O herói de nome %s, está no nível: %s.", nome, classes[2]);
				}else{
					if(xp > 6000 && xp <= 7000){
						printf("O herói de nome %s, está no nível: %s.", nome, classes[3]);
					}else{
						if(xp > 7000 && xp <= 8000){
							printf("O herói de nome %s, está no nível: %s.", nome, classes[4]);
						}else{
							if(xp > 8000 && xp <= 9000){
								printf("O herói de nome %s, está no nível: %s.", nome, classes[5]);
							}else{
								if(xp > 9000 && xp  <= 10000){
									printf("O herói de nome %s, está no nível: %s.", nome, classes[6]);
								}else{
									if(xp > 10000){
										printf("O herói de nome %s, está no nível: %s.", nome, classes[7]);
										}else{
										printf("XP Inválido ou não reconhecido.");
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
