#include<stdio.h>
int main () {
    int idade;
    float altura;
    char nome[]="Andreza";  //sequencia de caracteres
    //[20] --> máximo de 20 caracteres


    printf("digite sua idade: ");
    scanf("%d",&idade);

    printf("digite sua altura: ");
    scanf("%f",&altura);

    // %c --> pois indica caractere
    //%s --> string --> sequencia de caracteres

    printf("\nSeu nome eh %s, sua idade eh %d, sua altura eh %.2f", nome, idade, altura);
    //%.2f duas casa decimais



    return 0;

}
