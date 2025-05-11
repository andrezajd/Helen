/*6. Faça um programa que receba a quantidade de dinheiro em reais que uma pessoa
que vai viajar possui. Ela vai passar por vários países e precisa converter seu dinheiro
em dólares, marco alemão e libra esterlina. Sabe-se que a cotação do dólar é de R$
3,80, a do marco alemão é de R$ 4,00 e da libra esterlina é de R$ 3,57.*/

#include<stdio.h>
int main (){
float reais;
float dolar, marco_alemao, libra_esterlina;

//cotaçao das moedas

float cotacao_dolar = 3.80;
float cotacao_marco = 4.00;
float cotacao_libra = 3.57;

// entrada do usuario

printf("Digite a quantidade de dinheiro em reais (R$): ");
scanf("%f", &reais);

// Conversões
    dolar = reais / cotacao_dolar;
    marco_alemao = reais / cotacao_marco;
    libra_esterlina = reais / cotacao_libra;


//saida

printf("\nCom R$%.2f voce pode comprar:\n",reais);
printf("-%.2f dólares\n", dolar );
printf("-%.2f marcos alemães\n", marco_alemao);
printf("-%.2f libras esterlinas\n",libra_esterlina);


return 0;
}

