 /* Peça ao usuário um número n e calcule a soma de 1 até n.*/
 #include<stdio.h>

int main() {
    int i, n;
    int soma = 0;

    printf("Digite um número inteiro positivo: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        soma += i;
        if (i < n)
            printf("%d + ", i);
        else
            printf("%d ", i);
    }


    printf("= %d\n", soma);

    return 0;
}
