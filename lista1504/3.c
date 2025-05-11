/*Faça um programa que receba o peso de uma pessoa em quilos, calcule e mostre
esse peso em gramas.*/

#include<stdio.h>
int main() {
    float pesokg, pesogm;

    printf("digite o peso em kilos: ");
    scanf("%f", &pesokg);

    pesogm = pesokg * 1000;

 printf("O peso em gramas eh: %.2f", pesogm);


return 0;
}

