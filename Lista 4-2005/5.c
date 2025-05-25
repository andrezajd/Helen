/*Sistema de Nível de Usuário:
● Entrada: Peça ao usuário para digitar a quantidade de pontos que possui (inteiro).
● Processamento: Use ifs encadeados para determinar o nível e sub-nível do usuário:
○ Se os pontos forem maiores ou iguais a 1000, exiba: "Nível: Master"
■ Se os pontos forem maiores ou iguais a 2000, exiba também: "Sub-nível:
Elite"
■ Caso contrário (entre 1000 e 1999), exiba também: "Sub-nível:
Avançado"
○ Caso contrário (pontos menores que 1000), exiba: "Nível: Iniciante"
■ Se os pontos forem maiores ou iguais a 500, exiba também: "Sub-nível:
Intermediário"
■ Caso contrário (menores que 500), exiba também: "Sub-nível: Básico"
● Saída: Exiba o nível e sub-nível do usuário.*/

#include<stdio.h>
int main (){
    int points;
    printf("Digite a quantidade de pontos: ");
    scanf("%d", &points);

    if (points >= 1000){
        printf("Nivel Master!\n");
    }

    if (points >= 2000) {
        printf("Sub-nivel Elite!\n");
    }

    else if (points >=1000 && points <= 1999){
        printf("Sub-nivel avançado!\n");
    }

    else if (points < 1000){
        printf("Nivel iniciante!\n");

        if (points >= 500){
            printf("Sub-nivel Intermediario!\n");
        }

        else {
            printf("Sub-nivel basico!\n");
        }
    }
    return 0;
}
