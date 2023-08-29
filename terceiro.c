#include <stdio.h>

int main() {
    float A, B, C;

    printf("Digite três valores (A, B e C): ");
    scanf("%f %f %f", &A, &B, &C);

    if (A <= B && A <= C) {
        printf("Valores em ordem ascendente: %f %f %f\n", A, (B <= C ? B : C), (B <= C ? C : B));
    } else if (B <= A && B <= C) {
        printf("Valores em ordem ascendente: %f %f %f\n", B, (A <= C ? A : C), (A <= C ? C : A));
    } else {
        printf("Valores em ordem ascendente: %f %f %f\n", C, (A <= B ? A : B), (A <= B ? B : A));
    }

    return 0;
}
