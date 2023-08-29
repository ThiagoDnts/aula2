#include <stdio.h>

int main() {
    float A, B, C, D;

    printf("Digite quatro valores (A, B, C e D): ");
    scanf("%f %f %f %f", &A, &B, &C, &D);

    float maior = A;
    float menor = A;

    if (B > maior) {
        maior = B;
    }
    if (C > maior) {
        maior = C;
    }
    if (D > maior) {
        maior = D;
    }

    if (B < menor) {
        menor = B;
    }
    if (C < menor) {
        menor = C;
    }
    if (D < menor) {
        menor = D;
    }

    printf("O maior valor é: %f\n", maior);
    printf("O menor valor é: %f\n", menor);

    return 0;
}
