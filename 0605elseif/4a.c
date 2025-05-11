#include <stdio.h>

int main() {
    int angulo;
    printf("Digite o ângulo em graus: ");
    scanf("%d", &angulo);

    if (angulo < 90) {
        printf("Ângulo agudo.\n");
    } else if (angulo == 90) {
        printf("Ângulo reto.\n");
    } else if (angulo < 180) {
        printf("Ângulo obtuso.\n");
    } else if (angulo == 180) {
        printf("Ângulo raso.\n");
    } else {
        printf("Ângulo inválido.\n");
    }

    return 0;
}
