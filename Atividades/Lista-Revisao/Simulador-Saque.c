#include <stdio.h>

int main() {
    int valor;

    printf("SAQUE: 🗿\n");
    printf("Digite o valor do saque: R$ ");
    scanf("%d", &valor);

    printf("NOTAS ENTREGUES ---\n");

    printf("R$ 100: %d\n", valor / 100);
    valor = valor % 100;

    printf("R$ 50: %d\n", valor / 50);
    valor = valor % 50;

    printf("R$ 20: %d\n", valor / 20);
    valor = valor % 20;

    printf("R$ 10: %d\n", valor / 10);
    valor = valor % 10;

    printf("R$ 5: %d\n", valor / 5);
    valor = valor % 5;

    printf("R$ 2: %d\n", valor / 2);
    valor = valor % 2;

    printf("R$ 1: %d\n", valor / 1);
    valor = valor % 1;
  

    return 0;
}
