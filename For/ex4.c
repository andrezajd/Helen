/*Peça um número ao usuário e imprima sua tabuada de 1 a 10.*/
#include<stdio.h>
int main (){
    int numero, i;
    printf("Digite o numero para ver sua tabuada: ");
    scanf("%d", &numero);
    for (i = 1; i <=10; i++){
        printf("%d x %d = %d\n",numero, i,numero * i);
    }
    return 0;
}
