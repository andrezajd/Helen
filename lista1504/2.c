/* Um funcion�rio recebe um sal�rio fixo mais 4% de comiss�o sobre as vendas. Fa�a
um programa que receba o sal�rio fixo do funcion�rio e o valor de suas vendas, calcule
e mostre a comiss�o e seu sal�rio final. */

#include<stdio.h>
int main () {
    float salario, comissao, salc;

    printf("Digite o primeiro valor: ");
    scanf("%f", &salario);
    printf("Digite o segundo valor: ");
    scanf("%f", &comissao);

    salc = salario + (comissao * 0.04);

    printf("%.2f",salc);

return 0;

}
