/*Declare duas variáveis inteiras e verifique se a primeira é maior ou igual à
segunda. Exiba "Verdadeiro" ou "Falso".*/


#include<stdio.h>
int main () {
    int a, b;

    printf("digite o valor: ");
    scanf ("%d", &a);

    printf("digite o valor: ");
    scanf("%d", &b);

    if (a >= b)
        printf("verdadeiro");
    else
        printf("falso");


return 0;
}
