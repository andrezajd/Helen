//biblioteca de entrega e sa�da
#include<stdio.h>

//iniciar meu c�digo
int main() {
    //ler peso
    float peso; //real --> flutuante

    printf("Digite seu peso: ");
    scanf("%f",&peso);
    printf("seu peso eh: %f", peso);
    //adicionar \n no inicio da frase para pular linha
    printf("\nseu peso eh: %.1f", peso);
    printf("\nseu peso eh: %.2f", peso);
    printf("\nseu peso eh: %.3f", peso); //%.3f --> 3 casas decimais ap�s a v�rgula

    return 0;

}
