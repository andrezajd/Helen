/*Determinação da Estação do Ano (por mês):
● Entrada: Peça ao usuário para digitar o número do mês (inteiro de 1 a 12).
● Processamento: Use else if para determinar a estação do ano (hemisfério norte):
○ 12, 1, 2: "Estação: Inverno"
○ 3, 4, 5: "Estação: Primavera"
○ 6, 7, 8: "Estação: Verão"
○ 9, 10, 11: "Estação: Outono"
○ Se o número do mês for inválido, exiba: "Mês inválido."
● Saída: Exiba a estação do ano*/

#include<stdio.h>
int main (){
    int nummes;
    printf("Digite o numero do mes: ");
    scanf("%d", &nummes);

    if (nummes == 12|| nummes == 1 || nummes == 2){
        printf("Estacao Inverno");

    }else if (nummes == 3 || nummes == 4 || nummes == 5){
        printf("Estacao Primavera");

    }else if (nummes == 9 || nummes == 10 ||nummes == 11){
        printf("Estacao Outono");

    }else {
        printf("Mes Invalido");

    }


    return 0;
}
