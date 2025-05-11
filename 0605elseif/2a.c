/*#include <stdio.h>

int main() {
    int mes;
    printf("Digite o número do mês (1 a 12): ");
    scanf("%d", &mes);

    if (mes == 1) {
        printf("Signo: Aquário\n");
    } else if (mes == 2) {
        printf("Signo: Peixes\n");
    } else if (mes == 3) {
        printf("Signo: Áries\n");
    } else if (mes == 4) {
        printf("Signo: Touro\n");
    } else if (mes == 5) {
        printf("Signo: Gêmeos\n");
    } else if (mes == 6) {
        printf("Signo: Câncer\n");
    } else if (mes == 7) {
        printf("Signo: Leão\n");
    } else if (mes == 8) {
        printf("Signo: Virgem\n");
    } else if (mes == 9) {
        printf("Signo: Libra\n");
    } else if (mes == 10) {
        printf("Signo: Escorpião\n");
    } else if (mes == 11) {
        printf("Signo: Sagitário\n");
    } else if (mes == 12) {
        printf("Signo: Capricórnio\n");
    } else {
        printf("Mês inválido.\n");
    }

    return 0;
}*/

#include<stdio.h>

int main() {
    int mes;
    printf("digite o mes de (1 a 12): ");
    scanf("%d", &mes);

switch (mes){
case 1:
    printf("aquario");
    break;
case 2:
    printf("peixes");
    break;
case 3:
    printf("aries");
    break;
case 4:
    printf("touro");
    break;
case 5:
    printf("gemeos");
    break;
case 6:
    printf("cancer");
    break;
case 7:
    printf("leão");
    break;
case 8:
    printf("virgem");
    break;
case 9:
    printf("libra");
    break;

case 10:
    printf("escorpião");
    break;
case 11:
    printf("sgitario");
    break;
case 12:
    printf("capricornio");
    break;
default:
    printf("mes invalido");

    }

    return 0;
}
