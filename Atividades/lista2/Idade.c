#include <stdio.h>

int main() {
    int idade, anoAtual, anoNascimento;

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    printf("Digite o ano atual: ");
    scanf("%d", &anoAtual);

    anoNascimento = anoAtual - idade;

    printf("Você nasceu em: %d\n", anoNascimento);

    return 0;
}
