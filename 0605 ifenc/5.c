/*Um ano é bissexto se for divisível por 4, mas não por 100, a menos que também
seja divisível por 400.*/

#include <stdio.h>

int main() {
    int ano;

    printf("Digite um ano: ");
    scanf("%d", &ano);

    if (ano % 4 == 0) {
        if (ano % 100 == 0) {
            if (ano % 400 == 0) {
                printf("Ano bissexto.\n");
            } else {
                printf("Nao é bissexto.\n");
            }
        } else {
            printf("Ano bissexto.\n");
        }
    } else {
        printf("Nao é bissexto.\n");
    }

    return 0;
}

