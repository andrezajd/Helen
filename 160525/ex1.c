#include<stdio.h>
int main () {
    int genfilm;
    printf("Digite o genero do filme desejado: ");
    scanf("%d", &genfilm);

    if (genfilm == 1){
        printf("Filme de Aventura\n");
        printf("recomendacao: ET");
    }else if (genfilm == 2){
        printf("Filme de Comedia\n");
        printf("Recomendacao: O todo Poderoso");

    }else if (genfilm == 3){
        printf("Filme de Drama\n");
        printf("Recomendacao: Um Olhar do Paraiso");

    }else if (genfilm == 4){
        printf("Filme de Terror\n");
        printf("Recomendacao: Todo Mundo em Panico");

    }else if (genfilm == 5){
        printf("Filme de animacao\n");
        printf("Recomendacao: Robo Selvagem");
    }
    else {
        printf("Genero nao reconhecido. Desculpe!");
    }



    return 0;
}
