/* Escreva um programa que receba os tr�s lados de um tri�ngulo (inteiros) e
determine se ele � equil�tero (todos os lados iguais), is�sceles (dois lados iguais) ou
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
