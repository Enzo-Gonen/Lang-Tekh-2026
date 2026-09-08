#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	printf("Ex: I");
	
	int primeiro, segundo, aux;
	
	printf("Digite o primeiro Valor: ");
	scanf("%d", &primeiro);
	printf("Digite o segundo Valor: ");
	scanf("%d", &segundo);
	
	aux = primeiro;
	primeiro = segundo;
	segundo = aux;
	
	printf("%d \n%d", primeiro, segundo);
	
	printf("\n==================================== \n");
	
	double valorUm, valorDois, total;

	printf("Ex: II \n");

	printf("Digite o primeiro Valor: ");
	scanf("%lf", &valorUm);

	printf("Digite o segundo Valor: ");
	scanf("%lf", &valorDois);
	
	valorUm = 1e3;
	valorDois = 1e3;

	total = valorUm + valorDois;

	printf("\nO total é: %e\n", total);

	return 0;
}
