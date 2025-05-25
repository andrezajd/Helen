/*Classificação de Clientes por Gasto:
● Entrada: Peça ao usuário para digitar o valor total gasto pelo cliente (float).
● Processamento: Use else if para classificar o cliente:
○ Gasto maior ou igual a 1000.00: "Classificação: Cliente Diamante"
○ Gasto maior ou igual a 500.00: "Classificação: Cliente Ouro"
○ Gasto maior ou igual a 200.00: "Classificação: Cliente Prata"
○ Gasto maior que 0.00: "Classificação: Cliente Bronze"
○ Gasto igual a 0.00: "Nenhum gasto registrado."
○ Gasto negativo: "Valor de gasto inválido."
● Saída: Exiba a classificação do cliente.*/

#include<stdio.h>
int main (){
    float vltotal;
    printf("Digite o valor total de gasto!\n");
    scanf("%f", &vltotal);

    if (vltotal >= 1000.00){
        printf("Cliente Diamante\n");

    }else if (vltotal >= 50000){
        printf("Cliente Ouro\n");

    }else if (vltotal >= 200.00) {
        printf("Cliente Prata");

    }else if (vltotal > 0.00){
        printf("Nenhum Gasto Registrado");

    }else {
        printf("Valor de Gasto Invalido");

    }

    return 0;
}
