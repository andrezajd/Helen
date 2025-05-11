/*+Faça um programa que calcule e mostre a tabuada (1 ao 10) de um número digitado
pelo usuário*/

#include<stdio.h>
int main () {
    int a;
    printf("digite um numero inteiro: ");
    scanf("%d", &a);

    printf("\n%d x 1 = %d",a,a*1);
    printf("\n%d x 2 = %d",a,a*2);
    printf("\n%d x 3 = %d",a,a*3);
    printf("\n%d x 4 = %d",a,a*4);
    printf("\n%d x 5 = %d",a,a*5);
    printf("\n%d x 6 = %d",a,a*6);
    printf("\n%d x 7 = %d",a,a*7);
    printf("\n%d x 8 = %d",a,a*8);
    printf("\n%d x 9 = %d",a,a*9);
    printf("\n%d x 10 = %d",a,a*10);


return 0;
}
