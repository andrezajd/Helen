/*Jogo Simples de Adivinhação (com dicas):
● Entrada: O programa deve ter um número secreto predefinido (por exemplo, 50). Peça
ao usuário para tentar adivinhar esse número (inteiro).
● Processamento:
○ Se o palpite for diferente do número secreto, exiba: "Você errou!"
■ Se o palpite for menor que o número secreto, exiba: "Dica: O número
secreto é maior."
■ Se o palpite for muito menor (por exemplo, 10 ou mais abaixo),
exiba uma dica extra: "Dica extra: Está bem mais alto."
■ Se o palpite for maior que o número secreto, exiba: "Dica: O número
secreto é menor."
■ Se o palpite for muito maior (por exemplo, 10 ou mais acima),
exiba uma dica extra: "Dica extra: Está bem mais baixo."
○ Se o palpite for igual ao número secreto, exiba: "Parabéns! Você acertou!"
● Saída: Exiba as mensagens de erro ou acerto e as dicas.*/

/*#include<stdio.h>
int main(){

    int secreto = 50;
    int num;
    printf("Adivinha um numero!: ");
    scanf("%d", &num);

    if (num != 50){
         printf("Voce Errou!\n");
    }if (num < 50){
        printf("Dica:O numero secreto eh maior\n");

    }if (num <= 10){
        printf("Dica Extra: está bem mais alto!\n");
    }if (num > 50){
        printf("Dica: O numero secreto eh menor\n");
    }if (num > 100){
        printf("Dica Extra: Esta bem mais baixo!\n");
    }if (num == 50){
        printf("Parabéns vc acertou!");
    }

    return 0;
}*/

#include <stdio.h>

int main() {
    int secreto = 50;
    int palpite;

    printf("Adivinhe o número secreto: ");
    scanf("%d", &palpite);

    if (palpite == secreto) {
        printf("Parabéns! Você acertou!\n");
    } else {
        printf("Você errou!\n");

        if (palpite < secreto) {
            printf("Dica: O número secreto é maior.\n");

            if (secreto - palpite >= 10) {
                printf("Dica extra: Está bem mais alto!\n");
            }
        } else {  // palpite > secreto
            printf("Dica: O número secreto é menor.\n");

            if (palpite - secreto >= 10) {
                printf("Dica extra: Está bem mais baixo!\n");
            }
        }
    }

    return 0;
}

