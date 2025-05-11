/*Declare duas vari�veis inteiras e verifique se a primeira � maior que a
segunda. Exiba "Verdadeiro" ou "Falso"*/

/*As chaves são necessárias quando você quiser agrupar mais de uma instrução dentro do if ou else. Por exemplo, se você tiver várias instruções no else, você precisa usar as chaves para indicar que elas pertencem ao else.*/

/*Sem chaves: Você pode omitir as chaves se houver apenas uma instrução no bloco do if ou else.

Com chaves: Use as chaves quando houver mais de uma instrução em qualquer um dos blocos.*/

#include<stdio.h> //biblioteca de entrada e saida
int main () {//funçao principal
    int num1=5, num2=1;//valos definidos para n1 e n2
    printf("%d > %d => %s", num1, num2, num1 > num2 ? "verdade" : "falso");/*vou exibir com %d valor definido de num1,simbolo de maior exibor %d valor de num2 definido chamar a string(sequencia de caracteres) que sera no %s (verdade ou falso) chamar a variavel num1 > num2 num1 e num2 pergunto se nun1 > num2? exibo verdade ou falso no %s*/

    



   return 0;
}



