/*Declare duas vari�veis inteiras e verifique se a primeira � maior que a
segunda. Exiba "Verdadeiro" ou "Falso"*/

/*As chaves são necessárias quando você quiser agrupar mais de uma instrução dentro do if ou else. Por exemplo, se você tiver várias instruções no else, você precisa usar as chaves para indicar que elas pertencem ao else.*/

/*Sem chaves: Você pode omitir as chaves se houver apenas uma instrução no bloco do if ou else.

Com chaves: Use as chaves quando houver mais de uma instrução em qualquer um dos blocos.*/

#include<stdio.h> //biblioteca de entrada e saida
int main () {//funçao principal
   int a, b;

   printf("Digite o valor de a: ");
   scanf("%d", &a);

   printf("Digite o valor de b: ");
   scanf("%d", &b);

   if (a > b)
        printf("verdadeiro");
    else
        



   return 0;
}



