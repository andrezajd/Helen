//Declare uma vari�vel booleana e inverta seu valor com !. Exiba o resultado antes e depois da invers�o.

#include <stdio.h>
#include <stdbool.h>

int main() {
    bool a = true;  // Declarando a vari�vel booleana

    // Exibindo valor antes da invers�o
    printf("Antes da invers�o: ");
    if (a) {
        printf("true\n");
    } else {
        printf("false\n");
    }

    // Invertendo com !
    a = !a;

    // Exibindo valor depois da invers�o
    printf("Depois da invers�o: ");
    if (a) {
        printf("true\n");
    } else {
        printf("false\n");
    }

    return 0;
}
