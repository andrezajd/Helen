/*6. Fa�a um programa que receba a quantidade de dinheiro em reais que uma pessoa
que vai viajar possui. Ela vai passar por v�rios pa�ses e precisa converter seu dinheiro
em d�lares, marco alem�o e libra esterlina. Sabe-se que a cota��o do d�lar � de R$
3,80, a do marco alem�o � de R$ 4,00 e da libra esterlina � de R$ 3,57.*/

#include<stdio.h>
int main (){
float reais;
float dolar, marco_alemao, libra_esterlina;

//cota�ao das moedas

float cotacao_dolar = 3.80;
float cotacao_marco = 4.00;
float cotacao_libra = 3.57;

// entrada do usuario

printf("Digite a quantidade de dinheiro em reais (R$): ");
scanf("%f", &reais);

// Convers�es
    dolar = reais / cotacao_dolar;
    marco_alemao = reais / cotacao_marco;
    libra_esterlina = reais / cotacao_libra;


//saida

printf("\nCom R$%.2f voce pode comprar:\n",reais);
printf("-%.2f d�lares\n", dolar );
printf("-%.2f marcos alem�es\n", marco_alemao);
printf("-%.2f libras esterlinas\n",libra_esterlina);


return 0;
}

