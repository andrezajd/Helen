//Declare uma variável booleana e inverta seu valor com !. Exiba o resultado antes e depois da inversão.

#include <stdio.h>
#include <stdbool.h>

int main() {
    bool a = true;  // Declarando a variável booleana

    // Exibindo valor antes da inversão
    printf("Antes da inversão: ");
    if (a) {
        printf("true\n");
    } else {
        printf("false\n");
    }

    // Invertendo com !
    a = !a;

    // Exibindo valor depois da inversão
    printf("Depois da inversão: ");
    if (a) {
        printf("true\n");
    } else {
        printf("false\n");
    }

    return 0;
}
