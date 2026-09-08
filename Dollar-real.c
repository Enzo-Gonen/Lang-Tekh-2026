#include <stdio.h>

int main() {
    float real, cotacao, dolar;

    printf("Digite o valor em reais: ");
    scanf("%f", &real);

    printf("Digite a cotacao do dolar: ");
    scanf("%f", &cotacao);

    dolar = real / cotacao;

    printf("Valor em dolares: %.2f\n", dolares);

    return 0;
}
