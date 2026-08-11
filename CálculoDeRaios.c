#include <stdio.h>
#include <stdlib.h>
#define pi 3.14159

int main(int argc, char *argv[]) {
//Área do Círculo
	float raio, area, raioQuadrado;
	
	printf("Insira o valor de R: \n");
	scanf("%f", &raio);
	
	
	raioQuadrado = raio*raio;
	area = pi * raioQuadrado;
	
	printf("A Area do ciírculo de raio %f = %f \n", raio, area);
	
//Área do Trapézio
	float altura, baseMenor, baseMaior, areaT;
	
	printf("Insira o valor de H: \n");
	scanf("%f", &altura);
	
	printf("Insira o valor de B: \n");
	scanf("%f", &baseMaior);
	
	printf("Insira o valor de b: \n");
	scanf("%f", &baseMenor);
	
	areaT = ((baseMaior + baseMenor) * altura) / 2;	
	
		printf("A Area do Trapezio e %f\n", areaT);	
	return 0;	
}
