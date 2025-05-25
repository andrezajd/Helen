/*Verificação de Acesso a um Evento por Idade e VIP:
● Entrada: Peça ao usuário para digitar sua idade (inteiro) e se possui ingresso VIP (1
para Sim, 2 para Não).
● Processamento: Use ifs encadeados para verificar o acesso:
○ Se a idade for maior ou igual a 16, exiba: "Acesso permitido."
○ Caso contrário (idade menor que 16), se a idade for maior ou igual a 14:
■ Se possuir ingresso VIP (1), exiba: "Acesso permitido como VIP."
■ Caso contrário, exiba: "Acesso negado. Idade mínima para não VIP é 16
anos."
○ Se a idade for menor que 14, exiba: "Acesso negado. Idade mínima é 14 anos
para VIPs."
● Saída: Exiba a mensagem de permissão ou negação de acesso.*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int idade, vip;

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    printf("Possui ingresso VIP? (1 para Sim, 2 para Não): ");
    scanf("%d", &vip);

    if (idade >= 16) {
        printf("Acesso permitido.\n");

    } else if (idade >= 14) {

        if (vip == 1) {
            printf("Acesso permitido como VIP.\n");

        } else {
            printf("Acesso negado. Idade mínima para não VIP é 16 anos.\n");
        }
    } else {
        printf("Acesso negado. Idade mínima é 14 anos para VIPs.\n");
    }
    system("pause");
    return 0;
}
