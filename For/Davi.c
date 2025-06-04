// Peça um número ao usuário e calcule seu fatorial.

#include<stdio.h>

int main() {
    int num;
    scanf("%d", &num);

    int fatorial = 1;
    for (int i = 1; i <= num; i++)
        fatorial = fatorial*i;
        // i = 1; fatorial = 1;
        // i = 2; fatorial = 2;
        // i = 3; fatorial = 6;
        // i = 4; fatorial = 24;
        // i = 5; fatorial = 120;

    printf("O fatorial de %d eh %d", num, fatorial);
}
