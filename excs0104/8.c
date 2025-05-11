#include<stdio.h>
int main(){
    int num1, num2, produto;
    printf("digite o primeiro valor: ");
    scanf("%d",&num1);
    printf("digite o segundo valor: ");
    scanf("%d",&num2);

    produto = num1*num2;

    printf("o produto eh: %d", produto);

    return 0;
}
