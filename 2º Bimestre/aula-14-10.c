#include <stdio.h>
#include <stdlib.h>

/* 
	Faça um programa que leia 10 números, inteiros positivos, ignorando os negativos e calcule a soma e a média e mostre na tela.
	OBS: Somente 3 variáveis (i, n, s). Não pode ser vetor. Não pode usar laço FOR.
*/

int main(int argc, char *argv[]) {
	int i, n, s;
	s=0;
	
	while (i<10){
		scanf("%d", &n);
		if (n>0){
			s += n;
			i++;
		}
	}
	
	printf("%d | %d", s, s/10);
	
	return 0;
}
