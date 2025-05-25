/*istema de Recomendação de Filmes por Gênero:
● Entrada: Peça ao usuário para digitar o gênero de filme desejado (1, 2, 3, 4, 5).
● Processamento: Use else if para recomendar um filme com base no gênero:
○ 1 "Aventura": "Recomendação: Indiana Jones e os Caçadores da Arca Perdida"
○ 2 "Comedia": "Recomendação: Se Beber, Não Case!"
○ 3 "Drama": "Recomendação: Um Sonho de Liberdade"
○ 4 "Terror": "Recomendação: O Iluminado"
○ 5 "Animacao": "Recomendação: Toy Story"
○ Para qualquer outro gênero, exiba: "Gênero não reconhecido. Desculpe!"
● Saída: Exiba a recomendação de filme ou a mensagem de gênero não reconhecido*/

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
