/* Desafio: Pe�a 5 notas (0 a 100) ao usu�rio e classifique como Aprovado,
Recupera��o ou Reprovado*/
#include <stdio.h>
int main (){
int nota;
for(int i = 1; i <=5; i++){
    printf("Digite a nota do aluno : ");
    scanf("%d", &nota);

 if (nota <= 10 ){
    printf("reprovado");
 }else if(nota >=11 && nota <= 30){
    printf("");
 }
}

 return 0;
}



