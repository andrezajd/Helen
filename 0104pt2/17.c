/*Declare duas vari�veis inteiras e verifique se pelo menos uma delas �
maior que 10 usando ||. Exiba "Verdadeiro" ou "Falso".*/

#include<stdio.h>
int main () {
    int a, b;

    printf("digite o valor: ");
    scanf("%d", &a);

    printf("digite o valor: ");
    scanf("%d", &b);

    if (a > 10 || b > 10) 
        printf("verdadeiro");
        
    else
        printf("falso");



return 0;
}
