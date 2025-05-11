#include<stdio.h>
int main () {
    //declarar variaveis
    //declarar uma variavel definida
    int var1=5;
    //variavel do tipo inteira (int)
    //a variavel recebe o valor 5
    //= --> atribuir

    //declarar uma variavel indefinida
    //vou entrar com o valor pelo teclado
    int var2;
    printf("digite um valor inteiro: ");
    //ler a variavel do teclado
    scanf("%d" , &var2);
    //scanf --> ler do teclado
    //%d --> vai ser variavel do tipo inteira
    /* &var2 --> vai ser salva na memória
    //var2 --> variavel que eu quero salvar um valor nela*/

    printf("%d", var1);
    printf("\n");
    printf("\n%d", var2); //--> \n pular linha

    printf("\n\n\n"); //pulei 3 linhas

    printf("%d", &var1); //imprimir o endereço da variavel
    printf("\n%d", &var2); //imprimir o endereço da variavel



    return 0;
}
