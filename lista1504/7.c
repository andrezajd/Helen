/*Faça um programa que receba a medida de dois ângulos de um triangulo, calcule e
mostre a medida do terceiro ângulo. Sabe-se que a soma dos ângulos de um triângulo
é 180 graus.*/

#include<stdio.h>

int main () {
    float ang1, ang2, ang3;

    printf("Digite o angulo 1: ");
    scanf("%f", &ang1);

    printf("Digite o angulo 2: ");
    scanf("%f", &ang2);

    if (ang1 + ang2 >= 180) {
        printf("Dá não");
    }
    else {
        ang3 = 180 - ang1 - ang2;
        printf("O terceiro angulo eh: %.2f", ang3);
    }


return 0;
}
