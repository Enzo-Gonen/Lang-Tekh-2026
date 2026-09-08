#include <stdio.h>

int main() {
    float graus, radianos;
    float p = 3.141592;

    printf("Digite o angulo em graus: ");
    scanf("%f", &graus);

    radianos = graus * p / 180;

    printf("Angulo em radianos: %.2f\n", radianos);

    return 0;
}
