//Declare uma vari�vel inteira e verifique se ela est� entre 1 e 100 (inclusivo) usando &&. Exiba "Verdadeiro" ou "Falso".

#include <stdio.h>

int main() {
    int numero;

    printf("Digite um n�mero inteiro: ");
    scanf("%d", &numero);

    // Verifica se est� entre 1 e 100 (inclusive)
    if (numero >= 1 && numero <= 100) {
        printf("Verdadeiro\n");
    } else {
        printf("Falso\n");
    }

    return 0;
}
