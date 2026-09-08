#include <stdio.h>

int main() {
    int segundos, horas, minutos, segundosRestantes;

    printf("Digite o tempo em segundos: ");
    scanf("%d", &segundos);

    horas = segundos / 3600;
    segundosRestantes = segundos % 3600;
    minutos = segundosRestantes / 60;
    segundosRestantes = segundosRestantes % 60;

    printf("%02d:%02d:%02d\n", horas, minutos, segundosRestantes);

    return 0;
}
