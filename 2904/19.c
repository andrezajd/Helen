//Declare duas vari�veis inteiras e verifique se a primeira � maior que 10 e a segunda � menor que 5 usando &&. Exiba "Verdadeiro" ou "Falso".
#include<stdio.h>
int main (){

int a, b;
printf("Digite o valor de a: ");
scanf("%d", &a);

printf("Digite o valor de b: ");
scanf("%d", &b);

if (a > 10 && b < 5)
    printf("verdadeiro");

    else
    printf("falso");



return 0;
}
