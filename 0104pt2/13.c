/*Declare duas vari�veis inteiras e verifique se elas s�o iguais. Exiba
"Verdadeiro" ou "Falso".*/
#include<stdio.h>
int main () {
    int a, b;

    printf("digite o valor de a: ");
    scanf("%d", &a);

    printf("digite o valor de b: ");
    scanf("%d", &b);

    if (a == b)
        printf("Verdadeiro");

    else
        printf("falso");


return 0;
}

