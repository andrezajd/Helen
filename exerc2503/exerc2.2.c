#include<stdio.h>

int main (){
    int idade, idadeLimite=18;
    scanf("%d",&idade);

    printf("Idade: %d anos, %s \n", idade,(idade >= idadeLimite) ? "Maior de idade" : "Menor de idade");




    return 0;

}
