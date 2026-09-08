#include <stdio.h>

int main() {
    float tempo, velocidade, distancia, litros;

    printf("Digite o tempo da viagem (em horas): ");
    scanf("%f", &tempo);

    printf("Digite a velocidade media (em km/h): ");
    scanf("%f", &velocidade);

    distancia = tempo * velocidade;
    litros = distancia / 12;

    printf("Litros necessarios: %.3f\n", litros);

    return 0;
}
