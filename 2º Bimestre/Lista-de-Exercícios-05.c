
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

#define N 5

void exercicio1() {
    int v[N], i, j, aux;

    printf("\nExercicio 1\n");

    for (i = 0; i < N; i++) {
        printf("Digite um numero: ");
        scanf("%d", &v[i]);
    }

    printf("Ordem inversa:\n");
    for (i = N - 1; i >= 0; i--)
        printf("%d ", v[i]);

    for (i = 0; i < N; i++) {
        for (j = 0; j < N - 1; j++) {
            if (v[j] < v[j + 1]) {
                aux = v[j];
                v[j] = v[j + 1];
                v[j + 1] = aux;
            }
        }
    }

    printf("\nOrdem decrescente:\n");
    for (i = 0; i < N; i++)
        printf("%d ", v[i]);

    printf("\n");
}

void exercicio2() {
    double n;
    int exp = 0;

    printf("\nExercicio 2\nDigite um numero positivo: ");
    scanf("%lf", &n);

    if (n <= 0) {
        printf("Numero invalido!\n");
        return;
    }

    while (n >= 10) {
        n /= 10;
        exp++;
    }

    while (n < 1) {
        n *= 10;
        exp--;
    }

    printf("Resultado: %.2f x 10^%d\n", n, exp);
}

void binario(int n) {
    if (n > 1)
        binario(n / 2);

    printf("%d", n % 2);
}

void exercicio3() {
    int n;

    printf("\nExercicio 3\nDigite um numero de 1 a 64: ");
    scanf("%d", &n);

    if (n < 1 || n > 64) {
        printf("Numero invalido!\n");
        return;
    }

    printf("Binario: ");
    binario(n);
    printf("\n");
}

int maior(int a, int b) {
    if (a > b)
        return a;
    else
        return b;
}

void exercicio4() {
    int v[10], i, m;

    printf("\nExercicio 4\n");

    for (i = 0; i < 10; i++) {
        printf("Digite um numero: ");
        scanf("%d", &v[i]);
    }

    m = v[0];

    for (i = 1; i < 10; i++)
        m = maior(m, v[i]);

    printf("%d eh o maior\n", m);
}

int primo(int n) {
    int i;

    if (n < 2)
        return 0;

    for (i = 2; i < n; i++)
        if (n % i == 0)
            return 0;

    return 1;
}

void exercicio5() {
    int v[N], i;

    printf("\nExercicio 5\n");

    for (i = 0; i < N; i++)
        v[i] = rand() % 200 + 1;

    for (i = 0; i < N; i++) {
        printf("%d - ", v[i]);
        printf(v[i] % 2 == 0 ? "Par" : "Impar");

        if (primo(v[i]))
            printf(" e primo");

        printf("\n");
    }
}

double distancia(double x1, double y1,
                 double x2, double y2) {
    return sqrt((x2 - x1) * (x2 - x1) +
                (y2 - y1) * (y2 - y1));
}

void exercicio6() {
    double x1[N], y1[N], x2[N], y2[N];
    int i;

    printf("\nExercicio 6\n");

    for (i = 0; i < N; i++) {
        printf("Digite x1 e y1: ");
        scanf("%lf %lf", &x1[i], &y1[i]);
    }

    for (i = 0; i < N; i++) {
        printf("Digite x2 e y2: ");
        scanf("%lf %lf", &x2[i], &y2[i]);
    }

    for (i = 0; i < N; i++)
        printf("Distancia: %.2f\n",
            distancia(x1[i], y1[i], x2[i], y2[i]));
}

void exercicio7() {
    int v[N], i, achou = 0;

    printf("\nExercicio 7\n");

    for (i = 0; i < N; i++) {
        printf("Digite um numero: ");
        scanf("%d", &v[i]);
    }

    for (i = 0; i < N - 1; i++) {
        if (v[i + 1] == v[i] + 1) {
            printf("%d %d\n", v[i], v[i + 1]);
            achou = 1;
        }
    }

    if (!achou)
        printf("Nenhuma sequencia encontrada.\n");
}

int main() {
    srand(time(NULL));

    exercicio1();
    exercicio2();
    exercicio3();
    exercicio4();
    exercicio5();
    exercicio6();
    exercicio7();

    return 0;
}

