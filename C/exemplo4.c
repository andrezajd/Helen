//biblioteca de entrega e saída
#include<stdio.h>

//iniciar meu código
int main() {
    //ler peso
    float peso; //real --> flutuante

    printf("Digite seu peso: ");
    scanf("%f",&peso);
    printf("seu peso eh: %f", peso);
    //adicionar \n no inicio da frase para pular linha
    printf("\nseu peso eh: %.1f", peso);
    printf("\nseu peso eh: %.2f", peso);
    printf("\nseu peso eh: %.3f", peso); //%.3f --> 3 casas decimais após a vírgula

    return 0;

}
