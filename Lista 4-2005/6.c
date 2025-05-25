/*Conversão de Código de Erro:
● Entrada: Peça ao usuário para digitar um código de erro (inteiro).
● Processamento: Use else if para associar o código à sua descrição:
○ 1: "Erro: Arquivo não encontrado."
○ 2: "Erro: Permissão negada."
○ 3: "Erro: Falha na leitura do disco."
○ 4: "Erro: Memória insuficiente."
○ 0: "Sem erros."
○ Para qualquer outro código, exiba: "Código de erro desconhecido."
● Saída: Exiba a descrição do erro.*/

#include<stdio.h>
int main (){
    int coderro;
    printf("Digite um codigo de erro!:\n ");
    scanf("%d", &coderro);

    if (coderro == 1){
        printf("Arquivo nao encontrado!\n");

    }else if (coderro == 2){
        printf("Permissao negada!\n");

    }else if (coderro == 3) {
        printf("Falha na leitura do disco!\n");

    }else if (coderro == 4){
        printf("Memoria insuficiente!\n");

    }else if (coderro == 0){
        printf("Sem erros");

    }
        else {
            printf("Código de erro desconhecido!\n");
        }

    return 0;
}
