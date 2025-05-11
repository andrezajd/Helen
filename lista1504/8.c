/*Faça um programa que receba uma hora (uma variável para hora e outra para
minutos), calcule e mostre:
a) A hora digitada convertida em minutos;
b) O total dos minutos, ou seja, os minutos digitados mais a conversão anterior;
c) O total dos minutos convertidos em segundos.*/

#include<stdio.h>
int main () {

    float hora, minutos;

    printf("Hora: ");
    scanf("%f", &hora);
    printf("Minutos: ");
    scanf("%f", &minutos);


    printf("%.0f", hora);
    printf(" horas em minutos eh: %.0f", hora * 60);

    printf("\no total em minutos eh: %.0f", hora*60 + minutos);
    printf("\no total em segundos eh: %.0f", 60*(hora*60 + minutos));


    return 0;
}

