#include <stdio.h>

int main() {
    int quantidade;
    printf("Digite a quantidade comprada: ");
    scanf("%d", &quantidade);

    if (quantidade <= 10) {
        printf("Desconto: 0%%\n");
    } else if (quantidade <= 20) {
        printf("Desconto: 5%%\n");
    } else {
        printf("Desconto: 10%%\n");
    }

    return 0;
}
