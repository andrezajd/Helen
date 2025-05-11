/*#include <stdio.h>

int main() {
    int nota;
    printf("Digite a nota (0 a 100): ");
    scanf("%d", &nota);

    if (nota >= 90) {
        printf("Conceito A\n");
    } else if (nota >= 80) {
        printf("Conceito B\n");
    } else if (nota >= 70) {
        printf("Conceito C\n");
    } else if (nota >= 60) {
        printf("Conceito D\n");
    } else {
        printf("Conceito F\n");
    }

    return 0;
}*/

#include <stdio.h>

int main() {
    int nota;
    printf("Digite a nota (0 a 100): ");
    scanf("%d", &nota);

    switch (nota / 10) {
        case 10:  // nota 100
        case 9:
            printf("Conceito A\n");
            break;
        case 8:
            printf("Conceito B\n");
            break;
        case 7:
            printf("Conceito C\n");
            break;
        case 6:
            printf("Conceito D\n");
            break;
        default:
            printf("Conceito F\n");
    }

    return 0;
}

