/*Declare duas vari�veis inteiras e verifique se a primeira � maior ou igual �
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
