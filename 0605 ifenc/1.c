/* Escreva um programa que receba os três lados de um triângulo (inteiros) e
determine se ele é equilátero (todos os lados iguais), isósceles (dois lados iguais) ou
escaleno (todos os lados diferentes).*/

#include<stdio.h>
int main () {
    int a,b,c;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    if(a==b){
        if(b==c){
            printf("eqilatero");
        }
        else {
            printf("isoceles");
        }
    } else {
        printf("escaleno");
    }





return 0;
}
