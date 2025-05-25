/*Cálculo de Imposto de Renda (Simplificado)
● O que o programa deve fazer: Nosso programa vai simular um cálculo bem simples de
imposto de renda. Ele vai perguntar qual é o seu salário e, dependendo de quanto você
ganha, vai calcular um valor de imposto a pagar, seguindo algumas regras de "faixas
salariais".
● Regras de Cálculo (Simplificadas): Imagine que o imposto funciona assim:
○ Se o seu salário for até R$ 1903.98: Você não precisa pagar imposto (imposto é
R$ 0.00).
○ Se o seu salário for maior que R$ 1903.98 e até R$ 2826.65: O imposto a pagar é
7.5% do seu salário, menos um valor fixo de R$ 142.80.
○ Se o seu salário for maior que R$ 2826.65 e até R$ 3751.05: O imposto a pagar é
15% do seu salário, menos um valor fixo de R$ 354.80.
○ Se o seu salário for maior que R$ 3751.05 e até R$ 4664.68: O imposto a pagar é
22.5% do seu salário, menos um valor fixo de R$ 636.13.
○ Se o seu salário for maior que R$ 4664.68: O imposto a pagar é 27.5% do seu
salário, menos um valor fixo de R$ 869.36.
○ Atenção: Se alguém digitar um salário que não faz sentido (por exemplo, um
valor negativo), o programa deve avisar que o salário é inválido*/

#include<stdio.h>
int main (){
    float salario;
    float imposto;
    printf("Digite seu salario: ");
    scanf("%f", &salario);

    if (salario < 1903.98 ){
        printf("Voce nao precisa pagar imposto");
    } else if(salario > 1908.98 && salario<2826.65){
              imposto=(salario*7.5)-142.80;
              printf("%f",imposto);

    }else if(salario >= 2826.65 && salario >= 3751.05){
            imposto=(salario*0.15)-354.80;
            printf("%f",imposto);

    }else if(salario >= 3751.05 && salario >= 4664.68){
            imposto=(salario*22.5)-636.13;
            printf("%f", imposto);

    }else if(salario >= 4664.68){
            imposto=(salario*27.5)-869.36;
            printf("%f", imposto);

    }else {
        printf("Salario Invalido");

    }

    return 0;
}
