/*● Entrada: Peça ao usuário para digitar a temperatura (número inteiro).
● Processamento: Use ifs encadeados para gerar alertas:
○ Se a temperatura for maior que 30, exiba: "Alerta: Temperatura muito alta!"
■ Se a temperatura for ainda maior que 35, exiba também: "Atenção
máxima: Risco de insolação!"
○ Caso contrário (temperatura não é maior que 30), se a temperatura for menor
que 10, exiba: "Alerta: Temperatura muito baixa!"
■ Se a temperatura for ainda menor que 0, exiba também: "Atenção
máxima: Risco de congelamento!"
○ Se a temperatura estiver entre 10 e 30 (inclusive), exiba: "Temperatura
agradável."
● Saída: Exiba a mensagem de alerta de temperatura.*/

#include<stdio.h>
int main (){
    int temperatura;
    printf("Digite a temperatura: ");
    scanf("%d", &temperatura);

    if (temperatura > 30){
         printf("Temperatura muito alta!\n");
        if(temperatura > 35){
            printf("Atenção máxima: Risco de insolação!\n");
        }

    } else if (temperatura < 10){
        printf("Temperatura muito baixa!\n");
        if (temperatura < 0){
            printf("Risco de congelamento!\n");
        }

    } else {
        printf("Temperatura agradavel!");

    }


return 0;
}


