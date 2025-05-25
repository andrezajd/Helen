/*● Entrada: Peça ao usuário para digitar a sua idade (inteiro) e se é estudante (1 para Sim,
2 para Não).
● Processamento: Use ifs encadeados para determinar a categoria de elegibilidade:
○ Se a idade for maior ou igual a 18, exiba: "Você é elegível para a categoria
Adulto."
○ Se a idade for maior ou igual a 12:
■ Se for estudante (1), exiba: "Você é elegível para a categoria Estudante
Adolescente."
■ Caso contrário(2), exiba: "Você não é elegível para a categoria Estudante
Adolescente."
○ Se a idade for maior ou igual a 6 e não atender às condições acima, exiba: "Você
é elegível para a categoria Infantil."
○ Se a idade for menor que 6, exiba: "Você é muito jovem para se inscrever."
● Saída: Exiba a categoria de elegibilidade.*/

#include<stdio.h>
int main (){
    int idade, estudante;
    printf("Digite a idade: ");
    scanf("%d", &idade);

    if (idade > 18 ){
        printf("Você é elegível para a categoria Adulto");

    }else if ( idade > 12){
        scanf("%d", &estudante);
        if (estudante == 1){
            printf("Voce e elegivel para a categoria Estudante Adolescente");

        }else if (estudante == 2){
                printf("Voce nao e elegivel para a categoria Estudante Adolescente");

        }

    } else if (idade >= 6){
   printf("Voce e elegivel para a categoria Infantil");

  }else {
     printf("Voce e muito jovem para se inscrever");

  }
return 0;
}
