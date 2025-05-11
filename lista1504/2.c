/* Um funcionário recebe um salário fixo mais 4% de comissão sobre as vendas. Faça
um programa que receba o salário fixo do funcionário e o valor de suas vendas, calcule
e mostre a comissão e seu salário final. */

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
