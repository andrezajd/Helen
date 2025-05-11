/*Faça um programa que receba uma temperatura em Celsius, calcule e mostre essa
temperatura em Fahrenheit. Fórmula: 𝐹=1.8𝐶+32, sendo C o valor em Celsius*/

#include <stdio.h>

int main() {
    float celsius, fahrenheit;

    // Solicita ao usuário que digite a temperatura em Celsius
    printf("Digite a temperatura em Celsius: ");
    scanf("%f", &celsius);

    // Calcula a temperatura em Fahrenheit
    fahrenheit = 1.8 * celsius + 32;

    // Exibe o resultado
    printf("A temperatura em Fahrenheit é: %.2f\n", fahrenheit);

    return 0;
}


